# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namkyu <namkyu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 15:06:30 by nlee              #+#    #+#              #
#    Updated: 2021/04/30 20:22:08 by namkyu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	ft_memset	\
		ft_bzero	\
		ft_memcpy	\
		ft_memccpy	\
		ft_memmove	\
		ft_memchr	\
		ft_memcmp	\
		ft_strlen	\
		ft_strlcpy	\
		ft_strlcat	\
		ft_strchr	\
		ft_strrchr	\
		ft_strnstr	\
		ft_strncmp	\
		ft_strcmp	\
		ft_atoi		\
		ft_atoi2	\
		ft_isalpha	\
		ft_isdigit	\
		ft_isalnum	\
		ft_isascii	\
		ft_isprint	\
		ft_isspace	\
		ft_toupper	\
		ft_tolower	\
		ft_calloc	\
		ft_strdup 	\
		ft_substr	\
		ft_strjoin	\
		ft_strtrim	\
		ft_split	\
		ft_itoa		\
		ft_strmapi	\
		ft_putchar_fd	\
		ft_putstr_fd	\
		ft_putendl_fd	\
		ft_putnbr_fd	\
		get_next_line_utils	\
		get_next_line	\
		./ft_printf/ft_printf		\
		./ft_printf/printf_data_utils\
		./ft_printf/printf_display_utils\
		./ft_printf/printf_parse_part_1	\
		./ft_printf/printf_parse_part_2	\


FILES_BONUS = ft_lstnew	\
			  ft_lstadd_front \
			  ft_lstsize	\
			  ft_lstlast	\
			  ft_lstadd_back	\
			  ft_lstdelone	\
			  ft_lstclear	\
			  ft_lstiter	\
			  ft_lstmap		\

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_BONUS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_BONUS)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_BONUS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_BONUS)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_BONUS)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
