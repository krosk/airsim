PROGNAME = airsim$(EXE)
INCLUDE = -linclude

CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) -o $(PROGNAME) main.cpp -lstdc++
	@echo Done.
