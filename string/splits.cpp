
#include "string.h"
#include <fstream>

int main(int c, char *a[])
{

  if (c == 0) {
    std::cerr << "Usage: " << a[1] << " file_name" << std::endl;
    exit(1);
  }

  std::ifstream in(a[1]);

  if (!in) {
    std::cerr << "Couldn't open " << a[1] << ", exiting." << std::endl;
    exit(1);
  }


  string line;
  std::vector<string> vector;

  do {
    line = getline(in);

    vector = line.split(' ');
    std::cerr << "Vector size: " << vector.size() << std::endl;
    std::cerr << "Vector capacity: " << vector.capacity() << std::endl;

    for (unsigned int i = 0; i < vector.size(); ++i) {
      std::cout << vector[i] << std::endl; 
    }

  } while (!in.eof());

  return (in.close(), 0);
}
