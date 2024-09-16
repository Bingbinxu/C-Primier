#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<string> vin;
    string i;
    char h = 'y';
    cout << "please input the first word" << endl;
    while(cin >> i)
    {
        vin.push_back(i);
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
    for(auto &c : vin)
    {
        for (auto d = c.begin(); d !=c. end() ;d++)
            *d = toupper(*d);
        cout << c <<endl;
    }
    

    return 0;

}