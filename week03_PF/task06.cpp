#include <iostream>
using namespace std;
main()
{
    
    double Bits , MBB;
    cout << "Enter the Size in MBS : ";
    cin >> MBB;
    Bits = MBB * 1024 * 1024 * 8;
    cout << MBB << " Mbs is equal to " << Bits;

} // namespace std;
