NAME = blabla
SRC = $(NAME).c commands.c
OBJ = $(SRC:.c=.o)

TOP = ..
CC ?= cc
RM = rm -f

STD_BOTS   = blabla

BOTS += $(STD_BOTS)

CFLAGS  += -O0 -g -pthread -Wall
LDLIBS   = -ldiscord -lcurl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(LDLIBS)

all: $(BOTS)

echo:
	@ echo -e 'CC: $(CC)\n'
	@ echo -e 'STD_BOTS: $(STD_BOTS)\n'

clean:
	@ $(RM) $(OBJ) $(NAME) $(STD_BOTS)