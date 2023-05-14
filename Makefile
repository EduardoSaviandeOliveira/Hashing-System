CC = g++
#CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++17 -lm
CFLAGS = -Wall -Wextra -pedantic -std=c++17 -lm
OBJ1 = Main.o Date.o LinkedList.o HashTable.o Classes.o
OBJ2 = src/Main.o src/Date/Date.o src/LinkedList/LinkedList.o src/HashTable/HashTable.o src/Classes/Classes.o
EXE = src/Main


Main: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ2) -o $(EXE)

Main.o: src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o src/Main.o

HashTable.o: src/HashTable/HashTable.cpp
	$(CC) $(CFLAGS) -c src/HashTable/HashTable.cpp -o src/HashTable/HashTable.o

Date.o: src/Date/Date.cpp
	$(CC) $(CFLAGS) -c src/Date/Date.cpp -o src/Date/Date.o

LinkedList.o: src/LinkedList/LinkedList.cpp
	$(CC) $(CFLAGS) -c src/LinkedList/LinkedList.cpp -o src/LinkedList/LinkedList.o

Classes.o: Library.o Item.o User.o Author.o Publisher.o Form.o Book.o Magazine.o
	ld -r src/Classes/Library/Library.o src/Classes/Item/Item.o src/Classes/User/User.o src/Classes/Author/Author.o src/Classes/Publisher/Publisher.o src/Classes/Form/Form.o src/Classes/Book/Book.o src/Classes/Magazine/Magazine.o -o src/Classes/Classes.o

Library.o: src/Classes/Library/Library.cpp
	$(CC) $(CFLAGS) -c src/Classes/Library/Library.cpp -o src/Classes/Library/Library.o

Item.o: src/Classes/Item/Item.cpp
	$(CC) $(CFLAGS) -c src/Classes/Item/Item.cpp -o src/Classes/Item/Item.o

User.o: src/Classes/User/User.cpp
	$(CC) $(CFLAGS) -c src/Classes/User/User.cpp -o src/Classes/User/User.o

Author.o: src/Classes/Author/Author.cpp
	$(CC) $(CFLAGS) -c src/Classes/Author/Author.cpp -o src/Classes/Author/Author.o

Publisher.o: src/Classes/Publisher/Publisher.cpp
	$(CC) $(CFLAGS) -c src/Classes/Publisher/Publisher.cpp -o src/Classes/Publisher/Publisher.o

Form.o: src/Classes/Form/Form.cpp
	$(CC) $(CFLAGS) -c src/Classes/Form/Form.cpp -o src/Classes/Form/Form.o

Book.o: src/Classes/Book/Book.cpp
	$(CC) $(CFLAGS) -c src/Classes/Book/Book.cpp -o src/Classes/Book/Book.o

Magazine.o: src/Classes/Magazine/Magazine.cpp
	$(CC) $(CFLAGS) -c src/Classes/Magazine/Magazine.cpp -o src/Classes/Magazine/Magazine.o


clean:
	rm -f src/Main *.o src/*.o src/HashTable/*.o src/Date/*.o src/LinkedList/*.o src/Classes/*.o src/Classes/Library/*.o src/Classes/Item/*.o src/Classes/User/*.o src/Classes/Author/*.o src/Classes/Publisher/*.o src/Classes/Form/*.o src/Classes/Book/*.o src/Classes/Magazine/*.o
