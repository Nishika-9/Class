#include<iostream>
using namespace std;

class calendar
{
    public:
    int dd;
    int mm;
    int yyyy;
    int yy;

    public:
    int fun()
    {
        cout<<"Enter date:";
        cin>>dd;

        cout<<"Enter month:";
        cin>>mm;

        cout<<"Enter year:";
        cin>>yyyy;

        return 0;
    }

    public:
    void result()
    {
        if((yyyy%4==0)&&(yyyy%100!=0)||(yyyy%400==0))
        {
            cout<<"It is a leap year";
        }
        else
        {
            cout<<"It is not a leap year";
        }
    }
};

int main()
{
    calendar leap_year;
    leap_year.fun();
    leap_year.result();

    return 0;
}
