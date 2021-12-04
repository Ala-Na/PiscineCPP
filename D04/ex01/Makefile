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

NAME = brain

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -I$(HEADER_DIR)

SRCS_DIR = .
SRCS = Animal.cpp Brain.cpp main.cpp

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
OBJS_DIR = .objs

HEADER_DIR = .

PREREQ = $(OBJS:%.o=%.d)

MAKE = make
MAKE_DIR = mkdir -p
MAKE_RM = rm -f

all: $(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

-include $(PREREQ)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
			$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR):
			$(MAKE_DIR) $@

clean:
			$(MAKE_RM) -r $(OBJS_DIR)

fclean: 	clean
			$(MAKE_RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re

