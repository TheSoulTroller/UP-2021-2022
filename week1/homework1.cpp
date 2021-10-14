#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, a, minA;
    cout<<"n: ";
    cin >> n;
    cout<<"m: ";
    cin >> m ;
    cout<<"a: ";
    cin>> a;

    minA = ceil((double)n/a) * ceil((double)m/a);
    cout<< "Min Number Of Tiles: "<<minA<<endl;
    
    return 0;
}