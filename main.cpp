#include <iostream> 
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int from = 10, to = 100, number, attempts;
    int numOfAttempts = 10, i = numOfAttempts;
    char input;

    cout << "Think of a number from 10 to 100" << endl;
    cout << "I will try to find it. I have " << numOfAttempts << " attempts." << endl << endl;
    cout << "Indicate '>' when my guess is higher." << endl;
    cout << "Indicate '<' when my guess is lower." << endl;
    cout << "Indicate '=' when my guess is correct." << endl << endl;

    while (numOfAttempts > 0) { 
        attempts = i - numOfAttempts;
        number = rand() % (to - from + 1) + from;
        
        cout << endl << attempts+1 << " attempt. Is your number " << number << " ?" << endl;
        cin >> input;
        switch (input) {
	            case '>':
	                to = number - 1;
	                break;
	            case '<':
	                from = number + 1;
	                break;
	            case '=':
	                cout << endl << "I found your number in " << attempts+1 << " attempts!" << endl;
	                return 0;
	            default:
	                cout << endl << "Invalid input! Please enter '>', '<', or '='." << endl;
	                continue;
	    	}
	    numOfAttempts--;
    }
    cout << endl << "Unfurtunattely, I couldn't find your number" << endl;
    return 0;
}
