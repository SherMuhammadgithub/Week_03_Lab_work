#include <iostream>
using namespace std;
main()
{
    int roll, aggre;
    char section;
    string name;

    // Prompt the user for input
    cout << "Please enter your name: ";

    // Use cin to read user input and store it in the variable
    cin >> name;

    // Display the user's input
    cout << "Plz enter roll number: ";
    cin >> roll;
    cout << "Enter your aggregate : ";
    cin >> aggre;
    cout << "Enter your Section :";
    cin >> section;
    cout << "Student Information" << endl;
    cout << "Name :" << name << endl;
    cout << "Roll No :" << roll << endl;
    cout << "Aggregate :" << aggre << endl;
    cout << "Section :" << section << endl;

} // namespace std;