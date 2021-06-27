#include <iostream>
#include <cstdlib>
#define MAX 5 // jumlah data array

using namespace std;

struct queue
{
    int data[MAX];
    int awal, akhir;
} antrean;
// init -> mendeklarasikan awal dan akhir
void init()
{
    antrean.awal = -1;
    antrean.akhir = -1;
}
bool full()
{
    if (antrean.akhir == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool empty()
{
    if (antrean.akhir == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// cetak data
void tampilData()
{
    int i;
    if (!empty())
    {
        for (i = antrean.awal; i < antrean.akhir; i++)
        {
            cout << antrean.data[i] << " | ";
        }
    }
    cout << "\n";
}
// fungsi inqueue memasukkan data ke antrean
void inQueue()
{
    tampilData();
    int elemen;
    if (!full())
    {
        cout << "Masukkan data : ";
        cin >> elemen;
        cout << "Data telah berhasil di masukkan \n";
        antrean.data[antrean.akhir] = elemen;
        antrean.akhir++;
    }
    else
    {
        cout << "Data sudah penuh \n";
    }
    getchar();
}
// fungsi dequeue --> mengeluarkan isi data
void deQueue()
{
    int i;
    tampilData();

    if (!empty())
    {
        cout << "\nMengambil Data \" " << antrean.data[antrean.awal];
        for (i = antrean.awal; i < antrean.akhir; i++)
        {
            antrean.data[i] = antrean.data[i + 1];
        }
    }
    else
    {
        cout << "Data kosong";
    }
    getchar();
}
// clear hapus semua data

void clear()
{
    antrean.awal = -1;
    antrean.akhir = -1;
}
int main()
{
    int pilihan, elemen;
    init();
    cout << "ini program antrian queue" << endl;
    do
    {
        tampilData();
        cout << "Menu utama";
        cout << "[1] init \n [2] \n inQueue \n [3] deQueue \n [4] Clear \n";
        cout << "Masukkan pilihan anda";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            init();
            break;
        case 2:
            inQueue();
            break;
        case 3:
            deQueue();
            break;
        case 4:
            clear();
            break;
        }
    } while (pilihan != 0);
    return 0;
}