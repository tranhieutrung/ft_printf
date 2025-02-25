# Printf  - C Library
## Introduction
This project aims to recreate the functionality of the printf function from the standard C library. The function ft_printf mimics the behavior of printf, providing formatted output to the console. The project is part of the curriculum at 42 School, focusing on enhancing students' understanding of string formatting and memory management in C programming.

## File Structure

Makefile

includes:
    ft_printf.h
    libft.h

libft:
    Makefile
    ft_strchr.c
    ft_strlen.c

srcs:
    ft_printf.c
    ft_putchar.c
    ft_putaddr.c
    ft_putbase.c
    ft_putnbr.c
    ft_putuint.c
    ft_puthexa.c

## Functionality
The ft_printf function is designed to handle various format specifiers and conversion characters to produce formatted output. The following conversions are implemented:

%c: Prints a single character.

%s: Prints a string (as defined by the common C convention).

%p: Prints the void pointer argument in hexadecimal format.

%d and %i: Prints a decimal (base 10) number.

%u: Prints an unsigned decimal (base 10) number.

%x and %X: Prints a number in hexadecimal (base 16) lowercase and uppercase format, respectively.

%%: Prints a percent sign.

## Result
Actual Status : finished.

<img width="1914" src="https://github.com/tranhieutrung/ft_printf/blob/main/printf_result.png">

## Contribution
If you'd like to contribute to the project, please create a pull request on GitHub. Please adhere to the contribution guidelines outlined in the CONTRIBUTING.md file.

## License
This project is distributed under the MIT License.