/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:25:48 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/19 18:33:00 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	printf_type(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += print_char(va_arg(args, int));
	else if (*format == 's')
		count += print_string(va_arg(args, char *));
	else if (*format == 'p')
		count += print_pointer(va_arg(args, void *));
	else if (*format == 'd')
		count += print_decimal(va_arg(args, int));
	else if (*format == 'i')
		count += print_decimal(va_arg(args, int));
	else if (*format == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x')
		count += print_hex_min(va_arg(args, unsigned int));
	else if (*format == 'X')
		count += print_hex_may(va_arg(args, unsigned int));
	else if (*format == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (ft_strchr("cspdiuxX%", *(format + 1)) && *format == '%')
		{
			count += printf_type(format + 1, args);
			format = format + 2;
		}
		else
		{
			count += print_char(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}

/*
int	main (void)
{
	int	count;
	ft_printf("\n--- Prueba 1: %%c ---\n");
	count = ft_printf("Hola%cAD%cIOS%c", 'a', 'i', '\n'); //%c
	ft_printf("contador: %d\n", count);

	ft_printf("\n--- Prueba 2: %%s ---\n");
	count = ft_printf("Probando_string: %s", "string1"); //%s
	ft_printf("\ncontador: %d\n", count);

	ft_printf("\n--- Prueba 3: %%p ---\n");
	int *i;
	i = malloc(sizeof(int));							//%p
	count = ft_printf("%p\n", i);
	ft_printf("contador: %d\n", count);
	free(i);

	ft_printf("\n--- Prueba 4: %%d ---\n");
	count = ft_printf("%d%c", 12345, '\n');				//%d
	ft_printf("contador: %d\n", count);

	ft_printf("\n--- Prueba 5: %%i ---\n");
	count = ft_printf("%i\n", 12345);					//%i
	ft_printf("contador: %d\n", count);

	ft_printf("\n--- Prueba 6: %%u ---\n");            //%u
	count = ft_printf("%u\n", 4294967295);
	ft_printf("contador: %d\n", count);

	ft_printf("\n--- Prueba 7: %%x ---\n");            //%x
	count = ft_printf("%x\n", 4294967295);
	ft_printf("contador: %d\n", count);

	ft_printf("\n--- Prueba 8: %%X ---\n");            //%X
	count = ft_printf("%X\n", 4294967295);
	ft_printf("contador: %d\n", count);

	ft_printf("\n--- Prueba 9: %%%% ---\n");			//%%
	count = ft_printf("%%\n");
	ft_printf("contador: %d\n", count);


	ft_printf("\n--- Prueba 10: %%s ---\n");			//%%
	
	count = printf("NULL %s NULL", NULL);
	printf("contador: %d\n", count);
	
	count = ft_printf("NULL %s NULL", NULL);
	ft_printf("contador: %d\n", count);

	
}
*/
