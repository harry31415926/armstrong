#include<iostream>
#include<cstdlib>
using namespace std;

int compute(int n)
{
    int sum = 0, sum1 = 0;
    for (int i = 1; i < n; i++)
    {
        string str = to_string(i);
        for (int j = 0; j < str.size(); j++)
            sum += pow(str[j] - '0', str.size());
        if (sum == i)
        {
            cout << sum << endl;
            sum1 += sum;
        }
        sum = 0;
    }
    return sum1;
}

int main()
{
    int n;
    cin >> n;
    cout << compute(n) << endl;
    return 0;
}