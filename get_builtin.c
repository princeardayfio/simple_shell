#include "main.h"

/**
 * get_builtin - builtin that performs the command in the arg
 * @cmd: command
 * Return: function pointer for the builtin command
 */
int (*get_builtin(char *cmd))(data_shell *)
{
	builtin_t builtin[] = {
		{"env", _env},
		{"exit", exit_shell},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
