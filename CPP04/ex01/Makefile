# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 18:29:20 by marvin            #+#    #+#              #
#    Updated: 2025/07/21 18:29:20 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

COMP = c++
COMPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCDIR = src
OBJDIR = obj

SRCS = $(SRCDIR)/main.cpp \
	   $(SRCDIR)/Animal.cpp \
	   $(SRCDIR)/Dog.cpp \
	   $(SRCDIR)/Cat.cpp \
	   $(SRCDIR)/WrongAnimal.cpp \
	   $(SRCDIR)/WrongCat.cpp \
	   $(SRCDIR)/Brain.cpp \

OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(COMP) $(COMPFLAGS) -c $< -o $@
	@echo "Compiling $<"

$(NAME): $(OBJDIR) $(OBJS)
	@$(COMP) $(COMPFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiling $(NAME)"
	@echo "Compilation finished :)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "Removing objects"
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

re: fclean all

.PHONY: all clean fclean re