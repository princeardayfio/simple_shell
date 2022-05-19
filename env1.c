#include "main.h"

/**
 * cmp_env_name - compares env variables names
 * with the name passed
 * @nenv: name of the enviroment variable
 * @name: name passed
 * Return: 0 if are not equal. another value if the are
 */

int cmp_env_name(const char *nenv, const char *name)
{
	int i;

	for (i = 0; nenv[i] != '='; i++)
	{
		if (nenv[i] != name[i])
		{
			return (0);
		}
	}

	return (i + 1);
}

/**
 * _getenv - get an environment variable
 * @name: name of the enviroment variable
 * @_environ: environment variable
 * Return: value of the environment variable if found
 * NULL in other case
 */
char *_getenv(const char *name, char **_environ)
{
	char *ptr_env;
