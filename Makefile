# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/01 11:45:45 by ktiong            #+#    #+#              #
#    Updated: 2021/05/01 11:45:45 by ktiong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					= libft.a

SRCS					= ft_atoi.c \
					  ft_bzero.c \
					  ft_calloc.c \
					  ft_isalnum.c \
					  ft_isalpha.c \
					  ft_isascii.c \
					  ft_isdigit.c \
					  ft_isprint.c \
					  ft_itoa.c \
					  ft_memccpy.c \
					  ft_memchr.c \
					  ft_memcmp.c \
					  ft_memcpy.c \
					  ft_memmove.c \
					  ft_memset.c \
					  ft_putchar_fd.c \
					  ft_putendl_fd.c \
					  ft_putnbr_fd.c \
					  ft_putstr_fd.c \
					  ft_split.c \
					  ft_strchr.c \
					  ft_strdup.c \
					  ft_strjoin.c \
					  ft_strlcat.c \
					  ft_strlcpy.c \
					  ft_strlen.c \
					  ft_strmapi.c \
					  ft_strncmp.c \
					  ft_strnstr.c \
					  ft_strrchr.c \
					  ft_strtrim.c \
					  ft_substr.c \
					  ft_tolower.c \
					  ft_toupper.c \
					  ft_itoa.c \
					  ft_strnew.c \
					  ft_chrstr.c \
					  ft_putchar.c \
					  ft_strcpy.c \
					  ft_putstr.c \
					  ft_strncpy.c \
					  ft_htoi.c \
					  ft_ishex.c \
	   				  ft_ispunc.c \
					  ft_isspace.c \
					  ft_isxdigit.c \
					  ft_memdel.c \
					  ft_isnan.c \
					  util.c \
					  ft_zerolen.c \
					  ft_putnstr_fd.c \
					  ft_ternint

BNS_SRCS				= ft_lstsize.c \
					  ft_lstadd_back.c \
					  ft_lstadd_front.c \
					  ft_lstclear.c \
					  ft_lstdelone.c \
					  ft_lstiter.c \
					  ft_lstlast.c \
					  ft_lstmap.c \
					  ft_lstnew.c 

OBJS					= $(SRCS:%.c=%.o)

BNS_OBJS				= $(BNS_SRCS:%.c=%.o)

FLAGS					= -Wall -Wextra -Werror

$(NAME)		:	$(OBJS)
			gcc $(FLAGS) -c $(SRCS) -I./
			ar rc $(NAME) $(OBJS)

all	:	$(NAME)

bonus	:	$(NAME)
		gcc $(FLAGS) -c $(BNS_SRCS) -I./
		ar rc $(NAME) $(BNS_OBJS)

clean	:
		rm -f $(OBJS) $(BNS_OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
