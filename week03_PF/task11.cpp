#include <iostream>
using namespace std;
main()
{
    int current_populaiton, per_birth, populaiton_till;
    cout << "Enter the Current world Populaiton : ";
    cin >> current_populaiton;
    cout << "Enter the monthly birth rate (number of births per month) : ";
    cin >> per_birth;
    populaiton_till = (per_birth * 12 * 30) + current_populaiton;
    cout << "The populaiton in three decades will be : " << populaiton_till;

} // namespace std;
