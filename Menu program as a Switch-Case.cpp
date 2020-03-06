#include <iostream>

using namespace std;

int menu(int answer);

int main()
{
    int answer;

    cout << "Pick a choice from the list: " << endl;

    cout << "Pick from choices 1, 2, or 3, depending on what you want from the menu.\n";

    answer = menu(answer);
    cin >> answer;
}

int menu(int answer)
{
    do
    {
        switch (answer)
        {
            case 1:
                cout << "I want to run.\n";
                break;

            case 2:
                cout << "I want to walk.\n";
                break;

            case 3:
                cout << "I just want to talk to my friends.";
                break;

            default:
                cout << "Bad choice! Please try again later.\n";
        }
    } while (answer <= 0 || answer > 3);
    return answer;
}
