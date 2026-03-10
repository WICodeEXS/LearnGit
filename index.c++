#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream fileReader {"index.html"};

    // bug!
    for (int buffer=0;fileReader>>buffer;cout << buffer);

    cout << "Hello, world" << endl;
}