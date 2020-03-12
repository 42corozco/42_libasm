#include "libasm.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	system("clear");

	/*
	**	ft_strlen
	*/
	printf("\x1b[33m\t\t[ft_strlen]\n\x1b[0m");
	printf("\tM \x1b[32m[%d]\x1b[0m\t|| O \x1b[32m[%d]\x1b[0m -> \"hola\"\n", (int)ft_strlen("hola"), (int)strlen("hola"));
	printf("\tM \x1b[32m[%d]\x1b[0m\t|| O \x1b[32m[%d]\x1b[0m -> \"\"\n", (int)ft_strlen(""), (int)strlen(""));
	printf("\tM \x1b[32m[%d]\x1b[0m\t|| O \x1b[32m[%d]\x1b[0m > \"interdiction de parler de ft_services\"\n", (int)ft_strlen("interdiction de parler de ft_services"), (int)strlen("interdiction de parler de ft_services"));

	/*
	**	ft_strcpy
	*/
	printf("\n\x1b[33m\t\t[ft_strcpy]\n\x1b[0m");
	char s1[30] = "Hola que tal";
	char ss1[30] = "";
	char ss2[30] = "";
	printf("\tM = \x1b[32m[%s]\x1b[0m || O = \x1b[32m[%s]\x1b[0m\n", ft_strcpy(ss2, s1), strcpy(ss1, s1));
	printf("\tM = \x1b[32m[%s]\x1b[0m || O = \x1b[32m[%s]\x1b[0m\n", ft_strcpy(ss2, ""), strcpy(ss1, ""));
	printf("\tM = \x1b[32m[%s]\x1b[0m || O = \x1b[32m[%s]\x1b[0m\n", ft_strcpy(ss2, "!@#"), strcpy(ss1, "!@#"));

	/*
	**	ft_strcpy
	*/
	printf("\n\x1b[33m\t\t[ft_strcmp]\n\x1b[0m");
	return (0);
}
