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
using namespace std;

// void func(int arr[], int l, int r)
// {
//     if (l >= r)
//     {
//         return;
//     }
//     // swap(arr[l],arr[r]);
//     int temp = arr[l];
//     arr[l] = arr[r];
//     arr[r] = temp;
//     func(arr, l + 1, r - 1);
// }

// Single parameter

void func(int arr[], int i, int m)
{
    if (i >= m / 2)
    {
        return;
    }
    // swap(arr[l],arr[r]);
    int temp = arr[i];
    arr[i] = arr[m - i - 1];
    arr[m - i - 1] = temp;
    func(arr, i + 1, m);
}

int main()
{
    int arr[] = {1, 3, 5, 7};
    int m = sizeof(arr) / sizeof(arr[1]);
    // cout << n;
    // func(arr, 0, m - 1);
    func(arr, 0, m);
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}