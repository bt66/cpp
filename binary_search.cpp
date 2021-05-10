#include <iostream>
#include <string>
using namespace std;

int main()
{

    int jumlah;
    cout << "Masukan Jumlah Array Yang Di Inginkan : ";
    cin >> jumlah;

    int array[jumlah];
    int temp = 0, awal, akhir, tengah, cari;
    bool ketemu = false;
    //Input Data
    for (int i = 0; i < jumlah; i++)
    {
        cout << "Masukan Data Index Ke " << i << " : ";
        cin >> array[i];
    }
    cout << "\nData sedang DiUrutkan.." << endl;
    for (int i = 0; i < jumlah; i++)
    {
        for (int j = i + 1; j < jumlah; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "\nData Sudah DiUrutkan" << endl;

    for (int i = 0; i < jumlah; i++)
    {
        cout << array[i] << " ";
    }

    cout << "Masukan Data yang dicari : ";
    cin >> cari;

    awal = 0;
    akhir = jumlah - 1;

    while (awal <= akhir)
    {
        tengah = (awal + akhir) / 2;

        if (cari < array[tengah])
        {
            akhir = tengah - 1;
        }
        else if (cari > array[tengah])
        {
            ketemu = true;
        }
        break;
    }
    if (ketemu = true)
    {
        cout << "Nilai yang dicari ada";
    }
    else
    {
        cout << "Nilai yang dicari tifak fitemukan";
    }
    return 0;
}