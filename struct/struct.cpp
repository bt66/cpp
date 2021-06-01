#include <iostream>
using namespace std;
// cara 1 mendeklarasikan struct
struct mahasiswa
{
    int nim;
    string nama;
    string jurusan;
} test123, test456;

int nim;
int main()
{
    struct mahasiswa angkatan20;
    cout << "masukkan data" << endl;
    cout << "NIM : ";
    cin >> angkatan20.nim;
    cout << "jurusan : ";
    cin >> angkatan20.jurusan;
    cout << "nama : ";
    cin >> angkatan20.nama;

    cout << "isi" << endl;
    cout << "Nim : " << angkatan20.nim;
    cout << "jurusan : " << angkatan20.jurusan;
    cout << "nama : " << angkatan20.nama;
}