#include <iostream>
using namespace std;

int ain() 
{
    try {
        cout << "selamat belajar di prodi TI UMY" << endl;
        throw 3.5; //melemparkan sebuah integer maka
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << a << " : pengecualian akan dieksekusi" << endl;

    }
    catch (...) {
        /*jika selain integer maka blok ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }

    return 0;
}