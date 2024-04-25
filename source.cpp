// Paul Shelley
// 4/22/24
// CIS 1202.501
// 4/22/24 adding basic classes and functions

#include <iostream>
#include <stdexcept>

using namespace std;

char character(char start, int offset);

// exception classes
class invalidCharacterException : public exception {
public:
    const char* what() const noexcept {
      return "Invalid character exception";
    }
};

class invalidRangeException : public exception {
public:
    const char* what() const noexcept {
        return "Invalid range exception";
    }
};

char character(char start, int offset) {
    // check if start is a letter...
    if (!isalpha(start)) {
        throw invalidCharacterException();
    }
    // calc target letter
    char target = start + offset;

    // checks if target is a letter...
    if (!isalpha(target)) {
        throw invalidRangeException();
    }

    // return target letter
    return target;
}

int main () {
// tests cases 
try {
    cout << "character('a', 1) returns: " << character('a', 1) << endl;
}
catch (const exception &e) {
    cout << e.what() << endl;
}
try {
    cout << "character('a', -1) returns: " << character('a', -1) << endl;
}
catch (const exception &e) {
    cout << e.what() << endl;
}
try {
    cout << "character('Z', -1) returns: " << character('Z', -1) << endl;
}
catch (const exception &e) {
    cout << e.what() << endl;
}
try {
    cout << "character('?', 5) returns: " << character('?', 5) << endl;
}
catch (const exception &e) {
    cout << e.what() << endl;
}
    // looks weird but hopefully it works..
    // works
  return 0;
}
