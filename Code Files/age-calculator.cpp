#include <iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    date current;
    cout << "Enter current day (DD): " << endl;
    cin >> current.day;
    cout << "Enter current month (MM): " << endl;
    cin >> current.month;
    cout << "Enter current year (YYYY): " << endl;
    cin >> current.year;

    int current_days = current.day + current.month * 30 + current.year * 365;

    date birth;
    cout << "Enter day of birth (DD): " << endl;
    cin >> birth.day;
    cout << "Enter month (MM): " << endl;
    cin >> birth.month;
    cout << "Enter year (YYYY): " << endl;
    cin >> birth.year;

    int birth_days = birth.day + birth.month * 30 + birth.year * 365;

    int difference = current_days - birth_days;
    cout << "You are " << difference / 365 << " years old." << endl;
    return 0;
}