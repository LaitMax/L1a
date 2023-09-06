#include <iostream>

using namespace std;

double x, y;
const int r = 10;

int main()
{
    cout << "\nEnter X value:\n";
    cin >> x;
    cout << "\nEnter Y value:\n";
    cin >> y;
    if ((pow(x, 2) + pow(y, 2) <= pow(r, 2)) && (y <= 0) && (x <= 0) || ((pow(x, 2) + pow(y, 2) <= pow(r, 2)) && (y >= pow(x - 1, 2)) && (x >= 0))) cout << "\nYes.";//Проверка на принадлежность третей четверти круга. Если да, то выводит "Yes". Если нет, то дальше
    else cout << "\nNo.";
    system("pause");
}