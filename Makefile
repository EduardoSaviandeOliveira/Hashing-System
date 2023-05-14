CC = g++
#CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -lm
CFLAGS = -Wall -Wextra -pedantic -std=c++17 -lm
OBJ1 = Main.o Date.o HashTable.o Book.o
OBJ2 = src/Main.o src/Date/Date.o src/HashTable/HashTable.o src/Book/Book.o
EXE = src/Main

Main: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ2) -o $(EXE)

Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o src/Main.o

Date.o: src/Date/Date.cpp
	$(CC) $(CFLAGS) -c src/Date/Date.cpp -o src/Date/Date.o

HashTable.o: src/HashTable/HashTable.cpp
	$(CC) $(CFLAGS) -c src/HashTable/HashTable.cpp -o src/HashTable/HashTable.o

Book.o: src/Book/Book.cpp
	$(CC) $(CFLAGS) -c src/Book/Book.cpp -o src/Book/Book.o

clean:
	rm -f src/Main *.o src/*.o src/Date/*.o src/HashTable/*.o src/Book/*.o
