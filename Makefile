PROGNAME = airsim$(EXE)

LIBS = -lstdc++

INC = -linclude

CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) $(INC) -o $(PROGNAME) main.cpp $(LIBS)
	@echo Done
