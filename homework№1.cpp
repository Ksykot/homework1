
#include <iostream>
#include <fstream>


int main(int argc, char** argv) {

    std::fstream file (" in.txt ");

    file.open(" in.txt ");

    if ( file.is_open() ) {
        std::cout << " OPEN ";
    }
    else {
        std::cout << " CLOSE ";
    }

    file.close();

    return 0;
}

