#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define ll long long int
using namespace std;

// Every subsequence with sum k
/*

void PrintS(int i, int arr[], vector<int> &v, int n, int k, int sum)
{
    if (i == n)
    {
        if (sum == k)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    v.push_back(arr[i]);
    sum += arr[i];
    PrintS(i + 1, arr, v, n, k, sum);
    v.pop_back();
    sum -= arr[i];

    PrintS(i + 1, arr, v, n, k, sum);
}
*/

// Any subsequence with sum k
/*
bool flg = false;
void PrintS(int i, int arr[], vector<int> &v, int n, int k, int sum)
{
    if (i == n)
    {
        if (sum == k && flg == false)
        {
            flg = true;
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    v.push_back(arr[i]);
    sum += arr[i];
    PrintS(i + 1, arr, v, n, k, sum);
    v.pop_back();
    sum -= arr[i];

    PrintS(i + 1, arr, v, n, k, sum);
}
*/

// Any subsequence with sum k without using any extra varialble
/*
bool PrintS(int i, int arr[], vector<int> &v, int n, int k, int sum)
{
    if (i == n)
    {
        if (sum == k)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    v.push_back(arr[i]);
    sum += arr[i];
    if (PrintS(i + 1, arr, v, n, k, sum))
    {
        return true;
    }
    v.pop_back();
    sum -= arr[i];

    if (PrintS(i + 1, arr, v, n, k, sum))
    {
        return true;
    }
    return false;
}
*/

// Print no of subsequences with sum k
int PrintS(int i, int arr[], int n, int k, int sum)
{
    if (i == n)
    {
        if (sum == k)
        {
            return 1;
        }
        return 0;
    }

    sum += arr[i];
    int l = PrintS(i + 1, arr, n, k, sum);
    sum -= arr[i];

    int r = PrintS(i + 1, arr, n, k, sum);

    return l + r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << PrintS(0, arr, n, k, 0) << endl;
    return 0;
}