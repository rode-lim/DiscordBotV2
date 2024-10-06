# This Makefile assumes the top folder has been built
TOP = ..
CC ?= cc

STD_BOTS   = blabla

BOTS += $(STD_BOTS)

CFLAGS  += -O0 -g -pthread -Wall \
           -ldiscord --static /usr/local/lib/libdiscord.a
LDLIBS   = -ldiscord -lcurl

all: $(BOTS)

echo:
    @ echo -e 'CC: $(CC)\n'
    @ echo -e 'STD_BOTS: $(STD_BOTS)\n'

clean:
    @ rm -f $(STD_BOTS)

.PHONY: all echo clean