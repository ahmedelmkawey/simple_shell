#include "shell.h"

/**
 * find_in_path - search command in PATH
 * @command: pointer to string
 * Return: sucsses
*/


char *find_in_path(char *command)
{
	struct stat st;
	int stat_ret, a;
	char buf[PATH_MAX_LENGTH], *path, *ch, **dir;

	path = get_path();
	if (!path)
		return (NULL);
	dir = tokenize(path, PATH_SEPARATOR);
	if (!dir)
		return (NULL);
	for (a = 0; dir[a]; a++)
	{
		_memset(buf, 0, PATH_MAX_LENGTH);
		_strcpy(buf, dir[a]);
		_strcat(buf, "/");
		_strcat(buf, command);
		stat_ret = stat(buf, &st);
		if (stat_ret == 0 && S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
		{
			free_tokens(dir);
			ch = malloc(sizeof(char) * (strlen(buf) + 1));
			if (!ch)
				return (NULL);
			strcpy(ch, buf);
			return (ch);
		}
	}
	if (stat_ret == -1)
		free_tokens(dir);
	return (NULL);
}
