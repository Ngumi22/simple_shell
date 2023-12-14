#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * executeEnvBuiltIn - Executes buitin commands
 * Return: Nothing
 */
void executeEnvBuiltIn(void)
{
	char *env_var = getenv("PATH");

	printf("PATH=%s\n", env_var);
}
