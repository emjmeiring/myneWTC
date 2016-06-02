#include "ft_printf.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>  

int main () 
{
	printf("\n-+-PRINTF   %%s TEXT%s==\n", "123456789");
	int i = ft_printf("FT_PRINTF   %%s TEXT%s==\n", "123456789");
	
	printf("\n-+-PRINTF   %%-2.9s TEXT%-5.2s==\n", "505005");
	int u = ft_printf("FT_PRINTF   %%-2.9s TEXT%-5.2s==\n", "505005");
	
	printf("\n-+-PRINTF   %%15.9s TEXT%15.9s==\n", "505005");
	int h = ft_printf("FT_PRINTF   %%15.9s TEXT%15.9s==\n", "505005");
	
	printf("\n-+-PRINTF   %%10.6s TEXT%50.6s==\n", "505005");
	int f = ft_printf("FT_PRINTF   %%10.6s TEXT%50.6s==\n", "505005");
	
	printf("\n-+-PRINTF   %%42s TEXT%-42.2s==\n", "505005");
	int k = ft_printf("FT_PRINTF   %%42s TEXT%-42.2s==\n", "505005");
	
	printf("\n-+-PRINTF   %%-10.9s TEXT%-10.2s==\n", "505005");
	int q = ft_printf("FT_PRINTF   %%-10.9s TEXT%-10.2s==\n", "505005");
	
	
	
	//printf("**%d**", atoi("dsfjkh66.7sldkjfgh"));
	//printf("%d",ft_printf("HAHA %s*\n    " , "van hier af"));
	//ft_printf("%d",ft_printf("HAHA %s" , "van hier af"));
  return 0; 

}
