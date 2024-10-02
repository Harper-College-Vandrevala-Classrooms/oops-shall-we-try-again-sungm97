#include <iostream>
#include <limits>

using namespace std;


int validation(int lower = numeric_limits<int>::min(), int upper= numeric_limits<int>::max(), const string& prompt = "Please enter a value: ", const string& error = "Your value is invalid")
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
    test = validation();
    cout << "You entered: " << test << endl;
    test = validation(0,100,"Please enter a value between 0 and 100");
    cout << "You entered: " << test << endl;
    test = validation(0,numeric_limits<int>::max(), "Please enter a value greater or equal to 0");
    cout << "You entered: " << test << endl;
    test = validation(numeric_limits<int>::min(),100, "Please enter a value less or equal to 100");
    cout << "You entered: " << test << endl;
    return 0;
}