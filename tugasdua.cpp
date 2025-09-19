#include <iostream>
using namespace std;

int main(){
    string diskon;
    int a, totalBarang;
    int totalHarga, pembayaran, kembalian, harga, diskon;

    cout<<"Selamat datang di kasir"<<endl;
    cout<<"Masukan total barang : ";
    cin>>totalBarang;

    for(a = 0; a < totalBarang; a++){
        cout<<"Harga barang ke-"<<(a+1)<<" : ";
        cin>>harga;
        totalHarga += harga;
    }

    cout<<"==============================\n";

    cout<<"Diskon[y/n] : ";
    cin>>diskon;

    if(diskon == "y") {
        totalHarga *= 0.9;
        cout<<"Total harga (+diskon) : $"<<totalHarga<<endl;
    } else {
        cout<<"Total harga belanja : $"<<totalHarga<<endl;
    }

    cout<<"Masukkan jumlah uang pembayaran : $";
    cin>> pembayaran;

    if(diskon == "y"){
        kembalian = pembayaran - totalHarga;
        cout<<"Kembalian = $"<<kembalian<<endl;
    } else {
        kembalian = pembayaran - totalHarga;
        cout<<"Kembalian = $"<<kembalian<<endl;
    }

    cout<<"Terima kasih sudah berbelanja"<<endl;

    return 0;
}