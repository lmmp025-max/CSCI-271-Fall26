#include <iostream>
using namespace std;
int main()
{
    double a;
    double b;
    cout<<"Enter the value of a & b: ";
    cin>>a>>b;
    
    if (a > 9) {
        cout<<"A is greater than 9\n";
    }
    if (a > b) {
        cout<<"A is greater than B\n";
    }
    if (b < a) {
        cout<<"B is less than A\n";
    }
    else {
        cout<<("nothing");
    }

    return 0;
}