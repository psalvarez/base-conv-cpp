//----base_conv.cpp--------------

#include<iostream>
#include<string>
#include "base_conv.hpp"
using namespace std;

const int BASE = 26;
const int ASCII_OFFSET = 65;

void translate(int number, string& chain) {
    chain = char(ASCII_OFFSET + number) + chain;
}

string converter(int input) {
    string output = "";
    int rem = (input - 1) % BASE;
    int res = (input - 1) / BASE;
    translate(rem, output); //Add first character

    if(res != 0)
        translate(res - 1,output); //Add second character
    return output;
}
