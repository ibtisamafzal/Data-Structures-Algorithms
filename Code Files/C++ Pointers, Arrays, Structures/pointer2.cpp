#include <iostream>
using namespace std;
int main()
{
    int b = 20;
    int *poin = &b;
    cout << poin << endl;
    poin++;
    cout << poin << endl;

    return 0;
}