#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string  baris;

    //membuat objek ouput file stream
    ofstream oufile;
    //membuka file untuk menulis
    oufile.open("contohfile.txt");
