# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 16:54:24 by root              #+#    #+#              #
#    Updated: 2025/11/04 20:49:48 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex03

SRC = main.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp AForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp \
	Intern.cpp

CFLAGS =  -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

%o : %.cpp
	c++ $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean $(NAME)

.Phony : 
	re clean all fclean