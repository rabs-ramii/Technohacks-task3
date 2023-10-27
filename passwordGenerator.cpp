#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string generatePassword(int length)
{
    const string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    string password;

    for (int i = 0; i < length; ++i)
    {
        password += characters[rand() % characters.length()];
    }

    return password;
}

int main()
{
    srand(time(0)); // Seed for random number generation
    int length;

    cout << "Enter the length of the password: ";
    cin >> length;

    if (length > 0)
    {
        string password = generatePassword(length);
        cout << "Generated Password: " << password << endl;
    }
    else
    {
        cout << "Length must be a positive integer." << endl;
    }

    return 0;
}
