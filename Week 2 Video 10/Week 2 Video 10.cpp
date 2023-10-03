#include <iostream>

using namespace std;

int main()
{
    //Prompt user to enter distance in centimeters
    cout << "Enter a distance in centimeters: ";

    //Get distance in centimeters
    int centimeters;
    cin >> centimeters;

    //Calculate feet
    float totalFeet;
    totalFeet = centimeters / 30.48f;
    int justFeet = (int)totalFeet;

    //Calculate inches
    int justInches;
    justInches = (int)((totalFeet - justFeet) * 12);

    //Display result
    cout << "The distance entered converted to imperial measurements is: " << justFeet << " foot/feet and " << justInches << " inches." << endl;
}