/*
  This header file contains the code for
  input and output stream objects (cin and cout)
*/
#include <iostream>

int main()
/*
  This is the main function
  Int is the return type of the function (integer)
  main is the name of the function and () are the
  parameters
 */
{
    /*
      std stands for standard namespace
      cout stands for console output
      endl stands for end line
      << is the insertion operator (inserts the value
         on the right into the stream on the left)
    */
    std::cout << "Hello, World!" << std::endl;
    return 0;
}