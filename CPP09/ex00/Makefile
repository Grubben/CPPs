NAME		= btc

## COMPILATION
CXX			= c++
# Compilation Flags
CFLAGS		= -O0 -g -fstandalone-debug -std=c++98 -Wall -Wextra -Werror 

# Removal Flags. Not sure if necessary
RM			= rm -rf

SRCS		= $(wildcard *.cpp)

OBJS		= $(SRCS:.cpp=.o)

$(NAME)		: $(OBJS)
				$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

%.o			: %.cpp
				$(CXX) $(CFLAGS) -c -o $@ $<

all			: $(NAME)

clean		:
				$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean $(NAME)

c			: clean

f			: fclean

r			:
				clear
				make re

.PHONY		: re fclean clean all c f r
