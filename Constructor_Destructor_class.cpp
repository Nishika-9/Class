#include<iostream>
using namespace std;

class Cube
    {
       private:
       double height;
       double length;
       double width;

       public:   //CAN ACCESS ANYWHERE 
       Cube()
       {
        cout<<"Enter height:";
        cin>>height;

        cout<<"Enter width:";                       //CONSTRUCTOR
        cin>>width;

        cout<<"Enter length:";
        cin>>length;
       }

      ~Cube()
      {
        cout<<"Destructor";                        //DESTRUCTOR
      }

       public:
       double vol()
       {
        double vol=height*width*length;
        cout<<vol;

        return vol;
       }

       void setheight()
       {
            cout<<"Enter updated height:";
            cin>>height;
       }
    };

int main()
{
    Cube cube1;

    cube1.vol();

    cout<<endl;
     
    cube1.setheight();
    cube1.vol();

    cout<<endl;
    
    return 0;
}

