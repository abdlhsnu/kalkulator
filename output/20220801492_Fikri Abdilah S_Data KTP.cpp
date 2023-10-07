#include <iostream>
 
using namespace std;
 
//Deklarasi struct
struct data_kependudukan
{
    long int nik;
    char nama[100];
    char alamat[100];
};
 
//Deklarasi object diluar  struct 
data_kependudukan kependudukan1, kependudukan2; //kependudukan1 dan kependudukan 2 adalah nama object
 
int main()
{    
    //Input struct data kependudukan
    cout<<" Data Kependudukan Pertama\n";
    cout<<"-----------------------\n";
    cout<<" NIK      : "; cin>>kependudukan1.nik;
    cout<<" Nama     : "; cin>>kependudukan1.nama; //fflush(stdin); gets(kependudukan1.nama);
    cout<<" Alamat   : "; cin>>kependudukan1.alamat;//fflush(stdin); gets(kependudukan1.alamat);
    cout<<"\n\n";
    cout<<" Data Kependudukan Kedua\n";
    cout<<"-----------------------\n";
    cout<<" NIK      : "; cin>>kependudukan2.nik;
    cout<<" Nama     : "; cin>>kependudukan2.nama; //fflush(stdin); gets(kependudukan1.nama);
    cout<<" Alamat   : "; cin>>kependudukan2.alamat;//fflush(stdin); gets(kependudukan1.fakultas);
    cout<<"\n\n";
 
    //output struct data kependudukan
    cout<<" output struct data kependudukan \n";
    
    cout<<" Data Kependudukan Pertama\n";
    cout<<"-----------------------\n";
    cout<<" NIK      : "<<kependudukan1.nik<<endl;
    cout<<" Nama     : "<<kependudukan1.nama<<endl;
    cout<<" Alamat   : "<<kependudukan1.alamat<<endl;
    cout<<"\n\n";
    cout<<" Data Mahasiswa Kedua\n";
    cout<<"----------------------\n";
    cout<<" NIK      : "<<kependudukan2.nik<<endl;
    cout<<" Nama     : "<<kependudukan2.nama<<endl;
    cout<<" Alamat   : "<<kependudukan2.alamat<<endl;
    cout<<"\n\n";
    
    cin.get();
    return 0;
}