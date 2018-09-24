CFLAGS +=-I/usr/local/include -L/usr/local/lib
LDFLAGS =-lcairo
BINS=hello-world draw-bar
RM ?= rm -f

.PHONY: all clean

all: $(BINS)

clean:
	$(RM) $(BINS) *.png
