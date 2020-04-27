#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int input_int;
    double input_double;
    string input_string;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> input_int;
    
    cin >> input_double;
    cin.ignore();  //ignores an end of line character 
    getline(cin, input_string);
    // Print the sum of both integer variables on a new line.
    cout << input_int + i << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", input_double + d);
    //cout << input_double + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + input_string << endl;
    
    return 0;