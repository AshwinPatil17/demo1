#include <iostream>
using namespace std;
class MyDate
{
    int dd,mm,yy;

    public:

    void setDate(int,int,int,);
    void display();
    void setDay(int);
    int  getyear();
};
    void MyDate :: setDate(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void MyDate :: display()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
    void MyDate :: setDay(intd)
    {
        dd=d;
        int MyDate::getyear()
    }
    {
        return yy;
    }
        int main()
        {
            MyDate d1;
            d1.setDate(20,3,24);
            d1.display();
            d1.setDay(19);
            d1.display();

            cout<<"year is" <<d1.getyear();
        }   
