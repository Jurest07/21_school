FLAGS = -Werror -Wall -Wextra

CC = gcc

RM = rm -f

SRCS = src/adt_structs.c src/condition_files.c src/convert_maps.c src/errors.c src/errors_files.c src/freedom.c src/main.c src/max_square.c src/read_first_line_from_keybord.c src/split_file.c src/sup_function.c 
OBJS = ${SRCS:.c=.o}

EXEC = bsq

HEAD = headers

all: ${EXEC} ${SRCS}
	
.c.o:
	@ ${CC} ${FLAGS} -c -I $(HEAD) $< -o $@

${EXEC}: ${OBJS}
	@ ${CC} ${FLAGS} ${OBJS} -o $@ 

clean:
	@ rm -rf src/*.o

fclean: clean
	@ rm -rf ${EXEC}

.PHONY: clean re fclean all
