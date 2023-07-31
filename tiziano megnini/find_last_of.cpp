// string::find_last_of
#include <iostream> // std::cout
#include <string> // std::string
#include <cstddef> // std::size_t
void SplitFilename (const std::string& str)
{
std::cout << "Splitting: " << str << '\n';
std::size_t found = str.find_last_of("/\\");
std::cout << " path: " << str.substr(0,found) << '\n';
std::cout << " file: " << str.substr(found+1) << '\n';
}
int main ()
{
std::string str1 ("/usr/bin/man");
std::string str2 ("c:\\windows\\winhelp.exe");
SplitFilename (str1);
SplitFilename (str2);
return 0;
}
