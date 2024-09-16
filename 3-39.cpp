#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#define  N 1

using namespace std;
int main(){
    if(N){
            string str1, str2;
    cin >> str1;
    cin.clear();
    cin >> str2;
    if(str1 < str2)
    cout << "str1 < str2" <<endl;
    else if(str1 > str2)
    cout <<"str1 > str2"<<endl;
    else
    cout  << "str1 = str2"<< endl;
    }

    if(N){
    char str3[50], str4[50];
    cin >> str1;
    cin.clear();
    cin >> str2;
    if(str1 < str2)
    cout << "str1 < str2" <<endl;
    else if(str1 > str2)
    cout <<"str1 > str2"<<endl;
    else
    cout  << "str1 = str2"<< endl;
    }


    
}