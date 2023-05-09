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

int printF(int i, vector<int> &v, int arr[], int n,int sum)
{
    if (i == n || i == n+1)
    {
        return sum;
    }
    // Take or pick element with perticular index into sequence
    v.push_back(arr[i]);
    int l = printF(i + 2, v, arr, n,sum+arr[i]);
    // Popping because want to execute condition of not piking element with pericular index
    v.pop_back();

    // Not take or not pick element with perticular index into sequence
    int r = printF(i + 1, v, arr, n,sum);

    return max(l,r);
}

int main()
{
    int arr[] = {3, 1, 2, 4};
    int n = 4;
    vector<int> v;
    int ans = printF(0, v, arr, n,0);
    cout << "Max sum is: "<<ans<<endl;
    return 0;
}