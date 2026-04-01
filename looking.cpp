#include <iostream>
using namespace std;

// variable global
int n;
int pilihan;

void inputAngka(){
    cout<<"masukkan bilangan : ";
    cin>>n;
}

int menu(){
    cout<<"===== MENU ====="<<endl;
    cout<<"1. Cek Bilangan Prima"<<endl;
    cout<<"2. Cek Bilangan Fibonacci"<<endl;
    cout<<"0. Keluar"<<endl;
    cout<<"Pilih menu : ";
    cin>>pilihan;

    return pilihan;
}

//fungcion untuk mengecek bilangan prima
bool cekprime(int x){
    int i=2;

    if(x<=1){
        return false;
    }

    while(i<x){
        if(x%i==0){
            return false;
        }
        i++;
    }
    return true;
}
//fungction unuk mengecek bilangan Fibonacci
bool cekFinabocci (int x){
     int a = 0;
    int b = 1;
    int c = 0;

    while (c <= x){
        if(c == x){
            return true;
        }

        a = b;
        b = c;
        c = a + b;

    }

    return false;
}

// prosedur input angka
void inputAngka(){
    cout << "Masukkan bilangan: ";
    cin >> n;
}
