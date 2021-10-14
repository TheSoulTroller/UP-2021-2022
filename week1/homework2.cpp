#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float tempFh, tempC, tempK;
    int choice;
    cout<<"Insert tempreature in Fh: ";
    cin>> tempFh;
    tempC = ((tempFh - 32) * 5) /9 ;
    tempK = tempC + 273.15;
    cout<<"Choose conversion to C(1) or K(2)"<<endl;
    cout<< "Choice: ";
    cin>>choice;
    if (choice == 1) {
        cout<< "tempC = "<< tempC<<endl;
    } else if(choice == 2)
    {
       cout<< "tempK = "<< tempK<<endl;
    } else 
    {
        cout<<" Wrong number! "<<endl;
    }
   
    return 0;
}