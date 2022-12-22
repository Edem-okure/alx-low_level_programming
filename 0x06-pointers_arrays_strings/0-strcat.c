nclude "main.h"

/**
 * _strcat - concatenating two strings.
 * @dest: pointer to dest char
 * @src: pointer to source char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}