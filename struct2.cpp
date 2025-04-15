#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs;

    //mengakses struct mahasiswa
    mhs.nim = "2024014113";
    mhs.nama = "Rizqi";
    mhs.alamat.desa = "Tamantirto";
    mhs.alamat.kota = "DIY";

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat Desa = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat Kota = ";
    cin >> mhs.alamat.kota;

    cout << "NIM = " << mhs.nim << endl;
    cout << "NAMA = " << mhs.nama << endl;
    cout << "ALAMAT DESA = " << mhs.alamat.desa << endl;
    cout << "ALAMAT KOTA = " << mhs.alamat.kota << endl;
}