ex      := do-op
cflags  := -c -Wall -Werror -Wextra
ldflags :=
libs    :=





# $(ex)
build: $(ex)

run: $(ex)
	@ $(ex)


re: clean build

rerun: clean run


search_wildcard := main.c operations.c ft_atoi.c ft_putnbr.c ft_strcmp.c
object_files    := $(patsubst %.c,%.o,$(search_wildcard))
object_files    := $(notdir $(object_files))
object_files    := $(addprefix target/,$(object_files))
VPATH           := $(source_dirs)

$(ex): ./target $(object_files)
	@ gcc $(ldflags) -o $@ $(object_files) $(libs)

./target:
	@ mkdir -p target

target/%.o: %.c
	@ gcc $(cflags) -o $@ -MD $<

include $(wildcard target/*.d)



# clean
clean:
	@ rm -rf target

fclean: clean
	@ rm -f $(ex)





# end
