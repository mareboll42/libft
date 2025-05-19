#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main(void){
	char str[] = "Hola Mundo";
	printf("%s", ft_bzero(str, 5));

}

