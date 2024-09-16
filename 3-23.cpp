#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){


    vector<int> vin;
    string i;
    srand((unsigned)time(NULL));
    char h = 'y';
    cout << "please input the first word" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        vin.push_back(rand()% 1000);
    }
    
  
    auto beg = vin.begin();
    auto end = vin.end();
    for (auto d = beg; d !=beg+(end-beg)/2; d++)
    {
        
            cout << *d << "     " ;
            if((d-beg+1) % 5 ==0)
            cout << endl;

    } 
    
    

    return 0;

}