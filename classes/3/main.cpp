#include "Pair.h"
Pair& operator+(int n, Pair& pair)
{
    return pair + n;
}
Pair& operator+(double n, Pair& pair)
{
    return pair + n;
}
int main()
{
    setlocale(LC_ALL, ".1251");
    Pair pair1;
    Pair pair2(12, 12.5);
    cout << "�����: " << endl;
    cout << pair1 << endl;
    cout << pair2 << endl;
    cout << "����������: " << endl;
    cin >> pair1;
    cin >> pair2;
    cout << "�����: " << endl;
    cout << pair1 << endl;
    cout << pair2 << endl;
    cout << "���������: " << endl;
    cout << pair2 - pair1 << endl;
    cout << "�����������: pair1 = pair2" << endl;
    pair1 = pair2;
    cout << pair1 << endl;
    cout << "3 + pair1 + 3: " << endl;
    cout << 3 + pair1 + 3 << endl;
    cout << "4.5 + pair1 + 4.5: " << endl;
    cout << 4.5 + pair1 + 4.5 << endl;
    cout << "��������� ���������� / �����������: " << endl;
    cout << ++pair1 << endl;
    cout << pair1++ << endl;
    cout << pair1 << endl;
}