#include<iostream>
#include<string>
#include "base_conv.hpp"
using namespace std;

int main() {
    //Variable declaration
    int lo = 0;
    int hi = 0;
    string out_chain = "";

    //Read input
    cout << "Introduce low limit: " << endl;
    cin >> lo;
    cout << "Introduce hi limit: " << endl;
    cin >> hi;

    //Print list
    for(int i = lo; i <= hi; ++i) {
        cout << converter(i) << endl;
    }
}
