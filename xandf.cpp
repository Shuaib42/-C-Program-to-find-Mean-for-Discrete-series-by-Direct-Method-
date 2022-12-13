#include <iostream>

using namespace std;
int main()
{
    int x[100];
    int f[100];
    int i, j, k, n, m, sigmafx = 0, sigmaf = 0;
    float mean;
    cout << "Enter the number of Values of X:" << endl;
    cin >> n;
    cout << "Enter the number of Values of F:" << endl;
    cin >> m;
    cout << "Enter the Data of X:" << endl;
    for (i = 0; i < n; i++)
        cin >> x[i];
    cout << "Enter the Data of F:" << endl;
    for (j = 0; j < m; j++)
        cin >> f[j];
    int mult[n];
    cout << "The given Data of X is " << endl;
    for (i = 0; i < n; i++)
    {
        cout << x[i] << endl;
    }
    cout << "The given Data of F is " << endl;
    for (j = 0; j < m; j++)
    {
        cout << f[j] << endl;
    }
    for (i = 0; i < n; i++)
    {
        mult[i] = x[i] * f[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " * " << f[i] << " = " << mult[i] << endl;
    }
    for (i = 0; i < n; i++)
    {
        sigmafx += mult[i];
    }
    for (i = 0; i < n; i++)
    {
        sigmaf += f[i];
    }

    mean = sigmafx / sigmaf;

    cout << "The Mean of given Data is = " << mean << endl;

    return 0;
}