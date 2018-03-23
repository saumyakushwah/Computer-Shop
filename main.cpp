#include <iostream>
using namespace std;

/*
    COMPUTER SHOP

    (class)Customer:
        cname;
        cid;
        address;
        time;
        charges;

    (function)add:
        Takes input of a new customer, and add it.

    (function)update:
        Take input of an ID then update it.

    (function)delete:
        Take input of an ID then delete it.

    (function)display:
        Show all the customer's details in this format:
        -----------------------------------------------
        Cust Id      Cust name      something      else
        -----------------------------------------------
        1            Name1          something      hey
        -----------------------------------------------
*/
class customer
{
public:
        string name;
        string id;
        string address;
        int time;
        float charges;
        void add() {

        }
};
int main()
{       customer c[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter customer name: ";
        cin>>c[i].name;
        cout<<"Enter customer id: ";
        cin>>c[i].id;
        cout<<"Enter address: ";
        cin>>c[i].address;
        cout<<"Enter time of purchase: ";
        cin>>c[i].time;
        cout<<"Enter charges: ";
        cin>>c[i].charges;
    }
    for(int i=0;i<2;i++)
    {
        cout<<"Customer named "<<c[i].name<<" having id "<<c[i].id<<" lives @ "<<c[i].address<<" have purchased at "<<c[i].time<<" and have to pay "<<c[i].charges;
    }
    return 0;
}
