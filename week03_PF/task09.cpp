#include <iostream>
using namespace std;
main()
{
    int age_years;
    long int age_days;
    cout << "Enter age in yaers : ";
    cin >> age_years;
    age_days = age_years * 365;
    cout << "Age in days is " << age_days;

} // namespace std;
