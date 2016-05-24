#include "libft.a"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>  

int main () 
{
  /* The path at which to create the new file.  */ 
  char* path = "myne.txt"; 
	char *l = ft_strnew(48);
	char **line = &l;
  /* The permissions for the new file.  */ 
  mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; 
 
  /* Create the file. */  
  int fd = open (path, O_CREAT, mode); 
  if (fd == -1) {
    /* An error occurred. Print an error message and bail. */  
    perror ("open");
	return 1;
  } 
	int returrn;
	while ((returrn = get_next_line(fd, line)) == 1)
	{
		printf("%s$\n", *line);
		 //printf("%d\n", returrn); 
	}
	close(fd);
  return 0; 

}
