#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran, wajib diisi data
int nilai[]={1,2,3};
//deklrasi array dengan ukuran, diisi data awal
int skor[4]={12,24,48,64};
//deklarasi array dengan ukuran, tanpa nilai awal
string nama[3];

int main(){
    //menampilkan isi array pada index tertentu
    cout << "Tampilkan Skor Ke-3 = " << skor[2] << endl;
    //mengisi array pada index tertentu
    skor[2] = 100;
    //menampilkan isi array pada index tertentu
    cout << "Tampilkan Skor Ke-3 = " << skor[2] << endl;
    
    //mengisi array dengan looping for
    for(int n = 0; n < 3; n++){
        cout << "Mahasiswa Ke- = " << n+1 << endl;
        cout << "Nama Mahasiswa = ";
        cin >> nama[n];
    }
    cout << endl;
    //menampilkan isi array
    for (int n = 0; n < 3; n++){
        cout << "Mahasiswa Ke- " << nama[n];
        cout << "Nama Mahasiswa = " << nama[n] << endl;
    }
}