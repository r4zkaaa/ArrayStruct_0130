#include <iostream>
#include <string>
using namespace std;

struct Orang 
{
    string nama;
    string alamat;
    int umur;
};

struct alamat
{
    string desa;
    string kota;
};

int main ()
{ 
    //deklarasi variabel struct
    Orang mhs;
    //mengisi data
    cout << "Isikan data nama : ";
    getline(cin, mhs.nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Isikan data kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data Tampil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}