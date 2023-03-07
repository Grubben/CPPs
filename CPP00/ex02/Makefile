NAME		= phonebook

## COMPILATION
# CXX			= c++
CC			= c++
# Compilation Flags
# CXXFLAGS	=-Wall -Wextra -Werror -g -std=c++98
CFLAGS		=-I. -g3 -std=c++98 #-Wall -Wextra -Werror

# Removal Flags. Not sure if necessary
RM			= rm -rf

# SRCS		= Contact.cpp PhoneBook.cpp
SRCS		= $(wildcard *.cpp)

OBJS		= $(SRCS:.cpp=.o)

$(NAME)		: $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			# ./$(NAME)

%.o			: %.cpp
				# clear
				$(CC) $(CFLAGS) -c -o $@ $<

all			: $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

f			: fclean


r			: fclean $(NAME)

.PHONY		: r fclean clean all
