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
  ifstream f;
  f.open(argv[1]);
  // if file no good, exit
  if(!f.is_open())
  {
    cerr << "Unable to open file: " << argv[1] <<endl;
  }
  // start here. implement new stuff: count animals, count ducks, count non-ducks
  
  int duck_count = 0; 
  int other_animals_count = 0;
  const string duck = "duck";
  string t;
  while (f>>t){
    if(t == duck)
      duck_count++;
    else 
      other_animals_count++;
  }
  int animals_count = duck_count + other_animals_count;
  cout << "Report for " << argv[1] << ":" <<endl;
  cout << "   Animal count:    " << animals_count << endl; 
  cout << "   Duck count:      " << duck_count << endl; 
  cout << "   Non duck count:  " << other_animals_count << endl;   

  f.close();

  return 0;
}
