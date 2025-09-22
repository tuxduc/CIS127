#include <iostream>
#include <string>
using namespace std;

int main() {
    string usrStr;

    while (true) {
        getline(cin, usrStr);

        // check if user wants to quit
        if (usrStr == "Done" || usrStr == "done" || usrStr == "d") {
            break;
        }

        // print reversed string
        for (int i = usrStr.length() - 1; i >= 0; i--) {
            cout << usrStr[i];
        }
        cout << endl;
    }

    return 0;
}
