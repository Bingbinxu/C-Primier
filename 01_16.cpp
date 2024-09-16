#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i;
    while(cin >> i){
        sum  += i;
        i++;
    }
    cout << "sum of all" << sum;
}