// Программа Score Rater 2.0
// Демонструет работу с условием else
#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score >= 1000)
    {
        cout << "Your scored 1000 or more. Impressive!\n";
    }
    else if (score >= 500)
    {
        cout << "Your scored 500 or more. Nice.\n";
    }
    else if (score >= 250)
    {
        cout << "Your scored 250 or more. Decent\n";
    }
    else
    {
        cout << "You scored less than 250. Nothing to brag about.\n";
    }
    return 0;
}