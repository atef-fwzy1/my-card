#include <iostream>

using namespace std;
int main()
{
    long long m, x;
    cin >> m >> x;
    long long arr[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < x; i++)
        {
            cin >> arr[m][x];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < x; i++)
        {
            cout << arr[m][x] << " ";
        }
        cout << endl;
    }
}
