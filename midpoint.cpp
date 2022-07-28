#include<iostream>
using namespace std;


void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = r, y = 0;

    
    
    cout << "(" << x + x_centre << ", " << y + y_centre << ") ";

    
    if (r > 0)
    {
        cout << "(" << x + x_centre << ", " << -y + y_centre << ") ";
        cout << "(" << y + x_centre << ", " << x + y_centre << ") ";
        cout << "(" << -y + x_centre << ", " << x + y_centre << ")\n";
    }

    // Initialising the value of P
    int P = 1 - r;
    while (x > y)
    {
        y++;

        // Mid-point is inside or on the perimeter
        if (P <= 0)
            P = P + 2*y + 1;
        // Mid-point is outside the perimeter
        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }

        // All the perimeter points have already been printed
        if (x < y)
            break;

        
        
        cout << "(" << x + x_centre << ", " << y + y_centre << ") ";
        cout << "(" << -x + x_centre << ", " << y + y_centre << ") ";
        cout << "(" << x + x_centre << ", " << -y + y_centre << ") ";
        cout << "(" << -x + x_centre << ", " << -y + y_centre << ")\n";

        
        if (x != y)
        {
            cout << "(" << y + x_centre << ", " << x + y_centre << ") ";
            cout << "(" << -y + x_centre << ", " << x + y_centre << ") ";
            cout << "(" << y + x_centre << ", " << -x + y_centre << ") ";
            cout << "(" << -y + x_centre << ", " << -x + y_centre << ")\n";
        }
    }
}


int main()
{
    int x,y,r;
    
    std::cout<<"Enter the value of x1 and y1 : ";
std::cin>>x;
std::cout<<"Enter the value of x2 and y2: ";
std::cin>>y;
std::cout<<"Enter the value of x2 and y2: ";
std::cin>>r;
    midPointCircleDraw(x, y, r);
    return 0;
}
