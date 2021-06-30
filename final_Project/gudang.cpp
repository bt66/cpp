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

void init()
{
    antrean.awal = 0;
    antrean.akhir = 0;
}
void inputData(int jumlahBarang)
{
    string temp;
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
}
void periksaBarang()
{
    for (int i = antrean.awal; i < antrean.akhir; i++)
    {
        cout << "barang dengan id ke" << antrean.id[i] << " = " << antrean.namaBarang[i] << endl;
    }
}

void barangKeluar()
{
    for (int i = 0; i < antrean.akhir; i++)
    {
        antrean.id[i] = antrean.id[i + 1];
        antrean.namaBarang[i] = antrean.namaBarang[i + 1];
    }
}

// sorting berdasarkan nama barang menggunakan bubble sort
void sortNama()
{
    string temp1;
    int temp2;
    for (int i = antrean.awal; i < antrean.akhir; i++)
    {
        for (int j = i + 1; j < antrean.akhir; j++)
        {
            if (antrean.namaBarang[j] < antrean.namaBarang[i])
            {
                // untuk namaBarang
                temp1 = antrean.namaBarang[i];
                antrean.namaBarang[i] = antrean.namaBarang[j];
                antrean.namaBarang[j] = temp1;

                // untuk id Barang
                temp2 = antrean.id[i];
                antrean.id[i] = antrean.id[j];
                antrean.id[j] = temp2;
            }
        }
    }
}

void sortID()
{
    string temp1;
    int temp2;
    for (int i = antrean.awal; i < antrean.akhir; i++)
    {
        for (int j = i + 1; j < antrean.akhir; j++)
        {
            if (antrean.id[j] < antrean.id[i])
            {
                // untuk namaBarang
                temp1 = antrean.namaBarang[i];
                antrean.namaBarang[i] = antrean.namaBarang[j];
                antrean.namaBarang[j] = temp1;

                // untuk id Barang
                temp2 = antrean.id[i];
                antrean.id[i] = antrean.id[j];
                antrean.id[j] = temp2;
            }
        }
    }
}
void cariBarang(string cari)
{
    int searchNama[KAPASITAS];
    int j;
    j = 0;
    for (int i = antrean.awal; i < antrean.akhir; i++)
    {
        if (antrean.namaBarang[i] == cari)
        {
            searchNama[j] = 1;
            j++;
        }
    }
    if (j > 0)
    {
        cout << "data yang di cari adalah : " << cari << endl;
        cout << "data tersebut terdapat pada index array ke : ";
        for (int i = 0; i < j; i++)
        {
            cout << searchNama[i] << endl;
        }
    }
    else
    {
        cout << "data tidak di temukan " << endl;
    }
}

void hapusSemuaData()
{
    antrean.akhir = 0;
}

int main()
{
    int jumlahBarang;
    string temp1;
    int temp2;
    int menu;
    string cariNamaBarang;

    init();
    /*
    cout << "===============Aplikasi Gudang=============" << endl;

    // input data
    inputData(jumlahBarang);
    periksaBarang();
    cout << "antrean.akhir" << antrean.akhir << endl;
    //hapus data
    // print data
    periksaBarang();

    // bubble sort
    sortNama();

    periksaBarang();

    sortID();
    periksaBarang();

    // search by name

    cariBarang(cariNamaBarang);

    // reset

    periksaBarang();
    inputData(jumlahBarang);
    periksaBarang();
    */
    do
    {
        cout << "===============Aplikasi Gudang=============" << endl;
        cout << "Silahkan pilih : " << endl;
        cout << "\t 1. Input Data " << endl;
        cout << "\t 2. Lihat data" << endl;
        cout << "\t 3. Keluarkan dari gudang" << endl;
        cout << "\t 4. Urutkan Data berdasarkan ID" << endl;
        cout << "\t 5. Urutkan Data berdasarkan Nama Barang" << endl;
        cout << "\t 6. Cari Data" << endl;
        cout << "\t 7. Bersihkan Gudang dari barang" << endl;
        cout << "\t 8. keluar \n"
             << endl;
        cout << "Masukkan pilihan :";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "masukkan jumlah barang : ";
            cin >> jumlahBarang;
            inputData(jumlahBarang);
            break;
        case 2:
            periksaBarang();
            break;
        case 3:
            barangKeluar();
            break;
        case 4:
            sortID();
            break;
        case 5:
            sortNama();
            break;
        case 6:
            cout << "masukkan nama barang yang ingin di cari : ";
            cin >> cariNamaBarang;
            cariBarang(cariNamaBarang);
            break;
        case 7:
            cout << "menghapus data ..." << endl;
            hapusSemuaData();
            cout << "data sudah di hapus" << endl;
            break;

        default:
            cout << "masukkan angka sesuai di menu" << endl;
            break;
        }
    } while (menu != 8);
}
