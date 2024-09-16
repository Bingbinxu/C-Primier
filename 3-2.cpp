#include<iostream>
using namespace std;

int main(){
    // string line;
    // while (cin >> line)
    // {
    //     cout << line << endl;
    // }
    
    // while(getline(cin, line))
    // {
    //     cout << line << endl;
    // }
    // return 0;
    string line1, line2;
    char h;
    cin >> h;
    if(h == '1'){
        cin  >> line1 >> line2;
        auto len1 = line1.size();
        auto len2 = line2.size();
        cout << line1<<line2<<len1<<len2<< endl;

    } 
    cin.clear();
    cin.sync();
    if(h == '2'){
        cout << "please input"<<endl;
        getline(cin, line2);
        cout << line2 << endl;
    }
}