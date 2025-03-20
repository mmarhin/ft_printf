# **ft_printf** 📸  

![42 Málaga](https://img.shields.io/badge/42-M%C3%A1laga-blue)  
![C](https://img.shields.io/badge/Language-C-blue)  
![Status](https://img.shields.io/badge/Status-Completed-green)  

## 📌 **Descripción**  
**ft_printf** es una implementación personalizada de la función estándar `printf()` de C. Este proyecto forma parte del currículo de **42 Málaga** y tiene como objetivo profundizar en la gestión de cadenas, formatos de salida y uso de `variadic functions` en C.  

## 🚀 **Características**  
✅ Soporte para conversiones básicas:  
- `%c` → Caracter  
- `%s` → Cadena de caracteres  
- `%p` → Puntero  
- `%d` / `%i` → Enteros con signo  
- `%u` → Enteros sin signo  
- `%x` / `%X` → Hexadecimal (minúscula y mayúscula)  
- `%%` → Porcentaje  

✅ Manejo eficiente de `va_list` para argumentos variables  
✅ No usa funciones prohibidas (`printf`, `sprintf`, `vprintf`, etc.)  
✅ Código modular y optimizado para eficiencia  

## 📚 **Estructura del Proyecto**  
```
📦 ft_printf/
 ├── 📝 ft_printf.h      # Archivo de cabecera
 ├── 📝 ft_printf.c      # Función principal
 ├── 📝 ft_utils.c       # Funciones auxiliares
 ├── 📝 ft_hex_utils.c   # Conversión hexadecimal
 ├── 📝 Makefile         # Archivo para compilar el proyecto
 ├── 📝 main.c           # Archivo de pruebas
 └── 📝 README.md        # Este documento
```

## 🛠️ **Instalación y Uso**  
### 🔧 **Compilación**  
Para compilar la biblioteca, ejecuta:  
```bash
make
```
Esto generará un archivo `libftprintf.a`, que puedes incluir en otros proyectos.

### 📈 **Ejemplo de Uso**  
Puedes usar `ft_printf` en tu código de la siguiente manera:  
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hola, %s! Número: %d\n", "Mundo", 42);
    return 0;
}
```

## 📚 **Normas de 42 Cumplidas**  
✅ No leaks de memoria (`valgrind` comprobado)  
✅ Código norminette-compliant  

## 🔍 **Testing**  
Puedes compilar y ejecutar un `main.c` de pruebas:  
```bash
gcc -Wall -Wextra -Werror main.c libftprintf.a -o test
./test
```

## 📢 **Contribuciones**  
Si quieres mejorar este proyecto, **¡las contribuciones son bienvenidas!** Puedes hacer un **fork**, crear una **branch** y enviar un **pull request**.  

## 📚 **Licencia**  
Este proyecto es parte del currículo de **42 Málaga** y es de uso libre para aprendizaje y mejora.  

---

# **ft_printf** 📸 *(English version)*  

## 📌 **Description**  
**ft_printf** is a custom implementation of the standard `printf()` function in C. This project is part of the **42 Málaga** curriculum and aims to deepen knowledge in string handling, output formatting, and the use of `variadic functions` in C.  

## 🚀 **Features**  
✅ Support for basic conversions:  
- `%c` → Character  
- `%s` → String  
- `%p` → Pointer  
- `%d` / `%i` → Signed integers  
- `%u` → Unsigned integers  
- `%x` / `%X` → Hexadecimal (lowercase and uppercase)  
- `%%` → Percentage  

✅ Efficient handling of `va_list` for variable arguments  
✅ No use of forbidden functions (`printf`, `sprintf`, `vprintf`, etc.)  
✅ Modular and optimized code  

## 📚 **Project Structure**  
```
📦 ft_printf/
 ├── 📝 ft_printf.h      # Header file
 ├── 📝 ft_printf.c      # Main function
 ├── 📝 ft_utils.c       # Utility functions
 ├── 📝 ft_hex_utils.c   # Hexadecimal conversion
 ├── 📝 Makefile         # Compilation file
 ├── 📝 main.c           # Testing file
 └── 📝 README.md        # This document
```

## 🛠️ **Installation & Usage**  
### 🔧 **Compilation**  
To compile the library, run:  
```bash
make
```
This will generate a `libftprintf.a` file, which can be included in other projects.

### 📈 **Usage Example**  
You can use `ft_printf` in your code as follows:  
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! Number: %d\n", "World", 42);
    return 0;
}
```

## 📚 **42 Norm Compliance**  
✅ No memory leaks (`valgrind` checked)  
✅ Norminette-compliant code  

## 🔍 **Testing**  
You can compile and run a test `main.c`:  
```bash
gcc -Wall -Wextra -Werror main.c libftprintf.a -o test
./test
```

## 📢 **Contributions**  
If you want to improve this project, **contributions are welcome!** You can fork the repository, create a new branch, and submit a pull request.  

## 📚 **License**  
This project is part of the **42 Málaga** curriculum and is freely available for learning and improvement.  

