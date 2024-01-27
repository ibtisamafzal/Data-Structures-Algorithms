#include<iostream>
using namespace std;
int main ()
{
    char a='A';
    char *adrs=&a;
    cout << adrs << endl;

    adrs++;
    cout << adrs << endl;
    return 0;
}