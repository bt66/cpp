#include <string>
#include <iostream>
using namespace std;

struct car
{
    string name;
    int year;
};

int main()
{
    int noOfCars;
    cout << "enter no_ of cars : ";
    cin >> noOfCars;
    car *cars = new car[noOfCars];
    for (int i = 0; i < noOfCars; i++)
    {
        cin.clear();

        cout << "Car #" << i << endl;
        cout << "Name : ";
        // getline(cin, (cars[i].name)); //here is the problem
        getline(cin, cars[i].name);

        cin.ignore(1000, '\n');

        cout << "\n year : ";
        cin >> cars[i].year;
        cout << endl;
    }
    for (int i = 0; i < noOfCars; i++)
    {
        cout << "Name : " << cars[i].name << endl;
        cout << "year : " << cars[i].year << endl;
    }

    return 0;
}

// getline(cin,(cars[i].name));
// getline(cin,(cars[i].name));