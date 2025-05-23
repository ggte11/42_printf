# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:07:01 by mcardoso          #+#    #+#              #
#    Updated: 2025/05/05 16:19:43 by mcardoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# compiler e flags
CC = cc
FLAGS = -Wall -Wextra -Werror

# apagar ficheiros e cria ficheiros .a
RM = rm -f
LIB = ar -rcs

SRCS =  ft_printf.c sources.c

# trasforma .c para .o
OBJS = $(SRCS:.c=.o)

all: ${NAME}

# o touch cria um ficheiro bonus para o make saber que ja foi adicionado
${NAME}: ${OBJS}
		${LIB} ${NAME} ${OBJS}
		@echo "Files .o created"

# compila qualquer .c em .o ($< ficheiro de entrada .c, $@ de saida)
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

# remove os .o
clean:
	@$(RM) $(OBJS)
	echo "Cleaned up Objs"

# fclean remove tudo incluindo o libftprintf.a
fclean: clean
	@$(RM) $(NAME)
	@echo "ALL Cleaned, $(NAME) Removed"

# make re: limpa tudo e recompila
re: fclean all

#estas palavras sao tratadas como comandos e nao ficheiros
.PHONY: all clean fclean re