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
	printf("\tasm \x1b[32m[%d]\x1b[0m\t\t\t|| O \x1b[32m[%d]\x1b[0m -> \"hola\"\n", (int)ft_strlen("hola"), (int)strlen("hola"));
	printf("\tasm \x1b[32m[%d]\x1b[0m\t\t\t|| O \x1b[32m[%d]\x1b[0m -> \"\"\n", (int)ft_strlen(""), (int)strlen(""));
	printf("\tasm \x1b[32m[%d]\x1b[0m\t\t|| O \x1b[32m[%d]\x1b[0m > \"interdiction de parler de ft_services\"\n", (int)ft_strlen("interdiction de parler de ft_services"), (int)strlen("interdiction de parler de ft_services"));

	/*
	**	ft_strcpy
	*/
	printf("\n\x1b[33m\t\t[ft_strcpy]\n\x1b[0m");
	char s1[30] = "Hola que tal";
	char ss1[30] = "";
	char ss2[30] = "";
	printf("\tasm = \x1b[32m[%s]\x1b[0m\t|| O = \x1b[32m[%s]\x1b[0m\n", ft_strcpy(ss2, s1), strcpy(ss1, s1));
	printf("\tasm = \x1b[32m[%s]\x1b[0m\t\t|| O = \x1b[32m[%s]\x1b[0m\n", ft_strcpy(ss2, ""), strcpy(ss1, ""));
	printf("\tasm = \x1b[32m[%s]\x1b[0m\t\t|| O = \x1b[32m[%s]\x1b[0m\n", ft_strcpy(ss2, "!@#"), strcpy(ss1, "!@#"));

	/*
	**	ft_strcpy
	*/
	printf("\n\x1b[33m\t\t[ft_strcmp]\n\x1b[0m");
	const char *cmp1_1 = "camilo1";
	const char *cmp1_2 = "camilo9";
	printf("\tasm = \x1b[32m[%d]\x1b[0m\t\t|| O = \x1b[32m[%d]\x1b[0m\n", ft_strcmp(cmp1_1, cmp1_2), strcmp(cmp1_1, cmp1_2));
	const char *cmp2_1 = "camilo9";
	const char *cmp2_2 = "camilo1";
	printf("\tasm = \x1b[32m[%d]\x1b[0m\t\t|| O = \x1b[32m[%d]\x1b[0m\n", ft_strcmp(cmp2_1, cmp2_2), strcmp(cmp2_1, cmp2_2));
	const char *cmp3_1 = "";
	const char *cmp3_2 = "";
	printf("\tasm = \x1b[32m[%d]\x1b[0m\t\t|| O = \x1b[32m[%d]\x1b[0m\n", ft_strcmp(cmp3_1, cmp3_2), strcmp(cmp3_1, cmp3_2));
	const char *cmp4_1 = "";
	const char *cmp4_2 = "camilo9";
	printf("\tasm = \x1b[32m[%d]\x1b[0m\t\t|| O = \x1b[32m[%d]\x1b[0m\n", ft_strcmp(cmp4_1, cmp4_2), strcmp(cmp4_1, cmp4_2));

	/*
	**	ft_write
	*/
	printf("\n\x1b[33m\t\t[ft_write]\n\x1b[0m");
	printf("\x1b[35mwrite(1, \"\\ta\", 2);\x1b[0m\n");
	printf("<-\tasm rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(1, "\ta", 2));
	printf("<-\tOri rn = \x1b[32m[%d]\x1b[0m\n",  (int)write(1, "\ta", 2));
	printf("\x1b[35mwrite(1, NULL, 6);\x1b[0m\n");
	printf("<-\tasm rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(1, NULL, 4));
	printf("<-\tori rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(1, NULL, 4));
	printf("\x1b[35mwrite(-1, \"\\ta\", 2);\x1b[0m\n");
	printf("<-\tasm rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(-1, "\ta", 2));
	printf("<-\tOri rn = \x1b[32m[%d]\x1b[0m\n",  (int)write(-1, "\ta", 2));
		printf("\x1b[35mwrite(2, \"\\ta\", 2);\x1b[0m\n");
	printf("<-\tasm rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(2, "\ta", 2));
	printf("<-\tOri rn = \x1b[32m[%d]\x1b[0m\n",  (int)write(2, "\ta", 2));
/*
** este test no cuenta, ya que se supone que envias una unsigned int (?????)
	printf("\x1b[35mwrite(1, \"\\ta\", -2);\x1b[0m\n");
	printf("<-\tasm rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(1, "\ta", -2));
	printf("<-\tOri rn = \x1b[32m[%d]\x1b[0m\n",  (int)write(1, "\ta", -2));
*/
		return (0);
}
