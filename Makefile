CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -lm
#CFLAGS = -Wall -Wextra -pedantic -std=c++17 -lm
OBJ1 = Main.o Menu.o Date.o HashTable.o LinkedList.o Library.o Author.o Publisher.o Book.o Magazine.o User.o
OBJ2 = src/Main.o src/Utils/Menu/Menu.o src/Utils/Date/Date.o src/Utils/HashTable/HashTable.o src/Utils/LinkedList/LinkedList.o src/Classes/Library/Library.o src/Classes/Author/Author.o src/Classes/Publisher/Publisher.o src/Classes/Book/Book.o src/Classes/Magazine/Magazine.o src/Classes/User/User.o
EXE = src/Main

Main: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ2) -o $(EXE)

Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o src/Main.o

Menu.o: src/Utils/Menu/Menu.cpp
	$(CC) $(CFLAGS) -c src/Utils/Menu/Menu.cpp -o src/Utils/Menu/Menu.o

Date.o: src/Utils/Date/Date.cpp
	$(CC) $(CFLAGS) -c src/Utils/Date/Date.cpp -o src/Utils/Date/Date.o

HashTable.o: src/Utils/HashTable/HashTable.cpp
	$(CC) $(CFLAGS) -c src/Utils/HashTable/HashTable.cpp -o src/Utils/HashTable/HashTable.o

LinkedList.o: src/Utils/LinkedList/LinkedList.cpp
	$(CC) $(CFLAGS) -c src/Utils/LinkedList/LinkedList.cpp -o src/Utils/LinkedList/LinkedList.o

Library.o: src/Classes/Library/Library.cpp
	$(CC) $(CFLAGS) -c src/Classes/Library/Library.cpp -o src/Classes/Library/Library.o

Author.o: src/Classes/Author/Author.cpp
	$(CC) $(CFLAGS) -c src/Classes/Author/Author.cpp -o src/Classes/Author/Author.o

Publisher.o: src/Classes/Publisher/Publisher.cpp
	$(CC) $(CFLAGS) -c src/Classes/Publisher/Publisher.cpp -o src/Classes/Publisher/Publisher.o

Book.o: src/Classes/Book/Book.cpp
	$(CC) $(CFLAGS) -c src/Classes/Book/Book.cpp -o src/Classes/Book/Book.o

Magazine.o: src/Classes/Magazine/Magazine.cpp
	$(CC) $(CFLAGS) -c src/Classes/Magazine/Magazine.cpp -o src/Classes/Magazine/Magazine.o

User.o : src/Classes/User/User.cpp
	$(CC) $(CFLAGS) -c src/Classes/User/User.cpp -o src/Classes/User/User.o

clean:
	rm -f src/Main *.o
	rm -f src/*.o
	rm -f src/Utils/*.o
	rm -f src/Utils/Menu/*.o
	rm -f src/Utils/Date/*.o
	rm -f src/Utils/HashTable/*.o
	rm -f src/Utils/LinkedList/*.o
	rm -f src/Classes/*.o
	rm -f src/Classes/Library/*.o
	rm -f src/Classes/Author/*.o
	rm -f src/Classes/Publisher/*.o
	rm -f src/Classes/Book/*.o
	rm -f src/Classes/Magazine/*.o
	rm -f src/Classes/User/*.o