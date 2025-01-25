# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleblond <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 01:51:03 by pleblond          #+#    #+#              #
#    Updated: 2025/01/25 01:51:03 by pleblond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

NAME = megaphone

OBJ = $(SRCS:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

cc = cc

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME) -lstdc++

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re