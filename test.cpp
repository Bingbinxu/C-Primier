#include <iostream>
#include <vector>
 
#include <string>
 
using namespace std;
int main(){
    vector<string> msg {"Hello", "C++", "Hello", "VS Code", "yes"};
    for (const string& item : msg){
        cout << item << endl;
    }
    cout << endl;
    return 0;
}