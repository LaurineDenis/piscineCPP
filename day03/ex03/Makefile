BLUE =\033[0;38;5;123m
LIGHT_PINK = \033[0;38;5;200m
PINK = \033[0;38;5;198m
DARK_BLUE = \033[1;38;5;110m
GREEN = \033[1;32;111m
LIGHT_GREEN = \033[0;38;5;121m
LIGHT_RED = \033[0;31;5;110m
FLASH_GREEN = \033[33;32m
WHITE_BOLD = \033[37m
GREY = \033[3;90m
ORANGE = \033[3;91m
YELLOW = \033[0;33m

NAME		=  Repetitive_work

SRCS		= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HEADER		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJ_PATH	= obj/

OBJ_NAME	= ${SRCS:.cpp=.o}

OBJ			= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

RM			= rm -rf

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow


$(OBJ_PATH)%.o:	%.cpp
				@printf "\r$(LIGHT_PINK)Compiling:	\033[37m$<"
				@${CC} ${CFLAGS} -c $< -o $@

all:			${OBJ_PATH} ${NAME}
				@:

$(OBJ_PATH):
				@echo "$(BLUE)\n\t\tPISCINE CPP :\n"
				@mkdir -p obj/ 2> /dev/null

$(NAME):		${OBJ} ${HEADER}
				@$(CC) ${CFLAGS} -o ${NAME} ${OBJ}
				@echo ""

clean:
				@${RM} ${OBJ_PATH}
				@echo ""
				@echo "\t\t$(ORANGE)[Delete objs minishell done]"
				@echo ""

fclean:
				@${RM} ${OBJ_PATH}
				@${RM} ${NAME}
				@echo ""
				@echo "\t\t$(ORANGE)[Delete objs minishell done]"
				@echo ""

re:				fclean all
