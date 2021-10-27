# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anadege <anadege@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 17:40:15 by anadege           #+#    #+#              #
#    Updated: 2021/10/27 18:01:59 by anadege          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = .
SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
OBJS_DIR = .objs

PREREQ = $(OBJS:%.o=%.d)

MAKE = make
MAKE_DIR = mkdir -p
MAKE_RM = rm -f

all: $(NAME)

$(NAME):	$(OBJS)
			@echo "\nAssembling $(NAME)"
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "Done !"

-include $(PREREQ)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
			@$(CC) $(CFLAGS) -c $< -o $@
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
