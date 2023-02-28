#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src, including the terminating \ null byte (\0), to the buffer pointed to by dest
 * @des; copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0, i;
	while (*src)
	{
		src++;
		count++;
	}
	for (i = 0; i < count; i++)
		src--;
	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
