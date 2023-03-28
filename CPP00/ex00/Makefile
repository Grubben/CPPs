NAME		= megaphone

## COMPILATION
# CC			= c++
CXX			= c++
# Compilation Flags
# CFLAGS		=-Wall -Wextra -Werror -g -std=c++98
CXXFLAGS	=-Wall -Wextra -Werror -g3 -std=c++98

# Removal Flags. Not sure if necessary
RM			= rm -rf

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

$(NAME)		: $(OBJS)
			$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

# %.o			: %.c
# 			$(CXX) $(CFLAGS) -c -o $@ $<

all			: $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean $(NAME)

.PHONY		: re fclean clean all
