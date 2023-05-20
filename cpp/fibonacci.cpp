#include <iostream>

using namespace std;

int main()
{
    long double n;
    long double n1 = 0, n2 = 1, n3;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (long double i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            n3 = i;
        }
        else
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n3 << endl;
    }

    return 0;
}