#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * executeBuiltIn - Execute builtin commands
 * @command: Command input by user
 * Return: Nothing
 */
void executeBuiltIn(const char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		handleExit();
	}
	else
	{
	}
}
/**
 * isBuiltInCommand - Checks if command is builtin
 * @command: Command input by user
 * Return: Nothing
 */
bool isBuiltInCommand(const char *command)
{
	return (strcmp(command, "exit") == 0);
}

/**
 * handleExit- Handlling shell exit
 * Return: Nothing
 */
void handleExit(void)
{
	printf("Exiting the shell.\n");
	exit(EXIT_SUCCESS);
}
