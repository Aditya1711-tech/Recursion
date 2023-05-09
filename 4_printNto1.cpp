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

// Backtrack: Base case will be execute first

// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     print(i+1,n);
//     cout << i << endl;
// }


void print(int i,int n){
    if(i<1){
        return;
    }
    cout << i <<endl;
    print(i-1,n);
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin>>n;
    // print(1,n);
    print(n,n);
    return 0;
}