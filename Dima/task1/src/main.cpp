#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int x;
    cout << "Введите, пожалуйста целое число: ";
    cin >> x;
    switch(x)
    {
        case 1:
            cout << "Январь" << "\n";
            break;
        case 2:
            cout << "Февраль" << "\n";
            break;
        case 3:
            cout << "Март" << "\n";
            break;
        case 4:
            cout << "Апрель" << "\n";
            break;
        case 5:
            cout << "Май" << "\n";
            break;
        case 6:
            cout << "Июнь" << "\n";
            break;
        case 7:
            cout << "Июль" << "\n";
            break;
        case 8:
            cout << "Август" << "\n";
            break;
        case 9:
            cout << "Сентябрь" << "\n";
            break;
        case 10:
            cout << "Октябрь" << "\n";
            break;
        case 11:
            cout << "Ноябрь" << "\n";
            break;
        case 12:
            cout << "Декабрь" << "\n";
            break;
        default:
            cout << "Нет месяца с таким номером" << "\n";
            break;
    }
}
