#include "main.h"

/**
 * get_help - function that retrieves help messages according to builtin
 * @datash: relevant data
 * Return: 0
 */
int get_help(data_shell *datash)
{
	if (datash->args[1] == 0)
		aux_help_general();
	else if (_strcmp(datash->args[1], "setenv") == 0)
		aux_help_setenv();
	else if (_strcmp(datash->args[1], "env") == 0)
		aux_help_env();
	else if (_strcmp(datash->args[1], "unsetenv") == 0)
		aux_help_unsetenv();
