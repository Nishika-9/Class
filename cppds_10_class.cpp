#include<iostream>
using namespace std;

class Cube
    {
       public:
       double height;
       double length;
       double width;

       public:
       void vol()
       {
        double vol=height*width*length;
        cout<<vol;
       }

       public:
       void fun()
       {
            cout<<"Enter the value of height:";
            cin>>height;

            cout<<"Enter the value of length:";
            cin>>length;

            cout<<"Enter the value of width:";
            cin>>width;
       }
    };

int main()
{
    
    Cube cube1;
       cube1.fun();
       double vol=cube1.height*cube1.width*cube1.length;
       cout<<vol;

    return 0;
}
