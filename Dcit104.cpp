#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x,y=2,n,counter=0,sum=0,flag=1;
    //the program ask to input maximum limit
    cout<<"Enter the value to n:";
    cin>>n;
    //store the maximum in the max variable
    while(counter<n){
        for(x=2; x<=y-1; x++){
            if(y%x==0){
                flag=0;
                break;
            
            }
        }

        //when the 'x' is prime then add to sum
        if(flag){
            sum+=y;
            counter++;
        }
        y++;
        flag=1;
    }
    cout<<"sum of first "<<n<<" prime numbers:"<<sum;
    getch();
    return 0;
}