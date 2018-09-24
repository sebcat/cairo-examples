CFLAGS +=-I/usr/local/include -L/usr/local/lib
LDFLAGS =-lcairo
BINS=hello-world
RM ?= rm -f

.PHONY: all clean

all: $(BINS)

hello-world: hello-world.c

clean:
	$(RM) $(BINS)
