#include <iostream>
using namespace std;
int main()
{
    double a;
    cin>>a;
    
    if(a>10 || a<20){
        cout<<"OR condition is true\n";
    } 
    else if(a>10 && a<20){
        cout<<"AND condition is true";
    } 

    return 0;
}