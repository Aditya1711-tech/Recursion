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

void printF(int i, vector<int> &v, int arr[], int n)
{
    if (i == n)
    {
        for (auto it : v)
        {
            cout << it << " ";
        }
        if (v.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // Take or pick element with perticular index into sequence
    v.push_back(arr[i]);
    printF(i + 1, v, arr, n);
    // Popping because want to execute condition of not piking element with pericular index
    v.pop_back();

    // Not take or not pick element with perticular index into sequence
    printF(i + 1, v, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> v;
    printF(0, v, arr, n);
    return 0;
}