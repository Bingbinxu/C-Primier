#include<iostream>
#include<string>
#include<vector>
#include<string.h>

using namespace std;
string sa(10,'c');
int a[10]{10,2};
char b[10] = "abcd";
int main(){
    string sa1[10];
    int a1[10];
    cout << sa<<endl;
    for(auto c :sa)
    {
        cout << c << "  ";
    }
    cout  << endl;
    for(auto c :a)
    {
        cout << c << "  ";
    }
    cout  << endl;
    for(auto c :sa1)
    {
        cout << c << "  ";
    }
    cout  << endl;
    for(auto c :a1)
    {
        cout << c << "  ";
    }
    cout  << endl;
    cout << "sizeof"<<sizeof(sa)/sizeof(sa[0])<<endl;
    cout << "sizeof"<<sizeof(a[0])<<endl;
    cout << "size"<<sa.size()<<endl;
    cout << "strlen"<<strlen(b)<<endl;
    int  *p = begin(a);
    while(p != end(a))
    {
      //  *p = 5;
        p++;
    }
    for (auto  c :a)
    {
        cout<<c<<endl;

    }
    


}