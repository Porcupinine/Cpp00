# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: laura <laura@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/27 23:33:06 by laura         #+#    #+#                  #
#    Updated: 2023/10/27 23:33:06 by laura         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#--------------------------------------------------------------------Executable
NAME	:= phonebook

#----------------------------------------------------------------------Compiler
CC 		=  -c++

#-------------------------------------------------------------------------Flags
CFLAGS	+= -Wextra -Wall -Werror
ASANFLAGS += -fsanitize=address -fsanitize=leak

#----------------------------------------------------------------Libraries path

#-----------------------------------------------------------------------Headers
HEADER	= Contact.hpp PhoneBook.hpp
#---------------------------------------------------------------------Libraries

#------------------------------------------------------------------------Source
SRC	:= main.cpp \
       Contact.cpp \
       PhoneBook.cpp

#-----------------------------------------------------------------------Objects
OBJS	:= ${SRC:.cpp=.o}

#---------------------------------------------------------------------Directory
OBJ_DIR := objs/
OBJECTS_PREFIXED := $(addprefix $(OBJ_DIR), $(OBJS))

#-------------------------------------------------------------------------Rules
all: $(NAME)

$(OBJ_DIR)%.o : %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) $(OBJECTS_PREFIXED) -o $(NAME)
	@echo "PhoneBook is ready!"

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re, libmlx lib42_build
