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

for (i = 1; i <= n - 1; i++)
{ // Step 1

temp = arr[i]; // Step 2

j = i - 1; //Step 3

while (j >= 0 && arr[j] > temp) // Step 4
{
arr[j + 1] = arr[j]; // Step 4a
j--; // Step 4b
}

arr[j + 1] = temp; // Step 5
}
}

void display()
{
cout << endl; // Output baris kosong
cout << "===================================" << endl;
cout << "Total Pass = " << n - 1 << endl; // count element movement
cout << "==================================="
cout << "Element Array yang telah tersusun" << endl; // output ke layar
cout << "===================================" << endl; // output ke layar

}