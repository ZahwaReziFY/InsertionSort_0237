#include <iostream>
using namespace std;

int arr[20]; // Membuat array dengan panjang data 20
int n; // Membuat variable inputan n

void input()
{ // Procedure Input
while (true)
{
cout << "Masukan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // Membuat kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "=====================" << endl; // Membuat tampilan susunan data element array
cout << "Masukan Element Array" << endl;
cout << "=====================" << endl;

for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpat data pada array
{
cout << "Data ke-" << (i + 1) << ": "; //Memasukan atau menginputkan nilai data n
cin >> arr[i]; //Menyimpan nilai data n kedalam array arr
}
}

void insertionSort()
{ //Procedure Insertionsort

int temp; //Membuat variable data temporer atau penyimpanan sementara
int j, i; //Membuat variable j sebagai penanda
}