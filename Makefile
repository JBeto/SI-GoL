CC = g++
CXXFLAGS = -Wall -Werror -std=c++11

all: game

game:	gameOfLife.o main.o
		$(CC) $(CXXFLAGS) gameOfLife.o main.o

gameOfLife.o:	src/gameOfLife.cpp
	$(CC) $(CXXFLAGS) -c src/gameOfLife.cpp

main.o:		src/main.cpp
	$(CC) $(CXXFLAGS) -c src/main.cpp

clean:
	$(RM) all *.o *~
