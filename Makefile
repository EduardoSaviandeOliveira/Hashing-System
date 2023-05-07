CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -lm

Main: Main.o Hash.o
	$(CC) $(CFLAGS) src/Main.o src/Hash/Hash.o -o src/Main

Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o src/Main.o

Hash.o: src/Hash/Hash.cpp
	$(CC) $(CFLAGS) -c src/Hash/Hash.cpp -o src/Hash/Hash.o

clean:
	rm -f src/Main *.o src/*.o src/Hash/*.o
