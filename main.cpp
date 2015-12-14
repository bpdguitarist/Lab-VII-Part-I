//
//  Lab VII Part I
//
//  Created by Edgar Esparza on 6/29/15.
//

#include <iostream>
using namespace std;

int swap(int&, int&);

int main()
{
    int x, y;
    cout<<"Please enter the value for x: ";
    cin>>x;
    
    cout<<"Please enter the value for y: ";
    cin>>y;
    
    cout<<"Before: x="<<x<<". y="<<y<<endl;
    swap(x,y);
    
    cout<<"After: x="<<x<<". y="<<y<<endl;
    
    return 0;
}

int swap(int&x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
    
}