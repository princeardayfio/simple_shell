#include "main.h"

/**
 * exit_shell - exit the shell
 * @datash: relevant data
 * Return: 0 on success
 */
int exit_shell(data_shell *datash)
{
	unsigned int ustatus;
	int is_digit;
	int str_len;
	int big_number;

	if (datash->args[1] != NULL)
