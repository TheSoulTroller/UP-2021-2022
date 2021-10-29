#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //task 1
    bool isbeercold, israkiacold, isice ;
    cout << "Is there beer in the fridge: ";
    cin >> isbeercold;
    cout << endl << "Is there rakia in the fridge: ";
    cin >> israkiacold;
    cout << endl << "Is there ice in the fridge: ";
    cin >> isice;
    if( isbeercold == true || ( israkiacold == 1 && isice == 1)){
        cout<<"Tishko will drink at home!"<<endl;
    }else{
        cout<<"Tishko has to go to the store for cold beer!"<<endl;
    }

    //task 2
    int n, sum = 0;
    cout<<"Lenght of the line: ";
    cin>>n;
    for(int i = 1; i <= n;i++){
        sum += i;
    }
    cout<<"Distance walked: " << sum * 2 <<endl;

    return 0;
}