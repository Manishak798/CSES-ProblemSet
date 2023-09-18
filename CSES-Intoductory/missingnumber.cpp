#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum = 0, total = 0;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    // sum of total n numbers - missing number
    total = (((n) * (n + 1)) / 2) - sum;
    cout << total;
    return 0;
}