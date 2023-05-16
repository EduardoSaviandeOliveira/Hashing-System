CC = g++
#CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -lm
CFLAGS = -Wall -Wextra -pedantic -std=c++17 -lm
OBJ1 = Main.o Date.o HashTable.o LinkedList.o Library.o Book.o Author.o
OBJ2 = src/Main.o src/Utils/Date/Date.o src/Utils/HashTable/HashTable.o src/Utils/LinkedList/LinkedList.o src/Classes/Library/Library.o src/Classes/Book/Book.o src/Classes/Author/Author.o
EXE = src/Main

Main: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ2) -o $(EXE)

Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o src/Main.o

Date.o: src/Utils/Date/Date.cpp
	$(CC) $(CFLAGS) -c src/Utils/Date/Date.cpp -o src/Utils/Date/Date.o

HashTable.o: src/Utils/HashTable/HashTable.cpp
	$(CC) $(CFLAGS) -c src/Utils/HashTable/HashTable.cpp -o src/Utils/HashTable/HashTable.o

LinkedList.o: src/Utils/LinkedList/LinkedList.cpp
	$(CC) $(CFLAGS) -c src/Utils/LinkedList/LinkedList.cpp -o src/Utils/LinkedList/LinkedList.o

Library.o: src/Classes/Library/Library.cpp
	$(CC) $(CFLAGS) -c src/Classes/Library/Library.cpp -o src/Classes/Library/Library.o

Book.o: src/Classes/Book/Book.cpp
	$(CC) $(CFLAGS) -c src/Classes/Book/Book.cpp -o src/Classes/Book/Book.o

Author.o: src/Classes/Author/Author.cpp
	$(CC) $(CFLAGS) -c src/Classes/Author/Author.cpp -o src/Classes/Author/Author.o

clean:
	rm -f src/Main *.o src/*.o src/Utils/Date/*.o src/Utils/HashTable/*.o src/Utils/LinkedList/*.o src/Classes/Library/*.o src/Classes/Book/*.o src/Classes/Author/*.o
