#include <iostream>
using namespace std;

using namespace std;
//wadah
struct TNode
{
    int data;
    TNode *next;
};
//deklarasi head sama tail
TNode *head, *tail;

//untuk membuat wadah pertama
void init()
{
    head = NULL;
    tail = NULL;
}
//fungsi mengecek kekosongan
int isEmpty()
{
    if (tail == NULL)
        return 1;
    else
        return 0;
}
//fungsi input data
void insertDepan(int databaru)
{
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
    cout << "Data masuk\n";
}

void insertTengah(int databaru, int posisi)
{
    TNode *baru;
    TNode *temp;
    baru = new TNode;
    baru->data = databaru;
    temp = head;
    int nomor = 1;
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        while (nomor < posisi - 1)
        {
            temp = temp->next;
            nomor++;
        }
        baru->next = temp->next;
        temp->next = baru;
    }
    cout << "Data masuk\n";
}

void insertBelakang(int databaru)
{
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = NULL;
        tail->next = baru;
        tail = baru;
    }
    cout << "Data masuk\n";
}

void hapusDepan()
{

    TNode *hapus;
    int d;
    if (isEmpty() == 0)
    {
        if (head != tail)
        {
            hapus = head;
            d = hapus->data;
            head = head->next;
            delete hapus;
        }
        else
        {
            d = tail->data;
            head = tail = NULL;
        }
        cout << d << "terhapus";
    }
    else
        cout << "Masih kosong\n";
}

void hapusTengah(int posisi)
{
    int nomor = 1;
    TNode *temp;
    TNode *hapus;
    TNode *sebelum;
    temp = head;
    while (nomor <= posisi)
    {
        if (nomor == posisi - 1)
        {
            sebelum = temp;
        }
        if (nomor == posisi)
        {
            hapus = temp;
        }
        temp = temp->next;
        nomor++;
    }
    sebelum->next = temp;
    delete hapus;
}

void hapusBelakang()
{
    TNode *hapus;
    TNode *temp;
    int d;
    hapus = tail;
    temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    tail = temp;
    tail->next = NULL;
    delete hapus;
}

void tampil()
{
    TNode *bantu;
    bantu = head;
    if (isEmpty() == 0)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
    }
    else
        cout << "Masih kosong\n";
}
//hapus data

//fungsi clear
void clear()
{
    TNode *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = NULL;
    printf("clear");
}

int main()
{
    int inputAngka;
    int posisi;
    int pilihan;

    do
    {
        system("clear");
        cout << endl;
        cout << "=====================================" << endl;
        cout << "\t 🅃 🅄 🄶 🄰 🅂   🄻 🄸 🄽 🄺 🄴 🄳 🄻 🄸 🅂 🅃" << endl;
        cout << "=====================================" << endl;
        cout << "Silahkan pilih menu di bawah ini : " << endl;
        cout << "\t 1. Insert depan" << endl;
        cout << "\t 2. Insert tengah" << endl;
        cout << "\t 3. Insert belakang" << endl;
        cout << "\t 4. Tampil" << endl;
        cout << "\t 5. hapus depan" << endl;
        cout << "\t 6. hapus tengah" << endl;
        cout << "\t 7. hapus belakang" << endl;
        cout << "\t 8. hapus semua" << endl;
        cout << "\t 9. exit" << endl;
        cout << endl;
        cout << "Masukkan pilihan anda : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            system("clear");
            cout << "Masukkan Data : ";
            cin >> inputAngka;
            insertDepan(inputAngka);
            break;
        case 2:
            system("clear");
            cout << "Ke node berapa : ";
            cin >> posisi;
            cout << "Masukkan Data : ";
            cin >> inputAngka;
            insertTengah(inputAngka, posisi);
            break;
        case 3:
            system("clear");
            cout << "Masukkan Data : ";
            cin >> inputAngka;
            insertBelakang(inputAngka);
            break;
        case 4:
            system("clear");
            tampil();
            break;
        case 5:
            system("clear");
            hapusDepan();
            break;
        case 6:
            system("clear");
            cout << "Hapus node ke berapa : ";
            cin >> posisi;
            hapusTengah(posisi);
            break;
        case 7:
            system("clear");
            hapusBelakang();
            break;
        case 8:
            system("clear");
            clear();
            break;

        default:
            break;
        }
    } while (pilihan != 9);

    init();
    insertDepan(10);
    tampil();
    cout << endl;

    insertDepan(30);
    tampil();
    cout << endl;

    insertBelakang(40);
    tampil();
    cout << endl;

    insertTengah(20, 2);
    tampil();
    cout << endl;

    insertTengah(30, 3);
    tampil();
    cout << endl;
    // ubahDepan(5);
    // tampil();
    // cout << endl;

    // ubahBelakang(35);
    // tampil();
    // cout << endl;

    hapusDepan();
    cout << endl;
    tampil();
    cout << endl;

    hapusTengah(2);
    tampil();
    cout << endl;

    hapusBelakang();
    cout << endl;
    tampil();
    cout << endl;

    clear();
    tampil();
    cout << endl;
}