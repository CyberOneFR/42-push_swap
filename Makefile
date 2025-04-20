# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 19:37:57 by ethebaul          #+#    #+#              #
#    Updated: 2025/03/25 19:03:06 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	push_swap.c \
		parsing.c \
		utils.c \
		hash.c \
		list.c \
		swap.c \
		push.c \
		rotate.c \
		combined.c \
		little_sort.c \
		struct_utils1.c \
		struct_utils2.c \
		struct_utils3.c \
		sort.c

VPATH = srcs

OBJS = $(addprefix $(BUILDIR), $(SRCS:.c=.o))
DEPS = $(addprefix $(BUILDIR), $(SRCS:.c=.d))

CFLAGS = -Wall -Wextra -Werror -MMD -MP -I$(HEADERS)

CC = cc

NAME = push_swap

HEADERS = ./headers/

BUILDIR = ./build/

all: $(NAME)

$(BUILDIR):
	mkdir -p $(BUILDIR)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

./build/%.o: %.c | $(BUILDIR)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(BUILDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re