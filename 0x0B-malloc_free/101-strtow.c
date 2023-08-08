#include "main.h"
/**
 * count_words - a helper function that counts the number of words in a string
 *
 * @str: the input string
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int i, count, flag;

	i = 0;
	count = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}
/**
 * copy_word - a helper function that copies a word from a string
 * to another string
 * @dest: the destination string
 * @src: the source string
 * @start: the starting index of the word in the source string
 * @end: the ending index of the word in the source string
 *
 * Return: nothing
 */
void copy_word(char *dest, char *src, int start, int end)
{
	int i, j;

	i = start;
	j = 0;
	while (i <= end)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}
/**
 * strtow - a function that splits a string into words
 * @str: the input string
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, num_words, start, end;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_words && str[j] != '\0')
	{
		while (str[j] == ' ')
			j++;
		start = j;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		end = j - 1;
		len = end - start + 1;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		copy_word(words[i], str, start, end);
		i++;
	}
	words[i] = NULL;
	return (words);
}
