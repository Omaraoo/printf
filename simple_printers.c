#include "main.h"
<<<<<<< HEAD

/**
* print_from_to - prints a range og char addresses
* @start: starting address
* @stop: stopping address
* @except: except address
*
* Return: number bytes printed
*/
=======
/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 * @except: except address
 *
 * Return: number bytes printed
*/

>>>>>>> 4e597ea8175e110085a9c78044e40e1373352124
int print_from_to(char *start, char *stop, char *except)
{
int sum = 0;

while (start <= stop)
{
if (start != except)
sum += _putchar(*start);
start++;
}
return (sum);
}

/**
<<<<<<< HEAD
* print_rev - prints string in reverse
* @ap: string
* @params: the parameters struct
*
* Return: number bytes printed
*/
=======
 * print_rev - prints string in reverse
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printed
*/

>>>>>>> 4e597ea8175e110085a9c78044e40e1373352124
int print_rev(va_list ap, params_t *params)
{
int len, sum = 0;
char *str = va_arg(ap, char *);
(void)params;
<<<<<<< HEAD
if (str)
{
for (len = 0; *str; str++)
lent++;
str--
for (; len > 0; len--, str--)
sum += _putchar (*str);
=======

if (str)
{
for (len = 0; *str; str++)
len++;
str--;
for (; len > 0; len--, str--)
sum += _putchar(*str);
>>>>>>> 4e597ea8175e110085a9c78044e40e1373352124
}
return (sum);
}

/**
<<<<<<< HEAD
* print_rot13 - prints string in rot13
* @ap: string
* @params: the parameters struct
*
*Return: number bytes printed
*/
int print_rot13(va list ap, params_t *params)
=======
 * print_rot13 - prints string in rot13
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printed
*/

int print_rot13(va_list ap, params_t *params)
>>>>>>> 4e597ea8175e110085a9c78044e40e1373352124
{
int i, index;
int count = 0;
char arr[] =
<<<<<<< HEAD
"NOPQRSTUVWXYZABCDEFGHIJKLM   nopqrstuvwxyzabcdefghijklm";
char *a = va_arg(ap, char *);
(void) params;
=======
"NOPQRSTUVWXYZABCDEFGHIJKLM	nopqrstuvwxyzabcdefghijklm"
char *a = va_arg(ap, char *);
(void)params;
>>>>>>> 4e597ea8175e110085a9c78044e40e1373352124

i = 0;
index = 0;
while (a[i])
{
if ((a[i] >= 'A' && a[i] <= 'Z')
|| (a[i] >= 'a' && a[i] <= 'z'))
{
index = a[i] - 65;
count += _putchar(arr[index]);
}
else
count += _putchar(a[i]);
i++;
}
return (count);
}
