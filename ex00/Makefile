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
NAME	:= megaphone

#----------------------------------------------------------------------Compiler
CC 		=  -c++

#-------------------------------------------------------------------------Flags
CFLAGS	+= -Wextra -Wall -Werror
ASANFLAGS += -fsanitize=address -fsanitize=leak

#----------------------------------------------------------------Libraries path

#-----------------------------------------------------------------------Headers
HEADER	=
#---------------------------------------------------------------------Libraries

#------------------------------------------------------------------------Source
SRC	:= megaphone.cpp

#-----------------------------------------------------------------------Objects
OBJS	:= ${SRC:.cpp =.o}

#---------------------------------------------------------------------Directory
OBJ_DIR := objs/
OBJECTS_PREFIXED := $(addprefix $(OBJ_DIR), $(OBJS))

#-------------------------------------------------------------------------Rules
all: $(NAME)

$(OBJ_DIR)%.o : %.cpp $(HEADER)
	echo "dir"
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJECTS_PREFIXED)
	echo "making"
	$(CC) $(OBJECTS_PREFIXED) -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@rm -rf $(LIBMLX)/build

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re, libmlx lib42_build
