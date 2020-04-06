##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## to build my project
##

CC	=	gcc

NAME	=	ai

SRC	=	src/main.c							\
		src/utils/clean_str.c				\
        src/utils/my_put_str.c				\
        src/utils/my_str_dup.c				\
        src/utils/my_str_to_word_array.c	\
        src/utils/my_str_cat.c				\
        src/utils/search_match.c			\
        src/utils/my_str_len.c				\
        src/utils/compare.c					\
        src/utils/my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

OBJDIR	=	object/

CFLAGS	=	-I inc/ -W -Wall -Wextra -pedantic -g3

LDFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lcsfml-network -lm

#----Parameter----#

SHELL	:=	/bin/bash
MAKEFLAGS	+=	--no-print-directory --silence --silent

#----Color----#

COLOR 	=	\e[
RESET	=	\e[0m
R_BOLD	=	\e[21m
R_BLINK	=	\e[25m
GREEN	=	38;5;82
RED		=	31
BOLD	=	1
BLINK	=	5
END_COLOR	=	m

all:	introduction

introduction:	$(OBJDIR)
	echo -e "╔══Initialization compile"
	echo -e "║"
	echo -e "║"
	echo -e "╠══Starting to compile your file..."
	$(MAKE) start

start:	$(NAME)

$(NAME): $(OBJ)
	echo -e "║"
	echo -e "╠══Now build your project!"
	rm -f error_list
	echo -e "║"
	echo -e "╠══Build in progess..."
	$(CC) -o $(NAME) $^ $(LDFLAGS)	2>>error_list\
		&& echo -e "╚$(COLOR)$(GREEN)$(END_COLOR)Your project was succesfuly builded congratulation! $(RESET)"	\
		|| echo -e "╠$(COLOR)$(BOLD);$(BLINK);$(RED)$(END_COLOR)WARNING$(R_BLINK)$(R_BOLD) Your project is bad change this and retry newbie!$(RESET)"\
		"\n╚$(COLOR);$(RED)$(END_COLOR)Look in the error_list to see what is your problem.$(RESET)"
	mv $(OBJ) $(OBJDIR) 2>>error_list

$(OBJ):	%.o:	%.c
	gcc -c $< -o $@ $(CFLAGS)	2>>error_list\
		&& echo -e "╠══$(COLOR)$(GREEN)$(END_COLOR)$(notdir $@) builded! ✔$(RESET)"	\
		|| echo -e "╠══$(COLOR)$(RED);$(BLINK);$(BOLD)$(END_COLOR)WARNING$(R_BLINK) the file $(notdir $@) faild to build! ✘$(RESET)"

$(OBJDIR):
	mkdir -p $@
	echo -e creating th folder.

clean:
	$(RM) -r $(OBJDIR)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re