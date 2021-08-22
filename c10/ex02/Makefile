FLAGS = -Wall -Werror -Wextra
CC = gcc
SOURCES = main.c ft_fun1.c check_errors.c print.c check_function.c
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))
HEADERS =
EXECUTABLE = ft_tail

all: $(SOURSEC) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@ 

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXECUTABLE)

.PHONY: claen fclean all ft_tail

