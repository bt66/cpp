#include <iostream>
using namespace std;

int binarySearch(string arr[], int l, int banyakArray, string cari)
{
	if (banyakArray >= l) {
		int mid = l + (banyakArray - l) / 2;
		if (arr[mid] == cari){
			return mid;
        }
		else if (arr[mid] > cari){
			return binarySearch(arr, l, mid - 1, cari);
        }
        else {
		    return binarySearch(arr, mid + 1, banyakArray, cari);
        }
	}
	return -1;
}


int main()
{
    int a, j;
    cout << "program searching menggunakan sequential search" << endl;
    cout << "\nmasukkan jumlah huruf yang ingin di cari : ";
    cin >> a;
    string cari, x;
    string data[a];
    int index[a], pilihan;
    // sorting
    string temp;
    for (int i = 0; i < a; i++)
    {
        cout << "masukkan huruf ke [" << i + 1 << "] = ";
        cin >> data[i];
    }
    cout << "\nData anda : " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "huruf ke [" << i + 1 << "] = " << data[i] << endl;
    }
    //pilih  metode searching 

    cout << "data yang akan di cari : ";
    cin >> cari;
    cout << "data yang di cari : " << cari;

    cout << "Pilih metode Searching : " << endl;
    cout << "1. Binary Search" << endl;
    cout << "2. Sequential Search" << endl;
    cout << "pilihan anda ? ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "1. Binary Search" << endl;

            j = 0;
            for (int i = 0; i < 5; i++)
            {
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

        break;
    case 2:
        cout << "Sequential Search" << endl;
        // sorting array
        for (int i = 1; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                while (data[i] < data[j])
                {
                    temp = data[j];
                    data[j] = data[i];
                    data[i] = temp;
                }
            }
        }

        cout << "catek data setelah sorting :" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "data ke " << i << " adalah : " << data[i] << endl;
        }

        // searching array
        int hasil = binarySearch(data, 0, a - 1, cari);
        if (hasil == -1){
            cout << "Data yang di cari tidak ada di dalam array";
        }
        else {
            cout << "Data di temukan pada index array ke : " << hasil;
        }
        break;
    }
}