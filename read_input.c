#include "simple_shell.h"
#include <stdio.h>
#include <unistd.h>
/**
 * readUserInput - Reads user input from stdin
 * @input: Buffer to store user input
 * @maxSize: Maximum size of the input buffer
 * Return: Nothing
 */
void readUserInput(char *input, int maxSize)
{
	if (isatty(fileno(stdin)))
	{
		displayPrompt();
	}
	fgets(input, maxSize, stdin);
}
