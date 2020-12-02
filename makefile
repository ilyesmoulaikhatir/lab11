CC = gcc
CROSS_COMP = $(CROSS_COMPILE)
OBJ = max.o min.o var.o

ifeq ($(DEBUG),yes)
     CC_OPTIONS = -g -Wall
else
     CC_OPTIONS =
endif

my-binaire: test.c max.c min.c var.c
	@if [ $(DEBUG) = yes ]; then\
        	echo "la compilation se déroule en mode DEBUG";\
	else\
		echo "la compilation se déroule en mode RELEASE";\
	fi
	$(addsuffix $(CC),$(CROSS_COMP)) $(CC_OPTIONS) $^ -o $@

%.o: %.c
	$(addsuffix $(CC),$(CROSS_COMP)) $(CC_OPTIONS) -c $^ -o $@

install: my-binaire
	mv $< $(HOME)

clean: 
	rm -rf $(OBJ) my-binaire
