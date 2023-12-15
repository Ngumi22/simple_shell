#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#define MAX_INPUT_SIZE 1024
#include <stdbool.h>

void runShell(void);
void displayPrompt(void);
void readUserInput(char *input, int maxSize);
void tokenizeInput(char *input, char **args);
void executeCommand(char *input);
void executeBuiltIn(const char *command);
bool isBuiltInCommand(const char *command);
void handleExit(void);
void executeEnvBuiltIn(void);
#endif
