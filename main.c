#include "main.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv) {
	char *str = strdup("SukaBlyat42");

	ft_memset(str, 'a', 5);
	printf("Memset : aaaaalyat42 ? %s\n", str);
	
	ft_bzero(str, 5);
	printf("Bzero :  ? %c\n", str[4]);

	char *str2 = strdup("SukaBlyat42");
	char *dest = (char *) malloc(sizeof(char) * 100);
	ft_memcpy(dest, str2, 5);
	printf("Memcpy : SukaB ? %s\n", dest);
	char *str2a = strdup("SukaBlyat42");
	char *desta = (char *) malloc(sizeof(char) * 100);
	memcpy(desta, str2a, 5);
	printf("Memcpy O : SukaB ? %s\n", desta);
	
	char *str3 = strdup("SukaBlyat42");
	char *dest2 = strdup("0000");
	ft_memccpy(dest2, str3, 55, 3);
	printf("Memccpy : Suk0 ? %s\n", dest2);
	char *str4 = strdup("SukaBlyat42");
	char *dest3 = strdup("0000");
	printf("Memccpy : 00 ? %s\n", ft_memccpy(dest3, str4, 'u', 3));
	printf("Memccpy : Su00 ? %s\n", dest3);
	
	char *str5 = strdup("SukaBlyat42          ");
	ft_memmove(str5 + 3, str5, 12);
	printf("Memmove : SukSukaBlyat42 ? %s\n", str5);
	char *str6 = strdup("SukaBlyat42          ");
	memmove(str6 + 3, str6, 12);
	printf("Memmove O: SukSukaBlyat42 ? %s\n", str6);

	printf("Memchr : kSukaBlyat42 ? %s\n", ft_memchr(str6, 'k', 5));
	
	printf("Memcmp : %d ? %d\n", memcmp(str5, str6, 8), ft_memcmp(str5, str6, 8));;
	
	printf("strchr : %s ? %s\n", strchr(str5, 'y'), ft_strchr(str5, 'y'));;
	printf("strchr NULL : %s ? %s\n", strchr(str5, '>'), ft_strchr(str5, '>'));;

	printf("strrchr : %s ? %s\n", strrchr(str5, 'a'), ft_strrchr(str5, 'a'));;
	printf("strrchr NULL : %s ? %s\n", strrchr(str5, '>'), ft_strrchr(str5, '>'));;
	return (0);
}
