#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    do
    {
        int y = 3 * x * x + 4 * x + 1;
        cout << "y = " << y << " dla x = " << x << endl;
        x++;
    }
    while (x <= 20);
}