NAME	= libftprintf.a
CC	= clang
CFLAGS	= -Wall -Werror -Wextra
LIB	= libftprintf.h 
SRCS	= ft_printf.c  ft_printf_utils.c ft_read_placeholders.c
OBJS	= $(SRCS:.c=.o)
RM	= rm -f
AR	= ar rcs
RAN	= ranlib

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

all: 	$(NAME)

clean:
	$(RM) $(OBJS) 

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re 
