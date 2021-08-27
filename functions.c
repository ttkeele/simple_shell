#include "holberton.h"
/**
 * _strlen - checks length of string
 * @s: variable
 *  Return: 0
 */
int _strlen(char *s)
{
  int length = 0;
  while (*s++)
    {
      length++;
    }
  return (length);
}

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @n: number of allowed characters
 * @src: source string
 *  Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
  int x;

  for (x = 0; x < n && src[x] != '\0'; x++)
    {
      dest[x] = src[x];
    }
  for (; x < n; x++)
    {
      dest[x] = '\0';
    }
  return (dest);
}

/**
 * *_strncat - puts the first string on the end of the second
 * @dest: destination string
 * @src: source string
 * @n: number of characters allowed
 *  Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
  int x;
  int y;

  for (x = 0; dest[x] != '\0'; x++)
    {
    }
  for (y = 0; src[y] != '\0' && y < n; y++)
    {
      dest[x + y] = src[y];
    }
  dest[x + y] = '\0';
  return (dest);
}

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 *  Return: difference
 */
int _strcmp(char *s1, char *s2)
{
  int x;
  for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
    {
      if (s1[x] != s2[x])
	break;
    }
  return (s1[x] - s2[x]);
}

/**
 * _strpbrk - finds length of prefix substring
 * @accept: characters
 * @s: string
 * Return: g
 */
char *_strpbrk(char *s, char *accept)
{
  int g;

  if (*s == '\0' || *accept == '\0')
    return ('\0');
  for (g = 0; s[g] != '\0'; g++)
    {
      if (strchr(accept, s[g]))
	return (s + g);
    }
  return ('\0');
}
