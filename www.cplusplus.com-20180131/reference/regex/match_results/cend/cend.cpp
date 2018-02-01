// match_results::cbegin/cend
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <string>
#include <regex>

int main ()
{
  std::string s ("subject");
  std::smatch m;
  std::regex e ("(sub)(.*)");

  std::regex_match ( s, m, e );

  std::cout << "matches:" << std::endl;
  for (std::smatch::iterator it = m.cbegin(); it!=m.cend(); ++it) {
	std::cout << *it << std::endl;
  }
  return 0;
}
