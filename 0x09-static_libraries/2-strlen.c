#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
