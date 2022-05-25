#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
