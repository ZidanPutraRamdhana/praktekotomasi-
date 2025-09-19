#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;   // hanya bisa satu huruf
    int NIM;
    string alasan;

    cout << "Masukan nama anda = ";
    getline(cin,nama);

    cout << "Masukan NIM anda = ";
    cin >> NIM;

    cout << "Masukan alasan anda memilih pilihan ini = ";
    cin >> alasan;

    cout << "\nData yang dimasukkan:\n";
    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << NIM << endl;
    cout << "Alasan : " << alasan << endl;

    return 0;
}
