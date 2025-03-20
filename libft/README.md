
# Libft

[![42 Project](https://img.shields.io/badge/42-Project-blue?style=flat-square)](https://github.com/mmarhin/42)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Libft is a custom library developed as part of the **42 School** curriculum. This project involves recreating essential functions from the C standard library, along with additional utilities, providing a deeper understanding of their inner workings and preparing the foundation for future projects.

---

Libft es una biblioteca personalizada desarrollada como parte del programa de **42 School**. Este proyecto consiste en recrear funciones esenciales de la biblioteca estándar de C, junto con utilidades adicionales, para comprender mejor su funcionamiento interno y sentar las bases para futuros proyectos.

---

## 📚 Contents / Contenido

- [Features](#features--características)
- [Compilation and Usage](#compilation-and-usage--compilación-y-uso)
- [Project Structure](#project-structure--estructura-del-proyecto)
- [Requirements](#requirements--requisitos)
- [Contribution](#contribution--contribución)
- [License](#license--licencia)
- [Contact](#contact--contacto)

---

## Features / Características

### English

- A custom implementation of **standard C library functions** (e.g., `strlen`, `strcpy`, `atoi`, etc.).
- **Memory management functions** for allocating and manipulating memory.
- **String manipulation utilities** to handle and modify strings easily.
- Additional **helper functions** for mathematical operations, linked lists, and more.
- Modular, reusable, and efficient code, designed for integration into future projects.

### Español

- Implementación personalizada de **funciones estándar de la biblioteca de C** (por ejemplo, `strlen`, `strcpy`, `atoi`, etc.).
- Funciones de **gestión de memoria** para asignar y manipular memoria.
- Utilidades para la **manipulación de cadenas**, facilitando su uso y modificación.
- Funciones adicionales para **operaciones matemáticas**, listas enlazadas y más.
- Código modular, reutilizable y eficiente, diseñado para integrarse en proyectos futuros.

---

## 🛠️ Compilation and Usage / Compilación y Uso

### Compilation / Compilación

To compile the library, simply run:

```bash
make
```

This will generate the `libft.a` file, ready to be linked to your projects.

Para compilar la biblioteca, simplemente ejecuta:

```bash
make
```

Esto generará el archivo `libft.a`, listo para ser enlazado en tus proyectos.

---

### Usage / Uso

Include the library in your project by adding:

```c
#include "libft.h"
```

Then link the library during compilation:

```bash
gcc -o your_program your_code.c -L. -lft
```

Incluye la biblioteca en tu proyecto añadiendo:

```c
#include "libft.h"
```

Luego, enlaza la biblioteca al compilar:

```bash
gcc -o tu_programa tu_codigo.c -L. -lft
```

---

### Cleanup / Limpieza

To remove temporary files and the compiled library:

Para eliminar archivos temporales y la biblioteca compilada:

```bash
make clean   # Removes object files / Elimina los archivos objeto
make fclean  # Removes all, including libft.a / Elimina todo, incluyendo libft.a
```

---

## 📂 Project Structure / Estructura del Proyecto

- **Memory Functions / Funciones de Memoria**
  - `ft_memset`, `ft_memcpy`, `ft_memcmp`, `ft_memmove`, etc.
- **String Functions / Funciones de Cadenas**
  - `ft_strlen`, `ft_strchr`, `ft_strncmp`, `ft_strdup`, etc.
- **Character Functions / Funciones de Caracteres**
  - `ft_isalpha`, `ft_isdigit`, `ft_tolower`, `ft_toupper`, etc.
- **Utility Functions / Funciones Adicionales**
  - Custom tools like `ft_itoa`, `ft_split`, `ft_substr`, etc.
- **Bonus Functions / Funciones Adicionales (Bonus)**
  - Support for linked lists: `ft_lstnew`, `ft_lstadd_front`, etc.

---

## ⚙️ Requirements / Requisitos

- **Language / Lenguaje**: C
- **Compiler / Compilador**: GCC with `-Wall -Wextra -Werror`
- **Operating System / Sistema Operativo**: Linux or macOS

---

## 🤝 Contribution / Contribución

This project is part of the 42 School curriculum and is primarily for educational purposes. Contributions are not currently accepted, but feel free to open an issue if you encounter bugs or have suggestions.

Este proyecto forma parte del programa de 42 School y está destinado principalmente a fines educativos. Actualmente no se aceptan contribuciones, pero no dudes en abrir un issue si encuentras errores o tienes sugerencias.

---

## 📜 License / Licencia

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).

Este proyecto está licenciado bajo la [Licencia MIT](https://opensource.org/licenses/MIT).

---

## 📧 Contact / Contacto

- **Author / Autor**: [mmarhin](https://github.com/mmarhin)
- **Project Repository / Repositorio del Proyecto**: [libft](https://github.com/mmarhin/42/tree/main/libft)

Feel free to reach out if you have questions or feedback about the project!

¡No dudes en ponerte en contacto si tienes preguntas o comentarios sobre el proyecto!
