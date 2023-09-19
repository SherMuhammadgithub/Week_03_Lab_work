#include <iostream>
using namespace std;
main()
{
    string name;
    float Matric, Inter, Ecat;
    float Aggregate, matric, inter, ecat;
    cout << "Entr name : ";
    cin >> name;
    cout << "Enter Matric Marks : ";
    cin >> Matric;
    cout << "Enter Inter Marks : ";
    cin >> Inter;
    cout << "Enter Ecat Marks : ";
    cin >> Ecat;
    matric = Matric / 1100 * 10;
    inter = Inter / 550 * 40;
    ecat = Ecat / 400 * 50;
    Aggregate = matric + inter + ecat;
    cout << "Aggregate Score of " << name << " in UET is : " <<Aggregate ;

} // namespace std;
