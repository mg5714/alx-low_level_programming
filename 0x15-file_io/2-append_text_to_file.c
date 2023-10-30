#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: name of the file.
* @text_content: the NULL terminated string to add at the end of the file.
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fp, len = 0, wr;
if (filename == NULL)
return (-1);
fp = open(filename, O_WRONLY | O_APPEND);
if (fp == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
wr = write(fp, text_content, len);
if (wr == -1)
return (-1);
}
close(fp);
return (1);
}
