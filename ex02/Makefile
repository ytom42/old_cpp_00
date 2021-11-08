# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 16:00:36 by ytomiyos          #+#    #+#              #
#    Updated: 2021/11/08 16:58:56 by ytomiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		:= clang++
# CXXFLAGS:= -Wall -Wextra -Werror

NAME	:= job

SRCS	=	Account.cpp \
			tests.cpp

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