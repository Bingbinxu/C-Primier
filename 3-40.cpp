#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[] = "happy";
    char str2[] = "good!";
    char result[strlen(str1)+strlen(str2)-1];
    strcpy(result,str1);
    strcat(result,str2);
    cout << "the first string is" << str1 <<endl;
    cout  << "the second string is" << str2 << endl;
    cout << "the final string is"<< result << endl;
    return 0;

}