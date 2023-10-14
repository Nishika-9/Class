#include<iostream>
using namespace std;

class validity
{
    public:
    int dd;
    int mm;
    int yy;
    int yyyy;

    public:
    void date()
    {
        cout<<"Enter date in the format(DD/MM/YYYY):";
        cin>>dd,mm,yyyy;
    }
    public:
    void check()
    {
        if((mm<=1)||(mm>=12))
        {
            if(((dd>=1)&&(dd<=31))&&((mm==1)||(mm==3)||(mm==5)||(mm==8)||(mm==10)||(mm==12)))
            {
                cout<<"Date is valid";
            }
            else if(((dd>=1)&&(dd<=30))&&((mm==4)||(mm==6)||(mm==7)||(mm==9)||(mm==11)))
                {
                    cout<<"Date is valid";
                }
            else if(((dd>=1)&&(dd<=29))&&(mm==2))
            {
                cout<<"Date is valid";
            }
            else if(((dd>=1)&&(dd<=28))&&(mm==2)&&(yyyy%4==0)&&(yyyy%100!=0)||(yyyy%400==0))
                {
                    cout<<"Date is valid";
                }
            else
            {
                cout<<"Date is invalid";
            }
        }
        else
        {
            cout<<"Date is invalid";
        }

    }
};

int main()
{
    validity verify;
    verify.date();
    verify.check();

    return 0;
}
