#include<iostream>
using namespace std;

int main(){


    string line1, line2;
    char h = 'y';
    cout << "please input the first word" << endl;
    while(cin >> line1)
    {
        if(!line2.size() )
        {
            line2 += line1;
        }
        else{
            line2 = line2 + " "+ line1;
        }
        cout << "continue or not " << endl;
        cin >> h;
        if(h == 'y' or h == 'Y')
        {
            cout << "please input the next word" << endl;
        }
        else{
            break;
        }
    }
    cout << line2 << endl;
    return 0;

}