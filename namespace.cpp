#include<iostream>

using namespace std;

 

namespace  car  //  名空间的定义  
{  
     void  ShowLength(double  len)  //  参数类型为d  o  u  b  l  e  
     {  
         cout<<"in  car  namespace:  "<<len<<endl;
     }  
}  
   
namespace plane
{  
    inline void  ShowWholeLength(double  len)  //  参数类型为d  o  u  b  l  e  
     {  
         cout<<"in  whole  namespace:  "<<len<<endl;
     } 
     inline void ShowLength(int len)  //  参数类型为i  n  t  
     {    
         cout<<"in  plane  namespace:  "<<endl;
         car::ShowLength(len);
         ShowWholeLength(len);
     }  
}  


int main(){
    plane::ShowLength(1);
}