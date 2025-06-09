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

    cout << ">= menulis file, \'q\' untuk keluar\n";

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan stiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari 'baris ke dalam file
        oufile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    oufile.close();

    //membuat objek input file stream
    ifstream infile;
    //membuka file yang dituliskan
    infile.open("contohfile.txt");

    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open()) 
    {
        //membaca file baris per baris
        while (getline(infile, baris)) 
        {
            //menampilkan setiap baris yang dibaca
            cout << baris << '\n';
        }
        //tutup file tersebut di sini
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilakn ini
    else cout << "unable to open file";
    return 0;
}