#include "main.h"

/**
 * bring_line - assigns the var for a get_line
 * @lineptr: buffer that store the input str
 * @buffer: str that is being called to line
 * @n: size of line
 * @j: size of buffer
 */
void bring_line(char **lineptr, size_t *n, char *buffer, size_t j)
{
	if (*lineptr == NULL)
	{
		if (j > BUFSIZE)
			*n = j;
		else
			*n = BUFSIZE;

		*lineptr = buffer;
	}
	else if (*n < j)
	{
		if (j > BUFSIZE)
			*n = j;
		else
			*n = BUFSIZE;

		*lineptr = buffer;
	}
	else
	{
		_strcpy(*lineptr, buffer);
		free(buffer);
	}
}

/**
 * get_line - read input from the stream
 * @lineptr: buffer that stores the input
 * @n: size of linptr
 * @stream: stream toread from
 * Return: the number of bytes
 */
