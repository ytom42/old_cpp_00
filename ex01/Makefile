# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:14:45 by ytomiyos          #+#    #+#              #
#    Updated: 2021/11/08 15:31:59 by ytomiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		:= clang++
CXXFLAGS:= -Wall -Wextra -Werror

NAME	:= myawesome

SRCS	=	main.cpp \
			input.cpp

OBJS	=	$(SRCS:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
		rm -f *.o

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re