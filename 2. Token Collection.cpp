#include <iostream>
using namespace std;

int main() {
    int i, temp;
    int variable_counter = 1;
    string statement;
    cout << "Enter the statement:";
    getline(cin, statement);
    cout << "The entered statement was:" << statement << endl;

    if (statement[0] > '0' && statement[0] < '9') {
        cout << "Lexical error: Invalid starting character." << endl;
        return 0;
    } else {
        cout << "<id," << variable_counter << "> ";
    }

    for (i = 1; i < statement.length(); i++) {
        if (statement[i] == '=') {
            break;
        }
    }
    cout << "<=> ";

    temp = i;
    if (statement[temp + 1] > '0' && statement[temp + 1] < '9') {
        cout << "Lexical error: Invalid character after assignment operator." << endl;
        return 0;
    } else {
        variable_counter++;
        cout << "<id," << variable_counter << "> ";
    }

    for (i = temp + 2; i < statement.length(); i++) {
        if (statement[i] == '+') {
            break;
        }
    }
    cout << "<+> ";

    temp = i;
    if (statement[temp + 1] > '0' && statement[temp + 1] < '9') {
        cout << "Lexical error: Invalid character after addition operator." << endl;
        return 0;
    } else {
        variable_counter++;
        cout << "<id," << variable_counter << "> ";
    }

    for (i = temp + 2; i < statement.length(); i++) {
        if (statement[i] == ';') {
            break;
        }
    }
    cout << "<;>" << endl;

    return 0;
}


