#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
using namespace std;

int nilai[10];
int indeks;
char pilihan;

void findNilai(int array2[], int n){
int y;
for (int i=0;i <= 9;i++)
{
if(array2[i] == n){
cout <<"\n Nilai " << n << "ada di index ke " << i<<endl;
y = 1;
}
}
if (y == 0){
cout << "\n Nilai tidak ditemukan"<<endl;
}
}
void confirm()
{

tanya:
cout << "\n Tekan Y untuk melanjutkan: ";
cin >> pilihan;

if(pilihan == 'Y' || pilihan == 'y'){
}

else

{
cout << "input salah" << endl;
goto tanya;
}

}
void masukan(){

// mengisi array dari keyboard
for (indeks = 0 ; indeks < 10 ; indeks++ )
{
cout << " masukkan data ke " << indeks + 1 << " = " ;
cin >> nilai [indeks];
}
}
void mkFile(){
//menyimpan nilai
ofstream file;
file.open ("tugas.txt");
for (int i=0; i<=9;i++)
{
file << nilai[i] << " ";
}
cout << "\n Data telah di simpan di tugas.txt" <<endl;
file.close();
}
void readNilai(){
//membaca nilai
ifstream fileku;
char k;
fileku.open("tugas.txt");
for(int i=0;i<9;i++)
{
fileku >> k;
}
cout <<"\n Data telah di baca"<<endl;
fileku.close();
}
void readFile()

{
for (indeks = 0 ; indeks < 5 ; indeks++ )
{
cout << nilai [indeks] << " ";
}
cout << endl;
}
void urutMenaik(int array[],int n){
int i, j, tmp,imin;

for (i=0; i <=n-1;i++)
{
imin = i;
for (j=i+1; j<=n;j++)
{
if(array[j]>array[imin])
imin=j;
}
tmp=array[imin];
array[imin]=array[i];
array[i]=tmp;
}
}
void tampilMenaik()

{
int i;
int n=9;
urutMenaik(nilai,n);
for (i=0; i<=n; i++)
cout<<nilai[i]<<" ";
cout <<" \n data yang sudah di urutkan" << endl;
cout << endl;
}
int main(void){

char pilih;
int n2;
menu:
cout << "Ashil Ramadhan "<<endl;
cout << "\n================================"<<endl;
cout << " MENU PILIHAN "<< endl;
cout << "================================"<<endl;
cout << "1. Memasukan Data "<<endl;
cout << "2. Menyimpan Data Kedalam Arsip "<<endl;
cout << "3. Membaca Data Dari Arsip "<<endl;
cout << "4. Menampilkan Data Asal "<<endl;
cout << "5. Mengurutkan Data Secara Menaik "<<endl;
cout << "6. Menampilkan Data Yang telah diurut "<<endl;
cout << "7. EXIT"<<endl;
cout << "================================"<<endl;
cout << "Masukkan Nomor Pilihan (1 - 7) : "; cin>>pilih;

switch ( pilih)
{
case '1':
masukan();
confirm();
system ("cls");
goto menu;
break;
case '2':
mkFile();
confirm();
system ("cls");
goto menu;
break;
case '3':
readNilai();
confirm();
system ("cls");
goto menu;
break;
case '4':
readFile();
confirm();
system ("cls");
goto menu;
break;
case '5':
urutMenaik(nilai, 0);
cout <<"\n data telah di urutkan"<<endl;
confirm();
system ("cls");
goto menu;
break;
case '6':
tampilMenaik();
confirm();
system ("cls");
goto menu;
break;
case '7':
cout << "\n Anda Telah Keluar Dari Program " <<endl;
cout << " TERIMA KASIH " <<endl;
exit(1);
break;
}
return 0;
}

