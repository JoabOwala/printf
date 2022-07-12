#include "main.h"
/**
<<<<<<< HEAD
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
=======
* print_string - loops through a string and prints
* every character
* @l: va_list arguments from _printf
* @f: pointer to the struct flags that determines
* if a flag is passed to _printf
* Return: number of char printed
*/
>>>>>>> 1cd428afdcb0c3b5c5b8e0e9cb3f00ce445e12da
int print_string(va_list l, flags_t *f)
{
char *s = va_arg(l, char *);
(void)f;
<<<<<<< HEAD

if (!s)
s = "(null)";
return (_puts(s));

=======
if (!s)
s = "(null)";
return (_puts(s));
>>>>>>> 1cd428afdcb0c3b5c5b8e0e9cb3f00ce445e12da
}
/**
* print_char - prints a character
* @l: va_list arguments from _printf
* @f: pointer to the struct flags that determines
* if a flag is passed to _printf
* Return: number of char printed
*/
int print_char(va_list l, flags_t *f)
{
(void)f;
_putchar(va_arg(l, int));
return (1);
}
