# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:19:25 by hucorrei          #+#    #+#              #
#    Updated: 2023/01/19 11:57:46 by hucorrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS	= 	./src/instruction1.c \
			./src/instruction2.c \
			./src/instruction3.c \
			./src/instruction4.c \
			./src/main.c \
			./src/radix.c \
			./src/simple.c \
			./tools/ft_ctrl_arg.c \
			./tools/ft_index.c \
			./tools/ft_lst.c \
			./tools/ft_tools.c \

OBJS	= ${SRCS:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		= rm -rf



${NAME}:	${OBJS}
		@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
		@${MAKE} -C ./libft
		@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}
		@echo "$(GREEN)$(NAME) created[0m ✔️"

all:	${NAME}

clean:
		@${MAKE} -C ./libft fclean
		@${RM} ${OBJS}
		@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:	clean
		@${RM} ${NAME}
		@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:		fclean all

.PHONY:	all clean fclean re
