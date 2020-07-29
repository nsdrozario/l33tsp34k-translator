// l33tsp34k translator (C) 2020 Nathaniel D'Rozario | see LICENSE file for license
#include <iostream>
#include <fstream>
#include <cstring>
#include <l33tsp34k.hpp>

std::ifstream file_in;
std::ofstream file_out;
char tmp;

int main (int argc, char *argv[]) {

    if (argc != 4) {
        std::cout << "usage: l33tsp34k [-l | -p] file_in file_out\n-l for converting to leetspeak\n-p for converting to plaintext" << std::endl;
    }

    file_in.open(argv[2]);
    
    if (!file_in.good()) {
        std::cout << "could not open " << argv[2] << "for reading" << std::endl;
        exit(-1);
    }

    file_out.open(argv[3]);

    if (std::strcmp(argv[1], "-l")) {
        while (file_in >> tmp) {
            file_out << l33tsp34k::conv_to_leetspeak(tmp);
        }
    } else if (std::strcmp(argv[1], "-p")) {
        while (file_in >> tmp) {
            file_out << l33tsp34k::conv_to_plaintext(tmp);
        }
    } else {
        std::cout << "invalid flag, use -l for translating to leetspeak and -p for translating to plaintext" << std::endl;
        exit(-1);
    }

    std::cout << "conversion successful" << std::endl;

    return 0;

}