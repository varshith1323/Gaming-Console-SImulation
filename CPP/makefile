CC=g++

test: main.o Console.o Game.o Chargeable.o FlightSimple.o RandomWalk.o
	$(CC) main.o Console.o Game.o Chargeable.o FlightSimple.o RandomWalk.o -o test

main.o: main.cpp
	$(CC) -c main.cpp

Console.o: Console.cpp Console.h
	$(CC) -c Console.cpp

Game.o: Game.cpp Game.h
	$(CC) -c Game.cpp

Chargeable.o: Chargeable.cpp Chargeable.h
	$(CC) -c Chargeable.cpp

FlightSimple.o: FlightSimple.cpp FlightSimple.h
	$(CC) -c FlightSimple.cpp

RandomWalk.o: RandomWalk.cpp RandomWalk.h
	$(CC) -c RandomWalk.cpp

clean:
	rm *.o test