#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    //membuat object struct mahasiswa
    mahasiswa mhs;

    //mengakses struct mahasiswa
    mhs.nim = "2024014113";
    mhs.nama = "Rizqi";
    mhs.alamat = "Tamantirto";

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat = ";
    cin >> mhs.alamat;

    cout << "NIM = " << mhs.nim << endl;
    cout << "NAMA = " << mhs.nama << endl;
    cout << "ALAMAT =" << mhs.alamat << endl;
}