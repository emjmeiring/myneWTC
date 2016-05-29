/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomeirin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 16:32:34 by jomeirin          #+#    #+#             */
/*   Updated: 2016/05/17 03:41:22 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *str, int c, size_t n);
void				*ft_bzero(void *str, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *str, int c, size_t);
int					ft_memcmp(void *str1, void *str2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, int n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src,size_t n);
size_t				ft_strlcat(char *dest, char *src, size_t n);
char				*ft_strchr(char *str, int c);
char				*ft_strrchar(char *str, int c);
char				*ft_strstr(char *hay,const char *needle);
char				*ft_strnstr(char *hay, char *needle, size_t n);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int 				ft_atoi(const char *str);
int 				ft_isalpha(char c);
int 				ft_isdigit(int c);
int 				ft_isalnum(int c);
int 				ft_isascii(char c);
int 				ft_isprint(int c);
char 				*ft_toupper(char *str);
char 				*ft_tolower(char *str);
void				*ft_memalloc(size_t s);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t s);
void				ft_strdel(char **as);
void				ft_strclr(char* s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, void (*f)(char));
int					ft_strequ(char const *s1, char const *s2);
//char				*ft_itoa(int c);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(const char *s, void (*f)(unsigned int, char));
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(char *str, int c);
//char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
