#include <iostream>
using namespace std;
int main()
{
    int x,n,i,c=0,y=0;
    cout<<"\nEnter the value of N : ";
    cin>>n;
    int a[n];    
    N:
    cout<<"\nProgram intiated\n1.Input \""<<n-1<<"\" Elements\n2.Get Missing Element\n3.Exit\nEnter your Option :";
    cin>>x;
    switch(x)
    {
        case 1: 
                y=0;
                cout<<"Enter "<<n-1<<" Elements from \'1 to "<<n<<"\' :";
                for(i=0;i<n-1;i++)
                cin>>a[i];
                c=1;
                for(i=0;i<n-1;i++)
                {
                    if(a[i]<n+1&&a[i]>0) y++;
                }
                cout<<"\nElements-array has been updated, Thank you"; goto N;
        case 2:
                if(c==0) 
                {
                    cout<<"\nFirst enter "<<n-1<<" elements in Element-array using option 1."; goto N;
                }
                else if(y!=n-1)
                {
                    cout<<"\n"<<n-1<<" Elements in Element-array have been not inserted correctly within \"1 to "<<n<<"\" (Select option 1 again)";
                    goto N;
                }
                cout<<"\nAn Element missing from Element-array = ";
                for(i=0;i<n;i++)
                {
                    if(a[i]!=i+1) { cout<<i+1; goto N;}
                } 
        case 3:
                cout<<"\nProgram Terminated !!";
                c=0;
                exit(0);
        default :
                  cout<<"\nERROR : Invalid choice !! (Select option from 1-3)";
                  goto N;
    }

    return 0;
}

