#include <iostream>
#include <chrono>
#include "Functions.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    string input;
    int k;

    cout << "Введите строку: ";
    cin >> input;
    cout << "Введите кратность: ";
    cin >> k;

    bool check = isKPeriodic(input, k);
    if (check)
    {
        cout << "Строка кратна " << k << endl;
    }
    else
    {
        cout << "Строка не кратна " << k << endl;
    }

    return 0;
}