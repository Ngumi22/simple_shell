#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * findCommand - Finds command from user
 * @cmd: Input command
 * @cmdPath: The path
 * Return: 0 if command is found
 */
int findCommand(char *cmd, char *cmdPath)
{
	char *path;
	char *pathCopy;
	char *dir;

	path = getenv("PATH");
	pathCopy = strdup(path);
	dir = strtok(pathCopy, ":");

	if (strchr(cmd, '/') != NULL)
	{
		strcpy(cmdPath, cmd);
		return (access(cmdPath, F_OK) == 0);
	}
	while (dir != NULL)
	{
		snprintf(cmdPath, MAX_INPUT_SIZE, "%s/%s", dir, cmd);

		if (access(cmdPath, F_OK) == 0)
		{
			free(pathCopy);
			return (1);
		}
		dir = strtok(NULL, ":");
	}
	free(pathCopy);
	return (0);
}

