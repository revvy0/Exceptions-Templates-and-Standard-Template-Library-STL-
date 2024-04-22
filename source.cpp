// Paul Shelley
// 4/22/24
// CIS 1202.501
// 4/22/24 adding basic classes and functions

#include <iostream>
#include <stdexcept>

char character(char start, int offset);

// exception classes
class invalidCharacterException : public exception {
public:
    const char what() const noexcept {
      return "Invalid character exception";
    }
};

class invalidRangeException : public exception {
public:
    const char what() const noexcept {
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


  return 0;
}
