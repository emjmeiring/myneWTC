#include "libft.h"
#include <stdio.h>

int main()
{
	char str[50];
	printf("****Test for memset and strcpy****\n");
	ft_strcpy(str,"%$#@!: memset will fill the first 5 characters with $");
	puts(str);
	ft_memset(str,'$',5);
	puts(str);

	printf("\n****Test for bzero****\n");
	ft_strcpy(str,"This is a long string");
	puts(str);
	ft_bzero(str, sizeof str);
	printf("%s<<-- it's all empty now\n", str);

	printf("\n****Test for memmove****\n");
	char s[] = "123456789";
	printf("before: %s\n", s);
	ft_memmove(s + 4, s + 3, 4);
	printf(" after: %s\n", s);

	printf("\n****Test for memchr****\n");
	char mystr[] = "we are looking for this-->>.<<-- yes, it's here";
	printf("%s\n", mystr);
   	const char ch = '.';
   	char *ret = ft_memchr(mystr, ch, ft_strlen(mystr));
   	printf("did we find the |%c|? - |%s|\n", ch, ret);

	printf("\n****Test for memcmp****\n");
	char str1[15];
	char str2[15];
	int diff;
	memcpy(str1, "abcdef", 6);
	memcpy(str2, "abcDef", 6);
	diff = ft_memcmp(str1, str2, 5);
	printf("Strings: 1. %s  and 2. %s\n", str1, str2);
	printf(diff > 0 ? "str2 is less than str1\n" : diff < 0 ?
		"str1 is less than str2\n" : "str1 is equal to str2\n");

	printf("\n****Test for strlen****\n");
	printf("I used strlen in memchr, ");
	printf("the string was %d character long\n", (int)ft_strlen(mystr));

	printf("\n****Test for strdup****\n");
	const char the_str[] = "(\\/)_(*,,,*)_(\\/)";
	printf("%s\n", the_str);
	printf("%s\n", ft_strdup(the_str));

	printf("\n****Test for strncpy****\n");
	char src[40];
	char dest[100];
	memset(dest, '\0', sizeof(dest));
	ft_strcpy(src, "So they say they gonna copy me?");
	ft_strncpy(dest, src, 15);
	printf("%s\n", src);
	printf("%s\n", dest);

	printf("\n****Test for strcat****\n");
	ft_bzero(dest,ft_strlen(dest));
	ft_strcpy(dest, " poof**!!! MAGIC\n");
	//printf("look what i can do%s", dest);
	ft_strcat(dest, src);
	printf("look what i can do%s\n", dest);

	printf("\n****Test for strncat****\n");
	ft_strcpy(ft_bzero(src,ft_strlen(src)),  "This is source");
	ft_strcpy(ft_bzero(dest,ft_strlen(dest)), "This is destination");
	ft_strncat(dest, src, 10);
	printf("here it is : |%s|\n", dest);

	printf("\n****Test for strlcat****\n");
	ft_strcpy(ft_bzero(dest,ft_strlen(dest)), "This is destination");
	printf("%d\n", (int)ft_strlcat(dest, src, 10));

	printf("\n****Test for strchr****\n");
	int o = 'a';
	printf("found |%c| here-->> |%s|\n", o, ft_strchr(dest, o));

	printf("\n****Test for strrchr****\n");
	//printf("found |%c| here-->> |%s|\n", o, ft_strrchr(str, o));

	printf("\n****Test for strstr****\n");
	char *a_str = ft_strstr("health island", "lth");
	printf("%s\n", a_str == NULL?
	"No matching pattern" : a_str);

	printf("\n****Test for strnstr****\n");
	char *b_str = ft_strnstr("blablablabla ooo look its a cat", "ooo", 3);
	printf("%s\n", b_str == NULL?
	"No matching pattern" : b_str);

	printf("\n****Test for strcmp****\n");
	diff = ft_strcmp(str1, str2);
	printf("Strings: 1. %s  and 2. %s\n", str1, str2);
	printf(diff > 0 ? "str2 is less than str1\n" : diff < 0 ?
		"str1 is less than str2\n" : "str1 is equal to str2\n");

	printf("\n****Test for strncmp****\n");
	diff = ft_strncmp(str1, str2, 4);
	printf("Strings: 1. %s  and 2. %s\n", str1, str2);
	printf(diff > 0 ? "str2 is less than str1\n" : diff < 0 ?
		"str1 is less than str2\n" : "str1 is equal to str2\n");

	printf("\n****Test for atoi****\n");

	printf("\n****Test for isalpha****\n");
	int g = ft_isalpha(o);
	printf("is this '%c' part of the alphabet? %s", o, g > 0 ? "word!!\n" : "NOPE!!\n");

	printf("\n****Test for isdigit****\n");
	int d = 8;
	g = ft_isdigit(d);
	printf("is this '%d' part of the alphabet? %s", d, g > 0 ? "word!!\n" : "NOPE!!\n");

	printf("\n****Test for isprint****\n");
	d = 32;
	g = ft_isprint(d);
	printf("is this '%d' printable? %s", d, g > 0 ? "word!!\n" : "NOPE!!\n");

	printf("\n****Test for isascii****\n");
	d = 88;
	g = ft_isascii(d);
	printf("is this '%d' ascii? %s", d, g > 0 ? "word!!\n" : "NOPE!!\n");

	printf("\n****Test for toupper****\n");
	char dd = 88;
	g = ft_isalnum(dd);
	printf("is this '%d' alphanumeric? %s", dd, g > 0 ? "wordnum!!\n" : "NOPE!!\n");
		
	printf("\n****Test for tolower****\n");
	char k_str[] = "THis RiGHT HerE";
	printf("%s\n", k_str);
	printf("%s\n", ft_tolower(k_str));

	printf("\n****Test for toupper****\n");
	printf("%s\n", ft_toupper(k_str));

	printf("\n****Test for memalloc****\n");
	char *cry = ft_memalloc(10);
	ft_strcpy(cry, "123456789");
	printf("%s\n", cry == NULL ? "Memory could not be allocated" : cry);

	printf("\n****Test for memdel****\n");
	void *f = ft_memset(cry, 'a', 20);
	puts(f);
	ft_memdel(&f);
	if (f == NULL)
		printf("The pointer is pointing to NULL, trust me.\n");

	printf("\n****Test for memdel****\n");

	return 0;
}
