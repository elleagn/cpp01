# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gozon <gozon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 11:02:35 by gozon             #+#    #+#              #
#    Updated: 2025/01/29 16:28:56 by gozon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = complain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC_FILES = Harl.cpp main.cpp
OBJ_DIR = objects
OBJ = $(SRC_FILES:%.cpp=$(OBJ_DIR)/%.o)

# Symboles Unicode
CHECK_MARK = ✔

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(NAME) a été créé avec succès ($(CHECK_MARK))"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Nettoyage réussi ($(CHECK_MARK))"

fclean:
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "Nettoyage complet réussi ($(CHECK_MARK))"

re: fclean all

.PHONY: all clean fclean re
