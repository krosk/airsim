PROGNAME = airsim$(EXE)

LIBS = -lstdc++ -lm

INC = -Iinclude

CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) $(INC) -o $(PROGNAME) main.cpp src/*.cpp $(LIBS)
	@echo Done

clean:
	rm *.o
	rm $(PROGNAME)