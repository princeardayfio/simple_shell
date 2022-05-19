#include "main.h"

/**
 * exec_line - finde builtins and commands
 * @datash: relevant data
 * Return: 1 on success
 */
int exec_line(data_shell *datash)
{
	int (*builtin)(data_shell *datash);
