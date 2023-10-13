#include <iostream>

using namespace std;

int main(void)
{
    int a[25];
    int x;
    for (int i = 0; i < 25; i++) {
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < 24; i++) {
        for (int j = 1; j < 25; j++) {
            if (a[j - 1] > a[j]) {
                x = a[j - 1];
                a[j - 1] = a[j];
                a[j] = x;
            } 
        }
    }
    cout << "Ready array:" << '\n';
    for (int i = 0; i < 25; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
