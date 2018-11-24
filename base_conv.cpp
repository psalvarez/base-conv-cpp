//----base_conv.cpp--------------

#include<iostream>
#include<string>
#include "base_conv.hpp"
using namespace std;

//const int BASE = 27;

void translate(int number, string& chain) {
    chain += char(number);
}

string converter(int input) {
    string output;

    translate(input, output);
    return output;
}

/*char converter(int input) {
    input++;
    return 'A';
}*/
