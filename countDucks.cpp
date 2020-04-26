// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  // getting the input files, then open
  string inpFile = argv[1];
  ifstream ifile(inpFile.c_str());
  // if file no good, exit
  if(!ifile.good())
  {
    cerr << "Unable to open file: " << argv[1] <<endl;
  }
  // set tally to zero. read lines so that if there's duck, +1 to counter
  string line;
  int countDucks = 0;
  while(ifile >> line)
  {
    if (line == "duck"){
      countDucks++;
    }
  }
  // outputting the line
  cout << "There were " << countDucks << " ducks in " << inpFile <<endl;

  ifile.close();

  return 0;
}
