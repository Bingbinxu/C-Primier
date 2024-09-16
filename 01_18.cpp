#include<iostream>
using namespace std;
int main(){
    int curval = 0, val = 0;
    if(cin >> curval)
    {
        int cnt = 1;
        while (cin >> val)
        {
            if(val == curval)
            {
                cnt++;
            }
            else{
                cout << curval << "occurs" << cnt << "times" << endl;
                curval =val;
                cnt = 1;
            }
        }
        cout << curval << "occurs" << cnt << "times" << endl;
        return 0;
    }

}