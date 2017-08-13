#include<iostream>
using namespace std;

int TOH(int disc,int source,int destination)
{
    static int counter=0;
    if(disc==1)
    {
        cout<<source<<" --> "<<destination<<endl;
        counter++;
    }
    else
    {
        TOH(disc-1,source,1+2+3-source-destination);
        cout<<source<<" --> "<<destination<<endl;
        counter++;
        TOH(disc-1,1+2+3-source-destination,destination);
    }
    return counter;
}

int main()
{
    int disc,source,destination;
    cout<<"Enter number of discs: ";   cin>>disc;
    cout<<"Enter Source: ";   cin>>source;
    cout<<"Enter Destination: ";   cin>>destination;
    cout<<"Total Moves: "<<TOH(disc,source,destination)<<endl;
}
