#include "main.h"
/**
* _puts_recursion -> function like puts();
* @s: input
* Return: Always 0 (Sucess)
*/
int _putchar(void);
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
