#include "ft_printf.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>  

int main () 
{
	printf("\n---PRINTF %%s WITH SOME%-s TEXT\n", "50500");
	int i = ft_printf("\nFT_PRINTF %%s WITH SOME%-s TEXT\n", "50500");
	
	//printf("%d",ft_printf("HAHA %s*\n    " , "van hier af"));
	//ft_printf("%d",ft_printf("HAHA %s" , "van hier af"));
  return 0; 

}
