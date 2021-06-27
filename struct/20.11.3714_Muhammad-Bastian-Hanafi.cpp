#include <iostream>
#include <cstdlib>
using namespace std;

struct worker
{
    string Nama;
    int tanggalLahir;
};

int main()
{
    int banyakData;
    cout << "Masukkan banyak data : ";
    cin >> banyakData;
    // struct of array
    struct worker worker2021[banyakData];
    // perulangan input data
    for (int i = 0; i < banyakData; i++)
    {
        cout << "\t ======= Masukkan data ke [" << i + 1 << "] =======" << endl;
        cout << "Masukkan nama :";
        cin.ignore();
        getline(cin, worker2021[i].Nama);
        cout << "Masukkan tanggal lahir :";
        cin >> worker2021[i].tanggalLahir;
    }
    // perulangan cetak data
    for (int i = 0; i < banyakData; i++)
    {
        cout << "\n ======= data ke [" << i + 1 << "] =======" << endl;
        cout << "Nama : " << worker2021[i].Nama << endl;
        cout << "Tanggal lahir : " << worker2021[i].tanggalLahir << "\n"
             << endl;
    }
}