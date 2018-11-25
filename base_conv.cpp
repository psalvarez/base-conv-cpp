//----base_conv.cpp--------------

#include<iostream>
#include<string>
#include "base_conv.hpp"
using namespace std;

const int BASE = 26;
const int ASCII_OFFSET = 65;

void addDigit(int number, string& chain) {
    chain = char(ASCII_OFFSET + number) + chain;
}

string converter(int input) {
    string output = "";
    int rem = 0;
    int res = input;

    do {
        rem = (res - 1) % BASE; //Update remainder
        res = (res - 1) / BASE; //Update cocient
        addDigit(rem,output); //Add remainder to the chain
    } while(res != 0); //While the cocient is not 0
    return output;
}
