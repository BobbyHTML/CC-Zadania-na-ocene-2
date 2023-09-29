#include <iostream>
using namespace std;
int main() {
    int suma = 0;
    int liczba;
    
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba;
        suma += liczba;
    }
    
    while (suma < 200);
    cout << "Suma jest rowna 200 lub wiecej" << endl;
}
