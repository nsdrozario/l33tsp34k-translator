// l33tsp34k translator (C) 2020 Nathaniel D'Rozario | see LICENSE file for license
#include <l33tsp34k.hpp>

char l33tsp34k::conv_to_plaintext (char in) {
    if (in == '4' || in == '@') {// ugly but faster than using a map
        return 'a';
    } else if (in == '8') {
        return 'b';
    } else if (in == '(') {
        return 'c';
    } else if (in == '3') {
        return 'e';
    } else if (in == '9') {
        return 'g';
    } else if (in == '1') {
        return 'i';
    } else if (in == '7') {
        return 'l';
    } else if (in == '0') {
        return 'o';
    } else if (in == '5') {
        return 's';
    } else if (in == '2') {
        return 'z';
    } else  {
        return in;
    }
}

char l33tsp34k::conv_to_leetspeak (char in) {
    if (in == 'a') {
        return '4';
    } else if (in == 'b') {
        return '8';
    } else if (in == 'c') {
        return '(';
    } else if (in == 'e') {
        return '3';
    } else if (in == 'g') {
        return '9';
    } else if (in == 'i') {
        return '1';
    } else if (in == 'l') {
        return '7';
    } else if (in == 'o') {
        return '0';
    } else if (in == 's') {
        return '5';
    } else if (in == 'z') {
        return '2';
    } else {
        return in;
    }
}