# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-anm <juan-anm@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 13:25:17 by juan-anm          #+#    #+#              #
#    Updated: 2023/05/19 16:18:05 by juan-anm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -g
SRCS = ft_printf.c ft_printbase.c ft_printchars.c ft_printnum.c \

INCLUDE = ft_printf.h

OBJS = $(SRCS:.c=.o)
RM = rm -f
DEPS = $(SRCS:.c=.d)

%.o: %.c Makefile
	@echo "\033[1;32mCompiling ⚙️ \033[1;30m"
	$(CC) $(CFLAGS) -MMD -I $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME):: $(OBJS)
	ar crs $(NAME) $(OBJS)
	@echo "\033[1;32mLinking library 🔗 \033[1;30m"


clean:
	$(RM) $(OBJS) $(DEPS) 
	@echo "\033[1;31mRemoved Files 🔥\n $(OBJS) $(DEPS) \033[1;30m"

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus

-include ${DEPS}


