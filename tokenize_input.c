#include "simple_shell.h"
#include <string.h>
/**
 * tokenizeInput - Breaks down user input into smaller parts
 * @input: User input
 * @args: Double pointer to the characters
 * Return: Nothing
 */
void tokenizeInput(char *input, char **args)
{
	int i = 0;
	char *token = strtok(input, " ");

	while (token != NULL && i < MAX_INPUT_SIZE - 1)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
}

