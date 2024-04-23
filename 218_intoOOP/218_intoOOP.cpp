// 218_intoOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//oop1

#include <iostream>
using namespace std;

class Mahasiswa {
    public: // akses modifier
        string nama;
        int umur;
        string jurusan;

        void output() {
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
        }

};

class Matakuliah{
    private:
        string kodeMK;
        string namaMK;
        int sks;
    public:
        void input() {
            cout << "Kode MK: ";
            cin >>
        }

}




int main()
{
    std::cout << "Hello World!\n";
}

