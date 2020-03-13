#include "libasm.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

t_list	*new(void *data)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n->data = data;
		n->next = NULL;
	}
	return (n);
}

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
	printf("\x1b[35mwrite(1, \"\\ta\", -2);\x1b[0m\n");
	printf("<-\tasm rn = \x1b[32m[%d]\x1b[0m\n",  (int)ft_write(1, "\ta", -2));
	printf("<-\tOri rn = \x1b[32m[%d]\x1b[0m\n",  (int)write(1, "\ta", -2));
/*
*/

	/*
	**	ft_strdup
	*/
	char *src = "hola como estas";
	char *dest;
	char *dest2;
	printf("\n\x1b[33m\t\t[ft_strdup]\n\x1b[0m\n");

//	======================================[	1]====================================================
	printf("\x1b[35m[1]-> \"hola como estas\"\x1b[0m\n");
	dest = ft_strdup(src);
	dest2 = strdup(src);
	printf("\tasm = \x1b[32m[%s]\x1b[0m  \x1b[0m|| ori = \x1b[32m[%s]\x1b[0m\t\t\x1b[0m\n",  dest, dest2);
	free(dest);
	free(dest2);
//	======================================[	2]====================================================
	printf("\x1b[35m[2]-> \"1234asd\"\x1b[0m\n");
	dest = ft_strdup("1234asd");
	dest2 = strdup("1234asd");
	printf("\tasm = \x1b[32m[%s]\x1b[0m  \x1b[0m|| ori = \x1b[32m[%s]\x1b[0m\t\t\x1b[0m\n",  dest, dest2);
	free(dest);
	free(dest2);
//	======================================[	3]====================================================
	printf("\x1b[35m[3]-> \"\"\x1b[0m\n");
	dest = ft_strdup("");
	dest2 = strdup("");
	printf("\tasm = \x1b[32m[%s]\x1b[0m  \x1b[0m|| ori = \x1b[32m[%s]\x1b[0m\t\t\x1b[0m\n",  dest, dest2);
	free(dest);
	free(dest2);

	/*
	**	ft_read
	*/
	printf("\n\x1b[33m\t\t[ft_read]\n\x1b[0m\n");
	int			fd;
	char		buffer[100];
	char		buffer2[100];
	int			retorno;

	printf("\x1b[35m[1]-> \"open main.c\"\x1b[0m\n");
	fd = open("main.c", O_RDONLY);
	retorno = read(fd, buffer, 70);
	printf("\tori = \x1b[32m[%d] -> \n[%s]\x1b[0m\t\t\x1b[0m\n", retorno, buffer);
	close(fd);
	fd = open("main.c", O_RDONLY);
	retorno = ft_read(fd, buffer2, 70);
	printf("\tasm = \x1b[32m[%d] -> \n[%s]\x1b[0m\t\t\x1b[0m\n", retorno, buffer2);
	close(fd);
	buffer[0] = 0;
	buffer2[0] = 0;

	printf("\x1b[35m[2]-> \"open 42\"\x1b[0m\n");
	retorno = read(42, buffer, 70);
	printf("\tori = \x1b[32m[%d] -> \n[%s]\x1b[0m\t\t\x1b[0m\n", retorno, buffer);
	retorno = ft_read(42, buffer2, 70);
	printf("\tasm = \x1b[32m[%d] -> \n[%s]\x1b[0m\t\t\x1b[0m\n", retorno, buffer2);
	buffer[0] = 0;
	buffer2[0] = 0;


  //test para la lista
	printf("\n\x1b[33m\t\t[ft_list_size]\n\x1b[0m\n");
	printf("\x1b[35m[1]-> One->Two->Threer->Four\x1b[0m\n");
	t_list *p, *s, *j, *t;

	p = new("One");
	s = new("Two");
	j = new("Three");
	t = new("Four");
	p->next = s;
	s->next = j;
	j->next = t;
	printf("\tasm = \x1b[32m[%d]\x1b[0m\n", ft_list_size(p));

		return (0);
}
