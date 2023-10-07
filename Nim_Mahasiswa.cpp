#include <iostream>
 
using namespace std;
 
//Deklarasi struct
struct data_mahasiswa
{
    long int nim;
    char nama[100];
    char fakultas[100];
};
 
//Deklarasi object diluar  struct 
data_mahasiswa mahasiswa1, mahasiswa2; //Mahasiswa1 dan mahasiswa 2 adalah nama object
 
int main()
{    
    //Input struct data mahasiswa
    cout<<" Data Mahasiswa Pertama\n";
    cout<<"-----------------------\n";
    cout<<" NIM      : "; cin>>mahasiswa1.nim;
    cout<<" Nama     : "; cin>>mahasiswa1.nama; //fflush(stdin); gets(mahasiswa1.nama);
    cout<<" Fakultas : "; cin>>mahasiswa1.fakultas;//fflush(stdin); gets(mahasiswa1.fakultas);
    cout<<"\n\n";
    cout<<" Data Mahasiswa Kedua\n";
    cout<<"-----------------------\n";
    cout<<" NIM      : "; cin>>mahasiswa2.nim;
    cout<<" Nama     : "; cin>>mahasiswa2.nama; //fflush(stdin); gets(mahasiswa1.nama);
    cout<<" Fakultas : "; cin>>mahasiswa2.fakultas;//fflush(stdin); gets(mahasiswa1.fakultas);
    cout<<"\n\n";
 
    //output struct data mahasiswa
    cout<<" output struct data mahasiswa\n";
    
    cout<<" Data Mahasiswa Pertama\n";
    cout<<"-----------------------\n";
    cout<<" NIM      : "<<mahasiswa1.nim<<endl;
    cout<<" Nama     : "<<mahasiswa1.nama<<endl;
    cout<<" Fakultas : "<<mahasiswa1.fakultas<<endl;
    cout<<"\n\n";
    cout<<" Data Mahasiswa Kedua\n";
    cout<<"----------------------\n";
    cout<<" NIM      : "<<mahasiswa2.nim<<endl;
    cout<<" Nama     : "<<mahasiswa2.nama<<endl;
    cout<<" Fakultas : "<<mahasiswa2.fakultas<<endl;
    cout<<"\n\n";
    
    cin.get();
    return 0;
}