#include <iostream>
#define MAX 100
using namespace std;
int n,a[MAX];
int main()
{
    cout << "Unesite broj brojeva" << "\n";
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        sum += a[i];
    cout << "Zbir je: " << sum;
    return 0;
}
