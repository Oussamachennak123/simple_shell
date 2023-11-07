#include "hsh.h"

/**
 * ft_removeLine - function that takes the command and removes the newLine
 * that halts it to be executed
 * @buffer: user's input
 * @length: length of buffer
 * Return: void
*/
void ft_removeLine(char *buffer, size_t length)
{
	buffer[length] = '\0';
}

