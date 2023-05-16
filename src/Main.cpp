#include "Classes/Library/Library.hpp"


int main() {
    Library *library = new Library();

    library->~Library();

    return 0;
}