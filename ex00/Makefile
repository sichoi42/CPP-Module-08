# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 18:35:07 by sichoi            #+#    #+#              #
#    Updated: 2022/07/31 00:11:23 by sichoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easy_find

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MD

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
CHECK = \033[0;32m\xE2\x9C\x94\033[0m

FUNC = main\


SRC = $(addsuffix .cpp, $(FUNC))
OBJ = $(addsuffix .o, $(FUNC))
DEP = $(addsuffix .d, $(FUNC))

%.o : %.cpp
	@echo "$(NAME): $(GREEN) compiling... $< $(CHECK) $(RESET)"
	@$(CC) $(CXXFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	@$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "$(NAME): $(GREEN) $(NAME) was created! $(CHECK) $(RESET)"

all : $(NAME)

clean :
	@rm -f $(OBJ) $(DEP)
	@echo "$(NAME): $(RED) object files were deleted $(RESET)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(NAME): $(RED) $(NAME) was deleted $(RESET)"

re :
	@$(MAKE) fclean
	@$(MAKE) all

-include $(DEP)
