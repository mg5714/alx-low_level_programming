
#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2) {
    int i = 0;
    int diff = 0;
    
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
      {
        if (s1[i] != s2[i])
	  {
            diff = s1[i] - s2[i];
            break;
        }
    }
    
    if (diff == 0)
      {
        return (0);
    } else {
      return (diff);
    }
}
