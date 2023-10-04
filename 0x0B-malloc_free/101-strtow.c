#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
 int i = 0;

 while (s[i] != '\0')
  i++;
 return (i);
}

/**
 * count_words - counts the number of words in a string
 * @str: string to count
 * Return: number of words in string
 */
int count_words(char *str)
{
 int i, count = 0, len = _strlen(str);

 for (i = 0; i < len; i++)
 {
  if (str[i] != ' ')
  {
   count++;
   while (str[i] != ' ' && i < len)
    i++;
  }
 }
 return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
 int i, j, k, len, word_len, word_count = 0;
 char **result;

 if (str == NULL || str[0] == '\0')
  return (NULL);

 word_count = count_words(str);
 if (word_count == 0)
  return (NULL);

 result = malloc(sizeof(char *) * (word_count + 1));
 if (result == NULL)
  return (NULL);

 len = _strlen(str);
 for (i = 0, j = 0; i < len; i++)
 {
  if (str[i] != ' ')
  {
   word_len = 0;
   while (str[i + word_len] != ' ' && i + word_len < len)
    word_len++;
   result[j] = malloc(sizeof(char) * (word_len + 1));
   if (result[j] == NULL)
   {
    for (j--; j >= 0; j--)
     free(result[j]);
    free(result);
    return (NULL);
   }
   for (k = 0; k < word_len; k++)
    result[j][k] = str[i++];
   result[j][k] = '\0';
   j++;
  }
 }
 result[j] = NULL;
 return (result);
}
