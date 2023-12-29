
// Overloaded insertion and extraction operators
#include <iostream>
#include "Mystring.h"
using namespace std;

int main() {
    cout<<boolalpha<<endl;
    Mystring a{"frank"};
    Mystring b{"frank"};
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;

    b="george";
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;

    Mystring s1{"FRANK"};
    s1=-s1;
    cout<<s1<<endl;
    s1=s1+"*****";
    cout<<s1<<endl;
    s1+="------";
    cout<<s1<<endl;
    Mystring s2{"12345"};
    s1=s2*3;
    cout<<s1<<endl;
    Mystring s3{"abcdef"};
    s3*=4;
    cout<<s3<<endl; // error
    Mystring repeat_string;
    int repeat_times;
    cout<<"Enter a string to repeat"<<endl;
    cin>>repeat_string;
    cout<<"How many times to repeat"<<endl;
    cin>>repeat_times;
    repeat_string*=repeat_times;
    cout<<"Resulting string:"<<repeat_string<<endl;
    repeat_string="RepeatMe";
    cout<<(repeat_string+repeat_string+repeat_string)<<endl;
    repeat_string+=repeat_string*3;
    cout<<repeat_string<<endl;
    repeat_string="RepeatMe";
    repeat_string+=(repeat_string+repeat_string+repeat_string);
    cout<<repeat_string<<endl;
    Mystring s{"Frank"};
    ++s;
    cout<<s<<endl;
    s=-s;
    cout<<s<<endl;
    Mystring result;
    result=++s;
    cout<<s<<endl;
    cout<<result<<endl;
    s="Frank";
    s++;
    cout<<s<<endl;
    s=-s;
    cout<<s<<endl;
    result=s++;
    cout<<s<<endl;
    cout<<result<<endl;
    return 0;
}

