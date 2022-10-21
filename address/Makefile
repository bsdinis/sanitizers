CC=clang
CFLAGS = -O0 -fno-omit-frame-pointer -fsanitize=address
LDFLAGS = -fsanitize=address

SOURCES=$(wildcard *.c)
TARGETS=$(SOURCES:.c=)

.PHONY: all
all: $(TARGETS)

out-of-bounds: out-of-bounds.c

use-after-free: use-after-free.c

double-free: double-free.c

invalid-free: invalid-free.c

mem-leak: mem-leak.c

clean:
	rm -f $(TARGETS)
