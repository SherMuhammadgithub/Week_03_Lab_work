#include <iostream>
using namespace std;
main()
{
    int wins, draws, losses, Points;
    string team;
    cout << "Enter the team name : ";
    cin >> team;
    cout << "No. of drwas : ";
    cin >> draws;
    cout << "No. of wins : ";
    cin >> wins;
    cout << "No. of losess : ";
    cin >> losses;
    Points = (wins * 3) + (losses * 0) + (draws * 1);
    cout << team << "has obtained " << Points << " in the Asia Cup touranament";

} // namespace std;
