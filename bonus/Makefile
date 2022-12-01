NAME	= libftprintf.a
CC	= clang
CFLAGS	= -Wall -Werror -Wextra
LIB	= libftprintf.h 
SRCS	= ft_printf.c  ft_printf_utils.c ft_printf_utils1.c ft_printf_utils_b.c ft_read_placeholder.c
B_SRCS	= ft_printf.c  ft_printf_utils.c ft_printf_utils1.c ft_printf_utils_b.c ft_read_placeholder.c
OBJS	= $(SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)
RM	= rm -f
AR	= ar rcs
RAN	= ranlib

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

bonus:  $(B_OBJS)
	$(AR) $(NAME) $(B_OBJS)
	
%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

all: 	$(NAME)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re bonus
