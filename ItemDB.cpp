#include "ItemDB.h"
#include "ReadUtils.h"
#include <cstring>
#include <iostream>
Database::Database(){
  numBirds = 0;
}
void Database::printBirds(){
  
    for(int index = 0; index < numBirds; index++){
      
      
        cout << "Index " << index << ": ";
        birds[index].print();
  
      
      
      
    }
}
void Database::readBirdies() {
    ifstream birdFile("birds.txt");
    numBirds = 0;
    while(birdFile.peek() != EOF && numBirds < MAX_BIRDS) {
        birds[numBirds].readBirdData(birdFile);
        numBirds++;
    }
}
void Database::printBirdsByColor(){
  char comparison[100];
  cout << "Type a requested region of color: ";
  cin >> comparison;
  cout << "--------------------" << endl;
  for(int index = 0; index < MAX_BIRDS; index++){
    if(birds[index].isColor(comparison)){
        cout << "Index " << index << ": ";
        birds[index].print();
      
    }
  }
  cout << "--------------------" << endl;
}

void Database::removeBird(){
  int temp = readInt("Enter index to remove");
  for(int index = temp; index < numBirds; index++){
    birds[index] = birds[index + 1];

    }
  numBirds--;
}
void Database::reloadData(){
  readBirdies();
}
void Database::saveData(){
  ofstream outFile("save.txt");
    for (int index = 0; index < numBirds; index++) {
      birds[index].printExample(outFile);
    }
}
void Database::addBird(){
  if(numBirds < MAX_BIRDS){
  birds[numBirds].readUser();
  numBirds++;
  }
  
  

}