#include <iostream>
using namespace std;
int main()
{
    int age=20;
    bool has_license=true;
    
    if(age>=18){
        if(has_license==true){
            cout<<"You are eligible to drive\n";
        }
        else{
            cout<<"You need a license first to drive";
        }
    }
    else{
        cout<<"You are not elible to drive";
    }
    return 0;
}