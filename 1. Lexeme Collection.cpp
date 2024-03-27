#include <iostream>
using namespace std;

int main() {
    int i, temp;
    string statement;

    cout << "Enter the statement:";
    getline(cin, statement);
    cout << "The entered statement was:" << statement << endl;

    // Check if the first character is a digit
    if (statement[0] >= '0' && statement[0] <= '9') {
        cout << statement[0] << endl;
        return 0;
    } else {
        cout << statement[0] << endl;
    }

    for (i = 1; i < statement.length(); i++) {
        if (statement[i] == '=') {
            break; // Exit the loop when encountering '='
        }
        cout << statement[i] << endl;
    }

    // If '=' is not found in the statement
    if (i == statement.length()) {
        return 0;
    }

    cout << "=" << endl;

    temp = i + 1; // Set temp to the index of the character after '='

    // Check if the character after '=' is a valid token
    if (!(statement[temp] >= 'a' && statement[temp] <= 'z') && !(statement[temp] >= 'A' && statement[temp] <= 'Z')) {
        return 0;
    } else {
        cout << statement[temp] << endl;
    }

    for (i = temp + 1; i < statement.length(); i++) {
        if (statement[i] == '+') {
            break; // Exit the loop when encountering '+'
        }
        cout << statement[i] << endl;
    }

    // If '+' is not found in the statement
    if (i == statement.length()) {
        return 0;
    }

    cout << "+" << endl;

    temp = i + 1; // Set temp to the index of the character after '+'

    // Check if the character after '+' is a valid token
    if (!(statement[temp] >= 'a' && statement[temp] <= 'z') && !(statement[temp] >= 'A' && statement[temp] <= 'Z')) {
        return 0;
    } else {
        cout << statement[temp] << endl;
    }

    // Print the ';' character as a token
    cout << ";" << endl;

    return 0;
}
