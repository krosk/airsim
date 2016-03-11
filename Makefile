PROGNAME = airsim$(EXE)
INCLUDE = -Iinclude

CFLAGS = -Wall

test:
	$(CC) $(CFLAGS) main.cpp
	@echo Done.

