#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //TASK 5

    //task а)
    int p;
    cin >> p;
    bool istrue = (p % 4 == 0 || p % 7 == 0) ? true : false ;
    cout << boolalpha<<istrue<<endl;

    //task б)
    double a,b,c,D;
    cout << "Enter values for a, b & c: ";
    cin >> a >> b >> c;
    if(a == 0){
        cout << "a can NOT be 0";
        return 0; 
    }
    D = (b*b) - 4 * a * c;
    bool istrue = ( D < 0) ? true : false;
    cout << boolalpha << istrue << endl;
    
    //task в)
    int a,b;
    cin >> a >> b;
    bool istrue = (sqrt((a-0)*(a-0)+(b-1)*(b-1))<=5) ? true : false ;
    cout << boolalpha << istrue << endl;
    
    //task г)
    int a,b,c,d,f;
    cout << "Coordinates for your point (a,b): "; 
    cin >> a >> b;
    cout << endl << "Cordinates for the centre of the circle (c,d): ";
    cin >> c >> d;
    cout << endl << "Radius (f): ";
    cin >> f;
    cout << endl;
    bool istrue = (sqrt((a-c)*(a-c)+(b-d)*(b-d))<=f) ? true : false ;
    cout << boolalpha << istrue <<endl;

    //task д)
    int a,b;
    cin >> a >> b;
    bool istrue = (sqrt((a*a)+(b*b))<=5 && a <= 0 && b <= 0) ? true : false;
    cout << boolalpha << istrue << endl;
    
    //task е) 
    int a,b;
    cin >> a >> b;
    bool istrue = (sqrt((a*a)+(b*b))>5 && sqrt((a*a)+(b*b)) < 10 ) ? true : false ;
    cout << boolalpha << istrue << endl;
    
    //task ж)
    int x;
    cin >> x;
    bool istrue = ( x <= 1 && x >=0) ? true : false ;
    
    //task з)
    int x,a,b,c,max;
    bool istrue;
    cout << "Values for a,b,c: ";
    cin >> a >> b >> c;
    cout << endl << "Value for x: ";
    cin >> x;
    cout << endl;
    max = a;
    if( max < b){
        max = b;
    }
    if( max < c){
        max = c;
    }
    cout << "Max: " << max << endl;
    istrue = (x == max) ? true : false;
    cout << boolalpha << istrue << endl;

    //task и)
    int x,a,b,c,max;
    bool istrue;
    cout << "Values for a,b,c: ";
    cin >> a >> b >> c;
    cout << endl << "Value for x: ";
    cin >> x;
    cout << endl;
    max = a;
    if( max < b){
        max = b;
    }
    if( max < c){
        max = c;
    }
    cout << "Max: " << max << endl;
    istrue = (x == max) ? false : true;
    cout << boolalpha << istrue << endl;

    //task к)
    bool x,y,istrue;
    cin >> x >> y;
    istrue = (x == true || y == true) ? true : false;
    cout << boolalpha << istrue << endl;

    //task л)
    bool x,y,istrue;
    cin >> x >> y;
    istrue = (x == true && y == true) ? true : false;
    cout << boolalpha << istrue << endl;

    //task м)
    int a,b,c;
    cin >> a >> b >> c;
    bool istrue = ( a <= 0 && b <= 0 && c <= 0) ? true : false;
    cout << boolalpha << istrue << endl;

    //task н)
    int p;
    cout << "Enter a 3-digit number: ";
    cin >> p;
    cout << endl;
    bool istrue = ((p / 100) == 7 || (p % 10) == 7 || ((p / 10 ) % 10 ) ==7) ? true : false;
    cout << boolalpha << istrue << endl;

    //task o)
    int m;
    cout << "Enter a 3-digit number: ";
    cin >> m;
    cout << endl;
    bool istrue = ((m / 100) == (m % 10) || ((m / 10 ) % 10 ) == (m % 10) || (m / 100) == ((m / 10 ) % 10 ) ) ? false : true;
    cout << boolalpha << istrue << endl;

    //task п)
    int m;
    cout << "Enter a 3-digit number: ";
    cin >> m;
    cout << endl;
    bool istrue = ((m / 100) == (m % 10) || ((m / 10 ) % 10 ) == (m % 10) || (m / 100) == ((m / 10 ) % 10 ) ) ? true : false;
    cout << boolalpha << istrue << endl;

    return 0;
}