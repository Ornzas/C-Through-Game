// Утраченный клад
// Персонализированная приключенческая игра
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int  main()
{
    const int GOLD_PIECES = 900;
    int adventurers, killed, surviviors;
    string leader;
    // получаю информацию
    cout << "Welcome to Lost Fortune\n\n";
    cout << "Please enter the following for your personalized adventure\n";
    cout << "Enter a number: ";
    cin >> adventurers;
    cout << "Enter a number? smaller than the first: ";
    cin >> killed;
    surviviors = adventurers - killed;
    cout << "Enter your last name: ";
    cin >> leader;\
    // сюжет
    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << "  were vanquished. ";
    cout << "leaving just " << surviviors << " in the group.\n";
    cout << "\nTrhe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest. ";
    cout << "they stumbled upon the the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
    cout << leader << " held on to the extra " << (GOLD_PIECES % surviviors);
    cout << " pieces to keep things faor of course.\n";
    return 0;
}