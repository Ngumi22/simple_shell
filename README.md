# Simple Shell Project

This is a simple Unix shell implementation in C. The shell supports basic command execution, built-in commands, environment variable display, and command search in the PATH

## Features

- Command Execution: The shell can execute both built-in commands (e.g.exit, env) and external commands.
- Built-in Commands: Includes a few built-in commands such as exit for exiting the shell and env for displaying the value of the PATH environment variable.
- Environment Variable Display: The env built-in command displays the value of the PATH environment variable.
- Command Search: The shell can search for commands in directories specified by the PATH environment variable.

## Files

- simpleshell.c:Contains the main function and the runShell function.
- command execution.c: Implements functions related to command execution, including executeCommand, executeBuiltIn, isBuiltInCommand, and handleExit.
- environment.c: Implements the executeEnvBuiltIn function for displaying the PATH environment variable.
- command search.c: Implements the findCommand function for searching commands in the PATH.

## How to Use

1. Compile the Shell:
    bash
    gcc -o simple_shell simple_shell.c command_execution.c environment.c command_search.c -Wall
    

2. Run the Shell:
    bash
    ./simple_shell
   

3. Enter Commands:
    - Enter commands as you would in a standard shell.
    - Built-in commands include 'exit' and


