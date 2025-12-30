# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marwan <marwan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 16:54:24 by root              #+#    #+#              #
#    Updated: 2025/12/09 16:51:20 by marwan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex02

SRC = main.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp AForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

CFLAGS =  -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

%o : %.cpp
	c++ $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)
	rm -f *_shrubbery
fclean : clean
	rm -f $(NAME)
re : fclean $(NAME)

.Phony : 
	re clean all fclean