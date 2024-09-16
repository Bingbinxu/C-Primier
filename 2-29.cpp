#include<iostream>
using namespace std;
int main(){
    int i = 2, * const cp = &i;
    int * p1, *const p2 = &i;
    const int ic =1, &r = ic;
    const int * const p3 = &ic;
    const int *p;
    p = &ic;
    p  = &i;
    i = ic;

    cout <<  i << &i << endl;
    cout  << *cp << cp << &cp <<endl;
    cout  << *p1 << p1 << endl;
    cout  << ic << &ic << endl;
    cout  << r << &r << endl;
    cout << *p3 << p3 <<endl;
    cout << *p << p << endl;


 

}