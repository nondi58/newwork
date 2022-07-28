#include <iostream>

using namespace std;


int round(float n) {
    if (n - (int)n < 0.5)
        return (int)n;
    return (int)(n + 1);
}


void DDALine(int x0, int y0, int x1, int y1) {

      //calculate dx and dy
      int dx = x1 - x0;
    int dy= y1 - y0;

    int step;

      //if dx > dy we will take step as dx
      //else we will take step as dy to draw the complete line
    if (abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);

      //calculate x-increment and y-increment for each step
    float x_incr = (float)dx / step;
    float y_incr = (float)dy / step;

      //take the initial points as x and y
    float x = x0;
    float y = y0;

    for (int i = 0; i < step; i ++) {
        //putpixel(round(x), round(y), WHITE);
        cout << round(x) << " " << round(y) << "\n";
        x += x_incr;
        y += y_incr;
        //delay(10);
    }
}


int main() {
    
    int x0,y0,x1,y1;
    std::cout<<"Enter the value of x0 and y0 : ";
    std::cin>>x0>>y0;
    std::cout<<"Enter the value of x1 and y1: ";
     std::cin>>x1>>y1;


    DDALine(x0, y0, x1, y1);
    //getch();
    //closegraph();

    return 0;
}
