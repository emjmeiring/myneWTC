/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 16:35:24 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/18 15:48:38 by jomeirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	buff_line(char **line, char *buffer)
{
	char	*buff_mem;
	int		length;
//printf("0)))))");
	length = ft_strlen(*line) + ft_strlen(buffer);
	buff_mem = ft_strnew(ft_strlen(*line) + ft_strlen(buffer));
	buff_mem = ft_strcpy(buff_mem, *line);
//printf("%s :", *line);
	buff_mem = ft_strncat(buff_mem, buffer, length);
	ft_memdel((void **)line);
	*line = ft_strcpy(ft_strnew(length), buff_mem);
//printf("%s :", buff_mem);
	//free(buff_mem);
}

int		get_next_line(const int fd, char **line)
{
	size_t		pos;
	int	 	endl_char;
	int		nbytes;
	char	*buffer;

	endl_char = '\n';
	pos = 0;
	buffer = ft_strnew(BUFF_SIZE);
	if (**line != '\0')
		ft_memset(*line, '\0', ft_strlen(*line));
	nbytes = read(fd, (buffer + pos), 1);
	while (*(buffer + pos) != endl_char && nbytes > 0)
	{
		
		pos++;
		if(BUFF_SIZE == pos)
		{
			buff_line(line, buffer);
			pos = 0;
		}
		nbytes = read(fd, (buffer + pos), 1);
		if (nbytes == -1)
			return (-1);
	}
	if(nbytes != 0)
		*(buffer + pos) = '\0';
	buff_line(line, buffer);
	free(buffer);
	return (nbytes);
}
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

} /*
int main()
{
	const int fd = 0;
	char *l = ft_strnew(48);
	char **line = &l;
	l = ft_strcpy(l, "this is line 1\nso this should be line 2\n8765 4");
	printf("%s\n", l);
	int i = get_next_line(fd, line);
	printf("%s\n", l);
	printf("%d", i);
	return (0);
}*/
