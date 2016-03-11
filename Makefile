PROGNAME = airsim$(EXE)

LIBS = -lstdc++

INC = -linclude

CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) $(INC) -o $(PROGNAME) main.cpp src/*.cpp $(LIBS)
	@echo Done

clean:
	rm *.o
	rm $(PROGNAME)