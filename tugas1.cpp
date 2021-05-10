#include <iostream>
using namespace std;

int main()
{
    int a, j;
    cout << "program searching menggunakan sequential search" << endl;
    cout << "\nmasukkan jumlah huruf yang ingin di cari : ";
    cin >> a;
    string cari, x;
    string data[a];
    int index[a];

    for (int i = 0; i < a; i++)
    {
        cout << "masukkan huruf ke [" << i + 1 << "] = ";
        cin >> data[i];
    }
    cout << "\nData anda : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "huruf ke [" << i + 1 << "] = " << data[i] << endl;
    }
    // cari data

    cout << "data yang akan di cari : ";
    cin >> cari;
    cout << "data yang di cari : " << cari;
    j = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
        if (data[i] == cari)
        {
            index[j] = i;
            j++;
        }
    }

    if (j > 0)
    {
        cout << "data yang di cari adalah : " << cari << endl;
        cout << "data tersebut terdapat pada index array ke : ";
        for (int i = 0; i < j; i++)
        {
            cout << index[i] << endl;
        }
    }
    else
    {
        cout << "data tidak di temukan " << endl;
    }
}