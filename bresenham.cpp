#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void bresenham(int x1, int y1, int x2, int y2)
{
   int m_new = 2 * (y2 - y1);
   int slope_error_new = m_new - (x2 - x1);
   for (int x = x1, y = y1; x <= x2; x++)
   {
      cout << "(" << x << "," << y << ")\n";


      slope_error_new += m_new;


      if (slope_error_new >= 0)
      {
         y++;
         slope_error_new  -= 2 * (x2 - x1);
      }
   }
}


int main()
{
      int x1 , y1 , x2 , y2 ;
   std::cout<<"Enter the value of x1 and y1 : ";
    std::cin>>x1>>y1;
   std::cout<<"Enter the value of x2 and y2: ";
    std::cin>>x2>>y2;


  bresenham(x1, y1, x2, y2);
  return 0;
}
