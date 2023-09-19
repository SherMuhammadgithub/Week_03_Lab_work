#include <iostream>
using namespace std;
main()
{
    int Charge, Time;
    float Current;
    cout << "Enter Charge : ";
    cin >> Charge;
    cout << "Enter Time : ";
    cin >> Time;
    Current = Charge / Time;
    cout << "The Current (I) is : " << Current << " Amperes";

} // namespace std;
