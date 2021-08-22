FLAGS = -Wall -Werror -Wextra
CC = gcc
SOURCES = main.c
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))
HEADERS =
EXECUTABLE = ft_display_file

all: $(SOURSEC) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $< -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@ 

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXECUTABLE)

.PHONY: claen fclean all ft_display_file

