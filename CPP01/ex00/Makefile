NAME		= zombies

## COMPILATION
CC			= c++
CXX			= c++
# Compilation Flags
CFLAGS		=-Wall -Wextra -Werror -g -std=c++98
CXXFLAGS	=-Wall -Wextra -Werror -g -std=c++98

# Removal Flags. Not sure if necessary
RM			= rm -rf

SRCS		= $(wildcard *.cpp)

OBJS		= $(SRCS:.cpp=.o)

$(NAME)		: $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o			: %.c
			$(CC) $(CFLAGS) -c -o $@ $<

all			: $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean $(NAME)

c			: clean

f			: fclean

r			: re

.PHONY		: re fclean clean all c f r
