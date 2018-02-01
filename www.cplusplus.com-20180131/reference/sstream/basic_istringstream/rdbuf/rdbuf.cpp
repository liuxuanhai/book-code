// istringstream::rdbuf
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream, std::stringbuf

int main () {
  std::istringstream iss;
  std::stringbuf *pbuf = iss.rdbuf();

  // using stringbuf directly:
  pbuf->str("Example string");

  int size = pbuf->in_avail();

  while (pbuf->in_avail()>0)
    std::cout << static_cast<char>(pbuf->sbumpc());

  return 0;
}
