NAME = libft.a

SRCS =  str/ft_strcmp.c   str/ft_strncmp.c  str/ft_strcat.c   str/ft_strchr.c  \
	   str/ft_strcpy.c   str/ft_strdup.c   str/ft_strjoin.c  str/ft_strncat.c  \
	   str/ft_strncpy.c  str/ft_strnew.c   str/ft_strnstr.c  str/ft_strrchr.c  \
	   str/ft_strstr.c   str/ft_strsub.c   str/ft_strlen.c					   \
	   																		   \
	   others/ft_bzero.c others/ft_calloc.c others/ft_memset.c				   \
	   																		   \
	   print/ft_putnbr.c print/ft_putstr.c									   \
	   																		   \
	   lst/ft_lstadd_back.c lst/ft_lstadd_front.c lst/ft_lstsize.c 			   \
	   lst/ft_lstnew.c			   											   \
	   																		   \
	   conversion/ft_atoi.c conversion/ft_itoa.c conversion/ft_itoa_base.c 	   \
	   conversion/ft_intmaxt_toa_base.c conversion/ft_uintmaxt_toa_base.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.c:
	gcc $(CFLAGS)

$(NAME): $(OBJS)
