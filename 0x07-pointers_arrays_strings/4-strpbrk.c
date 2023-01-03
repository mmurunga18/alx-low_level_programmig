#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)

	while (*accept)
	{
	if (*accept == *s)
	return (s);
	accept++;
	}

	accept = start;
	s++;
return (0);
}
