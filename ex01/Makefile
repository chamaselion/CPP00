NAME		=	phonebook
CC			=	g++
CFLAGS		=	-Wall -Wextra -std=c++98
INCL_DIR	=	includes
SRC_DIR		=	sources
OBJ_DIR		=	objects

SRCS		=	$(SRC_DIR)/Contact.cpp \
                $(SRC_DIR)/PhoneBook.cpp \
                $(SRC_DIR)/main.cpp

OBJS		=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all:			$(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCL_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME):		$(OBJS)
	$(CC) $(CFLAGS) -I$(INCL_DIR) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean:			clean
	rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re