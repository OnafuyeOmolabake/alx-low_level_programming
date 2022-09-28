#include "main.h"
#include <stdio.h>

/**
 * *_strstr - finds the first occurance of s substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystick[i] != '\0'; i++)
	{
		for (j = 0; needles[j] !='\0'; j++)
		{
			if (haystick[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
