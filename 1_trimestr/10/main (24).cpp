#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int i, j, n, m, k;
    int a[100][100], K[100];
    setlocale(LC_ALL, "Russian");

    cout << "Ââåäèòå êîëè÷åñòâî ñòðîê:";
    cin >> n;
    cout << "Ââåäèòå êîëè÷åñòâî ñòîëáöîâ:";
    cin >> m;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 100;

    cout << "Ìàòðèöà:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << "\t" << a[i][j] << " ";
        cout << endl;
    }

    cout << "Ââåäèòå íîìåð ñòîëáöà, êîòîðûé íåîáõîäèìî âñòàâèòü:"; cin >> k;
    if (k > m + 1) cout << "Íåêîððåêòíîå çíà÷åíèå k";
    else {
        cout << "Ââåäèòå ýëåìåíòû ñòîëáöà:" << endl;
        for (i = 0; i < n; i++) {
            cin >> K[i];
        }

        cout << "Íîâàÿ ìàòðèöà:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == k - 1) {
                    cout << "\t" << K[j] << " ";
                }
                else cout << "\t" << a[j][i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}