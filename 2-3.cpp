#include<iostream>
using namespace std;
int global_int;
std::string global_string;
int main(){
    unsigned u=10, u2=42;
    std::cout <<    u2 - u <<  std::endl;
    std::cout<<  u - u2 << std::endl;
    int u1=10, u3=42;
    std::cout <<    u1 - u3 <<  std::endl;
    std::cout<<  u3 - u1 << std::endl;
    cout << 'a'<<" "<<L'a'<<" "<<"a"<<" "<<L"a" << endl;
    cout<<10<<" "<<10u<<" "<<10L<<" "<<10uL<<" "<<012<<" "<<0xC<<endl;
    cout <<3.14<<" "<<3.14f<<" "<<3.14L<<endl;
    cout<<10.<<" "<<10e-2<<endl;

    cout << sizeof('a')<<" "<<sizeof(L'a')<<" "<<sizeof("a")<<" "<<sizeof(L"a") << endl;
    cout<<sizeof(10)<<" "<<sizeof(10u)<<" "<<sizeof(10L)<<" "<<sizeof(10uL)<<" "<<sizeof(012)<<" "<<sizeof(0xC)<<endl;
    cout <<sizeof(3.14)<<" "<<sizeof(3.14f)<<" "<<sizeof(3.14L)<<endl;
    cout<<sizeof(10.)<<" "<<sizeof(10e-2)<<endl;   
    
    int month = 9, day=7;
    int months= 011, days = 07;
    cout << month << day;
    cout<< months<<days<<endl; 

    cout<<"Who go with F\145igure?\012";
    cout<<1024.f<<endl;
    cout<<"2\x4d\012";
    cout<<"2\tM\n";
    double wage,salary;
    wage = (salary =999.9);
    cout << wage << salary<<endl;

    string local_string;
    int local_int,a;
    cout<<global_int<<endl;
    cout<<local_int<<a<<endl;
    cout<<global_string<<endl;
    cout<<local_string<<endl;

    int _=2;
    cout << _<<endl;

    int i =2;
    int &j=i;
    cout << &i<<"\012"<<&j<<"\012";
    cout<<local_string<<endl;

    int k=10;
    int *p = &i;
    cout << p << " " <<*p << endl;
    p = &k;
    cout << p << " " <<*p << endl;
    *p = 20;
    cout << p << " " <<*p << endl;
    j = 30;
    cout << p << " " <<*p << endl;
    double q = 3.14;
    double *r = &q;

    cout<< typeid(p).name()<<endl;
    cout<< typeid(r).name()<<endl;

    r = nullptr;
    *p = 0;
    if(p)
    cout << "you" <<endl;
    if(*p)
    cout << "are" <<endl;
    if(r)
    cout << "none" << endl;

    void *s = &j;
    cout<< typeid(s).name()<<endl;

    int *t =NULL;
     cout<< typeid(t).name()<<endl;
     cout << t <<endl;
     cout << *t <<endl;


    return 0;

}

