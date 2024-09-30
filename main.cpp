#include <iostream>

using namespace std;


int validation(int lower, int upper, const string& prompt = "Please enter a value: ", const string& error = "Your value is invalid")
{
    int input;
    bool check = false;
    while (!check)
    {
        cout << prompt <<endl;
        cin >> input;
        if (input < lower || input > upper)
        {
            cout << error << endl;
        }
        else
        {
            check = true;
        }
    }
    return input;
}
int main()
{
    int test;
    test = validation(0, 100);
    cout << "You entered: " << test;
    return 0;
}