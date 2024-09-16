#include <iostream>
using namespace std;
int main(){
    int a = 3, b =4;
    decltype(a)c = a;
    decltype((a)) d = a;
    decltype(a = b) f = a;
    ++c;
    ++d;
    ++f;
    cout << a << "\012" << b<< "\012"  << c<< "\012"  << d << "\012" << f  << endl;
}