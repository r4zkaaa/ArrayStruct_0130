#include <iostream>
using namespace std;    

int main ()
{
    //Deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //deklrasi array tanpa inisialisasi
    int datamu[5];

    //cara akses (membaca atau mengambil isi array)
    cout << "Isi data kedua : " << dataku[1] << endl;
     //mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : " << dataku[1] << endl;    

    //Mengisi data dengan perintah satu persatu
    cout << "Isikan data pertama : ";
     cin >> datamu [0];
    cout << "Isikan data kedua : ";
     cin >> datamu [1];
    cout << "Isikan data ketiga : ";
     cin >> datamu [2];
    cout << "Isikan data keempat : ";
      cin >> datamu [3];
    cout << "Isikan data kelima : ";
    cin >> datamu [4];
    cout << endl;

     //menampilkan data dengan perintah satu persatu
    cout << "Data pertama = " << datamu [0] << endl;
    cout << "Data kedua = " << datamu [1] << endl;
    cout << "Data Ketiga = " << datamu [2] << endl;
    cout << "Data Keempat = " << datamu [3] << endl;
    cout << "Data kelima = " << datamu [4] << endl; 
    cout << endl;

     cout << "Input Array Menggunakan For" << endl;
    //mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i+1) << " :";
        cin >> datamu [i];
    }
    cout<< endl;

      cout << "Tampil data array menggunakan for" << endl;
       //menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << (i+1) << " : " << datamu [i] << endl;
    }

    
}