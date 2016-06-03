#include "ft_printf.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>  
#include <ctype.h>

int main () 
{
	printf("\n-+-PRINTF   %%.11d TEXT%.11d==\n", 123456789);
	int i = ft_printf("FT_PRINTF   %%.11d TEXT%.11d==\n", 123456789);

	printf("\n-+-PRINTF   %%-.90d TEXT%.90d==\n", 505005);
	int u = ft_printf("FT_PRINTF   %%-.90d TEXT%.90d==\n", 505005);
	
	printf("\n-+-PRINTF   %%15.20d TEXT%15.20d==\n", 505005);
	int h = ft_printf("FT_PRINTF   %%15.20d TEXT%15.20d==\n", 505005);
	
	printf("\n-+-PRINTF   %%-50.7d TEXT%-50.7d==\n", 505005);
	int f = ft_printf("FT_PRINTF   %%-50.7d TEXT%-50.7d==\n", 505005);
	
	printf("\n-+-PRINTF   %%-42.10d TEXT%-.10d==\n", 505005);
	int k = ft_printf("FT_PRINTF   %%-42.10d TEXT%-.10d==\n", 505005);
	
	printf("\n-+-PRINTF   %%10.2d TEXT%10.2d==\n", 505005);
	int q = ft_printf("FT_PRINTF   %%10.2d TEXT%10.2d==\n", 505005);
	
	
	
	//printf("**%d**", atoi("dsfjkh66.7sldkjfgh"));
	//printf("%d",ft_printf("HAHA %s*\n    " , "van hier af"));
	//ft_printf("%d",ft_printf("HAHA %s" , "van hier af"));
  return 0; 

}
