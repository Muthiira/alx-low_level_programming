#include "main.h"
/**
*main - print _putchar followed by a new line
*always return 0 (success)
*/
int main(void)
{
char *s = "_putchar";
while (*s != '\0')
{
_putchar(*s);
s++; 
}
_putchar('\n');
return (0);

}


