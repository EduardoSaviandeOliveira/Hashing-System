CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -lm

Main: Main.o Hash.o Classes.o Date.o LinkedList.o
	$(CC) $(CFLAGS) src/Main.o src/Hash/Hash.o src/Classes/Classes.o -o src/Main

Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o src/Main.o

Hash.o: src/Hash/Hash.cpp
	$(CC) $(CFLAGS) -c src/Hash/Hash.cpp -o src/Hash/Hash.o

Classes.o: src/Classes/Classes.cpp
	$(CC) $(CFLAGS) -c src/Classes/Classes.cpp -o src/Classes/Classes.o

Date.o: src/Date/Date.cpp
	$(CC) $(CFLAGS) -c src/Date/Date.cpp -o src/Date/Date.o

LinkedList.o: src/LinkedList/LinkedList.cpp
	$(CC) $(CFLAGS) -c src/LinkedList/LinkedList.cpp -o src/LinkedList/LinkedList.o

clean:
	rm -f src/Main *.o src/*.o src/Hash/*.o src/Classes/*.o src/Date/*.o src/Date/*.o src/LinkedList/*.o
