FLAGS = -Wall -Werror -Wextra
CC = gcc
SOURCES = main.c ft_strcmp.c
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))
HEADERS =
EXECUTABLE = ft_cat

all: $(SOURSEC) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@ 

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXECUTABLE)

.PHONY: claen fclean all ft_cat

