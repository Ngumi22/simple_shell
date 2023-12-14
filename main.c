#include "simple_shell.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point for the simple shell program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char input[MAX_INPUT_SIZE];

	if (argc == 1)
	{
		runShell();
	}
	else
	{
		file = fopen(argv[1], "r");
		if (file == NULL)
		{
			perror("Error opening file");
			exit(EXIT_FAILURE);
		}
		while (fgets(input, sizeof(input), file) != NULL)
		{
			executeCommand(input);
		}
		fclose(file);
	}
	return (0);
}
