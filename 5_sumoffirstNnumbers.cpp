#include<iostream>
#include<vector>
#include<string>
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

// Parameterized

// void sumOfn(int i,int sum){
//     if(i<1){
//         cout << sum << endl;
//         return;
//     }
//     sumOfn(i-1,sum+i);
// }

// Functional

int sumOfn(int n){
    if(n == 0){
        return 0;
    }
    return (n+sumOfn(n-1));
}

int main()
{
    int sum1 = 0;
    int n;
    cout << "Enter value of n: ";
    cin>>n;
    // sumOfn(n,0);
    cout << sumOfn(n) <<endl;
    return 0;
}