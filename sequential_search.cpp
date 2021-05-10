#include <iostream>
using namespace std;

int main()
{
    int data[5] = {5, 7, 3, 4, 2};
    int caridata;
    for (int i = 0; i < 5; i++)
    {
        cout << "data ke -" << i + 1 << " = " << data[i] << endl;
    }
    cout << "masukkan angka yang ingin di cari : ";
    cin >> caridata;

    for (int i = 0; i < 5; i++)
    {
        if (caridata == data[i])
        {
            cout << "ditemukan pada index ke : " << i;
        }
    }
}
