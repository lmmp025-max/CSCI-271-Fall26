#include <iostream>
using namespace std;

int main()
{
    double cel;
    double far;
    cout<<"Enter Celsius value: ";
    cin>>cel;
    
    cout<<"Enter Far value: ";
    cin>>far;
    
    double cel_to_far;
    cel_to_far=(far - 32) * 5/9;
    
    double far_to_cel;
    far_to_cel=(cel * 5/9) + 32;
    
    cout << "The Celsius value: " << cel_to_far <<endl;
    cout << "The Farenheight value: " << far_to_cel <<endl;

    return 0;
}