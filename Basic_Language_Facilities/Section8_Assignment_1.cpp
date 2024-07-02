// The std::string function does not provide any function to convert the underlying string
// to upper case or lower case. Write two functions that provide this behavior. 
// Both functions return a copy of the converted string. In case of error, return an empty string.

#include <iostream>
#include <string>

std::string ToUpper(const std::string &str)
    {
  std::string upperStr = str;
  for (size_t i = 0; i < upperStr.size(); ++i) {
    if (islower(upperStr[i])) {
      upperStr[i] = toupper(upperStr[i]); // toupper from "string" library
    }
  }
  return upperStr;
};

std::string ToLower(const std::string &str) 
{
  std::string lowerStr = str;
  for (size_t i = 0; i < lowerStr.size(); ++i) {
    if (islower(lowerStr[i])) {
      lowerStr[i] = tolower(lowerStr[i]); // tolower from "string" library
    }
  }
  return lowerStr;
};

int main() {
  std::string inputStr;
  std::cout << "Podaj łańcuch: ";
  getline(std::cin, inputStr);

  std::string upperStr = ToUpper(inputStr);
  std::cout << "Łańcuch po konwersji na wielkie litery: " << upperStr << std::endl;

  return 0;
}

// Hint : Use toupper & tolower from C string library.