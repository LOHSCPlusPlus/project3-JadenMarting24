#include <fstream>
using namespace std;
class BirdType{
  private:
  enum {MAX_CHAR_LEN = 100};
  char birdName[MAX_CHAR_LEN];
  char sciName[MAX_CHAR_LEN];
  char status[MAX_CHAR_LEN];
  char color[MAX_CHAR_LEN];
  char diet[MAX_CHAR_LEN];
  public:
  BirdType();
  void readUser();
  bool isColor(const char searchColor[]);
  void readBirdData(ifstream &inFile);
  void print();
  void printExample(ostream &out);
    
};