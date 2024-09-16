#include<iostream>
using namespace std;
int main(){
    int v1, v2;
    cin >> v1 >> v2;
    if(v2 < v1)
    {
        while(v2 <= v1)
        {
            cout << v1 << " ";
            v1--;
        }
    }
    else{
        while(v1 <= v2)
        {
            cout << v1 << " ";
            v1++;
        }
    }
    cout << endl;
    return 0;
}