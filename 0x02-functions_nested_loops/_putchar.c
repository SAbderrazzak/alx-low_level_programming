#include "main.h"
#include <unistd.h>
/**
 * _putchar. xrites the character c to stdout
 * @c: The character to print
 * 
 * Return: On succes 1  
 * On error:-1 ir returned, and emno is set appropnately
*/
int _putchar(char c)
{
    return(write(1, &c,1));
}
