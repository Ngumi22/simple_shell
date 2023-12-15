#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * executeCommand - Executes commands entered by the user
 * @input: Command entered by the user
 * Return: Nothing
 */
void executeCommand(char *input)
{
	int status, exitCode;
	char *args[MAX_INPUT_SIZE];
	pid_t childPid;

	input[strcspn(input, "\n")] = '\0';

	tokenizeInput(input, args);

	if (args[0] != NULL && isBuiltInCommand(args[0]))
	{
		executeBuiltIn(args[0]);
		return;
	}

	childPid = fork();

	if (childPid < 0)
	{
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	else if (childPid == 0)
	{
		execvp(args[0], args);
		perror("Exec failed");
		fprintf(stderr, "Command: %s\n", args[0]);
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(childPid, &status, 0);

		if (WIFEXITED(status))
		{
			exitCode = WEXITSTATUS(status);
			printf("Child process exited with status %d\n", exitCode);
		}
	}
}
