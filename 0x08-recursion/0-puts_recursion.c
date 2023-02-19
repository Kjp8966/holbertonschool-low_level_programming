#include "main.h"
#include "_putchar.c"
/**
* _puts_recursion -> function like puts();
* @s: input
* Return: Always 0 (Sucess)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
