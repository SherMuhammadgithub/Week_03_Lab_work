#include <iostream>
using namespace std;
main()
{
    int hours;
    long int sec;
    cout << "Enter the number of hours :";
    cin >> hours;
    sec = hours * 3600;
    cout << hours << " hours is equal to " << sec << " seconds";

} // namespace std;
