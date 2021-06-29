#include <iostream>

using namespace std;
// kapasitas gudang
#define KAPASITAS 200

struct barang
{
    string namaBarang[KAPASITAS];
    int id[KAPASITAS];
    int awal, akhir;
} antrean;

int main()
{
    int jumlahBarang;
    string temp;
    cout << "Aplikasi Gudang" << endl;
    antrean.awal = 0;
    antrean.akhir = 0;
    cout << "masukkan jumlah barang : ";
    cin >> jumlahBarang;
    // input data
    for (int i = 0; i < jumlahBarang; i++)
    {
        if (antrean.akhir < jumlahBarang + antrean.akhir)
        {
            cout << "masukkan barang ke " << antrean.akhir << endl;
            cin >> temp;
            cout << "data masuk" << endl;
            antrean.namaBarang[antrean.akhir] = temp;
            antrean.id[antrean.akhir] = antrean.akhir;

            antrean.akhir++;
        }
    }

    cout << "masukkan berapa data lagi : ";
    cin >> jumlahBarang;
    for (int i = 0; i < jumlahBarang; i++)
    {
        if (antrean.akhir < jumlahBarang + antrean.akhir)
        {
            cout << "masukkan barang ke " << antrean.akhir << endl;
            cin >> temp;
            cout << "data masuk" << endl;
            antrean.namaBarang[antrean.akhir] = temp;
            antrean.id[antrean.akhir] = antrean.akhir;

            antrean.akhir++;
        }
    }
    // cetak data
    cout << "antrean.akhir" << antrean.akhir << endl;

    for (int i = antrean.awal; i < antrean.akhir; i++)
    {
        cout << "barang dengan id ke" << antrean.id[i] << " = " << antrean.namaBarang[i] << endl;
    }

    int keluar;
    // keluar gudang
    cout << "keluar berapa barang? ";
    cin >> keluar;

    for (int i = 0; i < antrean.akhir; i++)
    {
        antrean.id[i] = antrean.id[i + 1];
        antrean.namaBarang[i] = antrean.namaBarang[i + 1];
    }

    cout << "antrean.akhir" << antrean.akhir << endl;

    for (int i = antrean.awal; i < antrean.akhir; i++)
    {
        cout << "barang dengan id ke" << antrean.id[i] << " = " << antrean.namaBarang[i] << endl;
    }
}

// menginisialisasi queue
// void inisialisasi()
// {
//     antrean.awal = -1;
//     antrean.akhir = -1;
// }

// bool penuh()
// {
//     if (antrean.akhir == KAPASITAS - 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// bool kosong()
// {
//     if (antrean.akhir == -1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// // input data
// void inputBarang(int jumlahBarang)
// {
//     string temp;
//     for (int i = antrean.akhir; i < (antrean.akhir + jumlahBarang); i++)
//     {
//         cout << "silahkan masukkan nama barang : ";
//         cin >> temp;
//         cout << "data masuk " << endl;
//         antrean.namaBarang[antrean.akhir] = temp;
//         antrean.id[antrean.akhir] = antrean.akhir;
//     }

//     // if (!penuh)
//     // {
//     //     antrean.akhir++;
//     //     cout << "Silahkan masukkan nama barang : ";
//     //     cin >> temp;
//     //     cout << "Data masuk" << endl;
//     //     antrean.namaBarang[antrean.akhir] = temp;
//     //     antrean.id[antrean.akhir] = antrean.akhir;
//     // }
//     // else
//     // {
//     //     cout << "Gudang sudah penuh" << endl;
//     // }
//     // getchar();
// }

// // print barang
// void periksaBarang()
// {
//     for (int i = antrean.awal; i < antrean.akhir; i++)
//     {
//         cout << "id barang : ";
//         cout << antrean.id[i] << endl;
//         cout << "Nama Barang :";
//         cout << antrean.namaBarang[i] << " " << endl;
//     }
// }

// void keluarGudang()
// {
//     int i;

//     if (!kosong())
//     {
//         for (int i = 0; i < antrean.akhir; i++)
//         {
//             antrean.id[i] = antrean.id[i + 1];
//         }
//     }
//     else
//     {
//         cout << "Gudang masih kosong";
//     }
//     getchar();
// }

// void bersihkanGudangDariBarang()
// {
//     antrean.awal = -1;
//     antrean.akhir = -1;
// }
