#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * runShell - Running the shell
 * Return: Nothing
 */
void runShell(void)
{
	char input[MAX_INPUT_SIZE];

	while (1)
	{
		readUserInput(input, MAX_INPUT_SIZE);
		executeCommand(input);
	}
}
