#include <iostream>

/* using namespace std;
   you could using namespace std (commented out here)
   to avoid having to type std:: prefix for everything
   but it is not the best idea in general. Better is to
   get the habit of using the std:: prefix directly or
    to use the using directive (see below)
*/
int main()
{
   using std::cout; // using directive
   using std::endl; // using directive
   
   /* cout << "Hello, World!\n";
      This commented out is the same as the code we use
      below. Again, not the best idea in general!
   */
   cout << "Hello, World!" << endl
        << endl
        << "I am learning C++!" << endl;

   return 0;
}