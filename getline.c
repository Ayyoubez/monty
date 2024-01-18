#include "monty.h"

/**
* _getline - function getline
* @line: pointer to the line strings
* @n: size of the line
* @stream: file to read from
* Return: 1 on success
*/

ssize_t _getline(char **line, size_t *n, FILE *stream)
{
	size_t i = 0, j;
	int c;
	char *temp;

	if (*line == NULL)
	{
		*n = 128;
		*line = (char *)malloc(*n);
		if((*line) == NULL)
			return (-1);
	}
	while ((c = fgetc(stream)) != EOF)
	{
		if( i == *n - 1)
		{
			temp = (char *)malloc(*n + 128);
			if (temp == NULL)
			{
				return (-1);
			}

			for (j = 0; j < i; ++j)
			{
				temp[j] = (*line)[j];
			}
			free(*line);
			*line = temp;
			*n += 128;
		}
		(*line)[i++] = (char)c;
		if (c == '\n')
			break;
	}
	if (i == 0 || ferror(stream))
		return (-1);
	(*line)[i] = '\0';
	return (i);
}
