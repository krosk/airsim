PROGNAME = airsim$(EXE)

LIBS = 

INC = /Iinclude

CFLAGS = -W0 /EHsc

all:
	$(CC) $(CFLAGS) $(INC) /o $(PROGNAME) main.cpp src/*.cpp $(LIBS)
	@echo Done

clean:
	del *.obj
	del $(PROGNAME).exe