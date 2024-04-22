// Paul Shelley
// 4/22/24
// CIS 1202.501
// 4/22/24 adding basic classes and functions

#include <iostream>
#include <stdexcept>

char character(char start, int offset);

class invalidCharacterException : public exception {
public:
    const char what() const noexcept {
      return "Invalid character exception";
    }
};

class invalidRangeException : public exception {

};

char character(char start, int offset) {

}

int main () {


  return 0;
}
