#include <iostream>
using namespace std;

double rad, area;
int main()
{
rad = 5;
cout<<"Enter radius = "<<rad;

area = 3.14 * rad * rad;

cout<<"The area of the circle with radius "<<rad<<" is = "<<area<<endl;

if(area == 78.5){
    cout<<"*****Test Successfull*****";
}
else{
    cout<<"*****Test Failed******";
}

    return 0;
}
