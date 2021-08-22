cflags  := -c -Wall -Werror -Wextra
ldflags :=
libs    :=





# main
build: main

run: main
	./main


re: clean build

rerun: clean run


source_dirs     := . src
header_dirs     := src/lib src
search_wildcard := $(wildcard $(addsuffix /*.c,$(source_dirs)))
object_files    := $(patsubst %.c,%.o,$(search_wildcard))
object_files    := $(notdir $(object_files))
object_files    := $(addprefix target/,$(object_files))
VPATH           := $(source_dirs)

main: ./target $(object_files) target/ft.o
	gcc $(ldflags) -o $@ $(object_files) target/ft.o $(libs)

./target:
	mkdir -p target

target/ft.o: ../mains/ft.c ../mains/ft.h
	gcc $(cflags) -o $@ -MD $(addprefix -I,$(header_dirs)) $<

target/%.o: %.c
	gcc $(cflags) -o $@ -MD $(addprefix -I,$(header_dirs)) $<

include $(wildcard target/*.d)



# clean
clean:
	-rm -r target main





# end
