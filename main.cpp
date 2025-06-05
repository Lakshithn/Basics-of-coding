// import in and out stream and string
#include <iostream>
#include <string>

// Function to return the string
int main()
{

  std::cout << "welcome to the world of programming\n";

  // declaring a variable line type: string
  std::string line;
  
  // In C++, std::getline is a function used to read an entire line of input from a stream (like std::cin or a file).
  // It stops reading when it encounters a newline character (\n) and stores the input in a string.

    if (std::getline(std::cin, line))
    {
      if (line.length() > 30)
        {
        std::cout << "Please input a string with less than 30 words .\n";
        return 1;
        }
      std::string upper = line;
      for (char &c: upper)
        {
          c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));       
         }
      if (!line.empty() && upper == line)
      {
        std::cout << "Error: all upper case input is not allowed" << std:: endl;
        return 1;
      }
      else {
      // The std::endl is an output manipulator in C++ that inserts a newline character into the output sequence and flushes the stream.
      //  This ensures that all output is immediately written to the console or file.
      std::cout << line << std::endl;
    }
    return 0;
  }

}
