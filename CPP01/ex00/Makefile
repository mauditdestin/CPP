# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleblond <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 22:11:24 by pleblond          #+#    #+#              #
#    Updated: 2025/07/08 22:11:24 by pleblond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC_DIR = src/
OBJ_DIR = obj/

SRCS = $(SRC_DIR)main.cpp \
		$(SRC_DIR)Zombie.cpp \
		$(SRC_DIR)newZombie.cpp \
		$(SRC_DIR)randomChump.cpp \

OBJ = $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
