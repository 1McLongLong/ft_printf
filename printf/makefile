BINARY=main 
CODEDIRS=. lib
INCDIRS=. 

CC=gcc
DEPFLAGS=-MP -MD
CFLAGS=-Wall -Werror -Wextra $(foreach D,$(INCDIRS),-I$(D)) $(DEPFLAGS)

CFILES=$(foreach D,$(CODEDIRS), $(wildcard $(D)/*.c))
OBJECTS=$(patsubst %.c,%.o,$(CFILES))
DEPFILES=$(patsubst %.c,%.d,$(CFILES))

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BINARY) $(OBJECTS) $(DEPFILES)
