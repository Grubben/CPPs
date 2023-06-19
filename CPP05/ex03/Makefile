NAME		= coffee

## COMPILATION
# CC			= /nix/store/9a6xmi09ngdcb5wi9sv4qyxqa894s8md-clang-wrapper-11.1.0/bin/clang++
CXX			= clang++
# Compilation Flags
CFLAGS		=-g -std=c++98 -Wall -Wextra -Werror
# CXXFLAGS	=-g -std=c++98 -Wall -Wextra -Werror

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
