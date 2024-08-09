NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS = ${SRCS:.c=.o}

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

INCS = includes\libft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIBC = ar -rcs

RM = rm -f


.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	@${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${OBJS_BONUS} ${OBJS}
	@${LIBC} ${NAME} ${OBJS} ${OBJS_BONUS}

fclean: clean
	@${RM} ${NAME}

clean:
	@${RM} ${OBJS} ${OBJS_BONUS}

re: fclean all

.PHONY: all fclean clean re .c.o bonus
