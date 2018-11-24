//----base_conv.cpp--------------

#include<iostream>
#include<string>
#include "base_conv.hpp"
using namespace std;

//const int BASE = 27;
const int ASCII_OFFSET = 65;

void translate(int number, string& chain) {
    chain += char(ASCII_OFFSET + number);
}

string converter(int input) {
    string output;

    translate(input, output);
    return output;
}
