NAME    =   rush-2

SRCS    =   print_response.c support_functions.c read.c 

LIB     =   includes/header.h

all     :   $(NAME)

$(NAME) :
	gcc -o $(NAME) -Wall -Werror -Wextra $(SRCS) -I $(LIB)

fclean: 
	/bin/rm -f $(NAME)
