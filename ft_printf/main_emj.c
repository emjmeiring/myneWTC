#include "ft_printf.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>  

int main () 
{
	printf("\n-+-PRINTF %%s WITH SOME%%-s TEXT%-.3s==\n", "505005");
	printf("\n-+-PRINTF %%s WITH SOME%%-5.9s TEXT%-5.9s==\n", "505005");
	printf("\n-+-PRINTF %%s WITH SOME%%5.9s TEXT%5.9s==\n", "505005");
	printf("\n-+-PRINTF %%s WITH SOME%%10.5s TEXT%10.5s==\n", "505005");
	printf("\n-+-PRINTF %%s WITH SOME%%42s TEXT%42s==\n", "505005");
	printf("\n-+-PRINTF %%s WITH SOME%%-10.9s TEXT%-10.9s==\n", "505005");
	char *s = "123\0 45";
	write(1, s, strlen(s));
	//int i = ft_printf("\nFT_PRINTF %%s WITH SOME%-5.20s TEXT\n", "50500");
	//printf("**%d**", atoi("dsfjkh66.7sldkjfgh"));
	//printf("%d",ft_printf("HAHA %s*\n    " , "van hier af"));
	//ft_printf("%d",ft_printf("HAHA %s" , "van hier af"));
  return 0;
}
