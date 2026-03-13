#include <iostream>
#include <fstream>

using namespace std;

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

    string name = "Hello, world";

    cout << "~ (Enter your name)" << endl << "\t" << ">";

    cin >> name;

    cout << "Hello friend: \"<{:" << name << ":}>\"" << endl;

    return 0;
}
