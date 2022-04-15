#include <fstream>
#include "ItemClass.h"
class Database{
private:
enum {MAX_BIRDS = 100};
int numBirds;
BirdType birds[MAX_BIRDS];



public:
void printBirds();
void readBirdies();
void printBirdsByColor();
void removeBird();
void reloadData();
void saveData();
void addBird();
Database();
};