PROGNAME = airsim$(EXE)

LIBS = 

INC = /Iinclude

CFLAGS = -W0

all:
	$(CC) $(CFLAGS) $(INC) /o $(PROGNAME) main.cpp $(LIBS)
	@echo Done
