#include "ft_printf.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>  
#include <ctype.h>

int main () 
{
	int myne = 0;
	int hulle_sin = 0;

	printf("\n---PRINTF   %%.11c TEXT%.11c+=+=\n", 'c');
	ft_printf("FT_PRINTF   %%.11c TEXT%.11c+=+=\n", 'c');
printf("-------------------------------------------------------------------");
	printf("\n---PRINTF   %%-.19c TEXT%.19c+=+=\n", 's');
	ft_printf("FT_PRINTF   %%-.19c TEXT%.19c+=+=\n", 's');
printf("-------------------------------------------------------------------");
	printf("\n---PRINTF   %%15.20c TEXT%15.20c+=+=\n", 's');
	ft_printf("FT_PRINTF   %%15.20c TEXT%15.20c+=+=\n", 's');
printf("-------------------------------------------------------------------");
	printf("\n---PRINTF   %%-50.7c TEXT%-50.7c+=+=\n", 's');
	ft_printf("FT_PRINTF   %%-50.7c TEXT%-50.7c+=+=\n", 's');
printf("-------------------------------------------------------------------");
	printf("\n---PRINTF   %%-42.10c TEXT%-.10c+=+=\n", 's');
	ft_printf("FT_PRINTF   %%-42.10c TEXT%-.10c+=+=\n", 's');
printf("-------------------------------------------------------------------");
	printf("\n---PRINTF   %%10.2c TEXT%10.2c+=+=\n", 's');
	ft_printf("FT_PRINTF   %%10.2c TEXT%10.2c+=+=\n", 's');
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
////////////////////////////////////////////////////////////////////////////////
	hulle_sin += printf("\n---PRINTF   %%.11o TEXT%.11o+=+=\n", 12);
	myne += ft_printf("FT_PRINTF   %%.11o TEXT%.11o+=+=\n", 12);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin += printf("\n---PRINTF   %%-.19o TEXT%.19o+=+=\n", 525);
	myne += ft_printf("FT_PRINTF   %%-.19o TEXT%.19o+=+=\n", 525);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin += printf("\n---PRINTF   %%15.20o TEXT%15.20o+=+=\n", 5);
	myne += ft_printf("FT_PRINTF   %%15.20o TEXT%15.20o+=+=\n", 5);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin += printf("\n---PRINTF   %%-50.7o TEXT%-50.7o+=+=\n", 123456789);
	myne += ft_printf("FT_PRINTF   %%-50.7o TEXT%-50.7o+=+=\n", 123456789);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin += printf("\n---PRINTF   %%-42.10o TEXT%-.10o+=+=\n", 100);
	myne += ft_printf("FT_PRINTF   %%-42.10o TEXT%-.10o+=+=\n", 100);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin +=  printf("\n---PRINTF   %%10.2o TEXT%10.2o+=+=\n", 999);
	myne += ft_printf("FT_PRINTF   %%10.2o TEXT%10.2o+=+=\n", 999);
printf("%d?+=%d+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++",myne , hulle_sin);
////////////////////////////////////////////////////////////////////////////////
	hulle_sin +=  printf("\n---PRINTF   %%.11u TEXT%.11u+=+=\n", 12);
	myne += ft_printf("FT_PRINTF   %%.11u TEXT%.11u+=+=\n", 12);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%-.19u TEXT%.19u+=+=\n", 525);
	myne += ft_printf("FT_PRINTF   %%-.19u TEXT%.19u+=+=\n", 525);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin +=  printf("\n---PRINTF   %%15.20u TEXT%15.20u+=+=\n", 5);
	myne += ft_printf("FT_PRINTF   %%15.20u TEXT%15.20u+=+=\n", 5);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin += printf("\n---PRINTF   %%-50.7u TEXT%-50.7u+=+=\n", 123456789);
	myne += ft_printf("FT_PRINTF   %%-50.7u TEXT%-50.7u+=+=\n", 123456789);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%-42.10u TEXT%-.10u+=+=\n", 100);
	myne += ft_printf("FT_PRINTF   %%-42.10u TEXT%-.10u+=+=\n", 100);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%10.2u TEXT%10.2u+=+=\n", 999);
	myne += ft_printf("FT_PRINTF   %%10.2u TEXT%10.2u+=+=\n", 999);
printf("%d?+=%d+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++",myne , hulle_sin);
////////////////////////////////////////////////////////////////////////////////
 	hulle_sin +=  printf("\n---PRINTF   %%.11x TEXT%.11x+=+=\n", 12);
	myne += ft_printf("FT_PRINTF   %%.11x TEXT%.11x+=+=\n", 12);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%-.19x TEXT%.19x+=+=\n", 525);
	myne += ft_printf("FT_PRINTF   %%-.19x TEXT%.19x+=+=\n", 525);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin +=  printf("\n---PRINTF   %%15.20x TEXT%15.20x+=+=\n", 5);
	myne += ft_printf("FT_PRINTF   %%15.20x TEXT%15.20x+=+=\n", 5);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin += printf("\n---PRINTF   %%-50.7x TEXT%-80000000x+=+=\n", 1234567891);
	myne += ft_printf("FT_PRINTF   %%-50.7x TEXT%-80000000x+=+=\n", 1234567891);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%-42.10x TEXT%-.10x+=+=\n", 100);
	myne += ft_printf("FT_PRINTF   %%-42.10x TEXT%-.10x+=+=\n", 100);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%10.2x TEXT%10.2x+=+=\n", 999);
	myne += ft_printf("FT_PRINTF   %%10.2x TEXT%10.2x+=+=\n", 999);
printf("%d?+=%d+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++",myne , hulle_sin);
////////////////////////////////////////////////////////////////////////////////
 	hulle_sin +=  printf("\n---PRINTF   %%.11x TEXT%.11X+=+=\n", 12);
	myne += ft_printf("FT_PRINTF   %%.11X TEXT%.11X+=+=\n", 12);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%-.19X TEXT%.19X+=+=\n", 525);
	myne += ft_printf("FT_PRINTF   %%-.19X TEXT%.19X+=+=\n", 525);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin +=  printf("\n---PRINTF   %%15.20X TEXT%15.20X+=+=\n", 5);
	myne += ft_printf("FT_PRINTF   %%15.20X TEXT%15.20X+=+=\n", 5);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);	
	hulle_sin += printf("\n---PRINTF   %%-50.7X TEXT%-50.7X+=+=\n", 123456789);
	myne += ft_printf("FT_PRINTF   %%-50.7X TEXT%-50.7X+=+=\n", 123456789);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%-42.10X TEXT%-.10X+=+=\n", 100);
	myne += ft_printf("FT_PRINTF   %%-42.10X TEXT%-.10X+=+=\n", 100);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
	hulle_sin +=  printf("\n---PRINTF   %%10.2X TEXT%10.2X+=+=\n", 999);
	myne += ft_printf("FT_PRINTF   %%10.2X TEXT%10.2X+=+=\n", 999);
printf("%d?+=%d---------------------------------------------------------------",myne , hulle_sin);
////////////////////////////////////////////////////////////////////////////////
  return 0; 
}
