PROGNAME = airsim$(EXE)
INCLUDE = -Iinclude

CFLAGS = -Wall

test:
	$(MAKE) main.cpp
	@echo Done.

