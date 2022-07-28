#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,y,x1,y1,dx,dy,dx2,dy2,pi,r,n;
    int res;

    cout<<"\nEnter the value of x1 and y1 : \n";
    //cin>>x1>>y1;
    x = 0;
    y = 0;
    //cout<< x << y;
    r = 10;
    pi = 1 - r;
    //cout<<pi<< "\n";

    x = 0;
    y = r;
    n=0;


   while(x != y){
    if(pi>=0){

        x += 1;
        y -= 1;
        pi = pi + 2 * x + 1 - 2*y;
        cout<< "P("<< x <<","<< y<< ")\n";
        //cout<< pi << "pi\n";
        //n += 1;
        //if(n==2){
        //    break;
        //}

    }
    else if(pi<0){

        x += 1;
        y = y;
        pi = pi + 2 * x + 1;
        cout<< "P("<< x <<","<< y<< ")\n";
        //cout<< pi << "pi\n";

    }
   }
    return 0;
}
