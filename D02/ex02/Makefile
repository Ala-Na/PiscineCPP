# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anadege <anadege@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 16:08:54 by anadege           #+#    #+#              #
#    Updated: 2021/11/23 16:08:54 by anadege          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -MMD -I$(HEADER_DIR)

SRCS_DIR = .
SRCS = Fixed.cpp main.cpp

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
OBJS_DIR = .objs

HEADER_DIR = .

PREREQ = $(OBJS:%.o=%.d)

MAKE = make
MAKE_DIR = mkdir -p
MAKE_RM = rm -f

all: $(NAME)

$(NAME):	$(OBJS)
			@echo "\nAssembling $(NAME)"
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@echo "Done !"

-include $(PREREQ)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
			@$(CXX) $(CXXFLAGS) -c $< -o $@
			@echo -n "\rCreation of $(NAME) objects"

$(OBJS_DIR):
			@echo "Creation of $(NAME) $@ file"
			@$(MAKE_DIR) $@

libft.a:
			@$(MAKE) -C libft

clean:
			@echo "Deleting $(NAME) objects"
			@$(MAKE_RM) -r $(OBJS_DIR)

fclean: 	clean
			@ echo "Deleting $(NAME) executable"
			@$(MAKE_RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re

