#include <iostream>
#include <fstream>

using namespace std;

string input (string);

int main() {
    // open the HTML file for reading
    ifstream fileReader{"index.html"};
    if (!fileReader.is_open()) {
        cerr << "Failed to open index.html" << endl;
        return 1;
    }

    // read the file line-by-line and print its contents
    string line;
    while (getline(fileReader, line)) {
        cout << line << '\n';
    }

    cout << "Hello, world!" << endl;

    cout << "Wi" << endl;

    string name = "Name";

    cout << "~ (Enter your name)" << endl << ">> ";

    cin >> name;

    cout << "Hello friend: \"<{:" << name << ":}>\"" << endl;

    bool isWantHi = false;

    cout << "~ (\"Enter your name\")" << endl << ">> ";

    cin >> isWantHi;

    if (isWantHi) {
        cout << "Hi, world" << endl;
    }

    return 0;
}

string input (string& message) {

}