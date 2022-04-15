#include "ItemClass.h"
#include "ReadUtils.h"
#include <cstring>
#include <iostream>
BirdType::BirdType() {
  
  for(int index = 0; index < MAX_CHAR_LEN; index++){
    birdName[index] = 0;
    sciName[index] = 0;
    status[index] = 0;
    color[index] = 0;
    diet[index] = 0;
  }

}
void BirdType::readBirdData(ifstream &inFile){
      
      inFile.get(birdName, BirdType::MAX_CHAR_LEN, ';');
      inFile.ignore(100,';');
      
      inFile.get(sciName, BirdType::MAX_CHAR_LEN, ';');
      inFile.ignore(100,';');

      inFile.get(status, BirdType::MAX_CHAR_LEN, ';');
      inFile.ignore(100,';');

      inFile.get(color, BirdType::MAX_CHAR_LEN, ';');
      inFile.ignore(100,';');

      inFile.get(diet, BirdType::MAX_CHAR_LEN);
      inFile.ignore(100,'\n');
      
      
  
    
}
void BirdType::print(){

        cout << birdName << ";";
        cout << sciName << ";";
        cout << status << ";";
        cout << color << ";";
        cout << diet << endl;
}
void BirdType::readUser(){
  cin.ignore(100, '\n');
      
      cout << "Enter the birds known name: ";
      cin.get(birdName, BirdType::MAX_CHAR_LEN);
      cin.ignore(100, '\n');
      cout << "Enter the birds scientific name: ";
      cin.get(sciName, BirdType::MAX_CHAR_LEN);
  cin.ignore(100, '\n');
      cout << "Enter the birds status: ";
      cin.get(status, BirdType::MAX_CHAR_LEN);
  cin.ignore(100, '\n');
      cout << "Enter the birds color: ";
      cin.get(color, BirdType::MAX_CHAR_LEN);
  cin.ignore(100, '\n');
      cout << "Enter the birds diet: ";
      cin.get(diet, BirdType::MAX_CHAR_LEN);
  cin.ignore(100, '\n');
  
  
}
void BirdType::printExample(ostream &out){
    out << birdName << ";";
    out << sciName << ";";
    out << status << ";";
    out << color << ";";
    out << diet << endl;
}
bool BirdType::isColor(const char searchColor[]){
  if(strcmp(color,searchColor) == 0)
    return true;
  return false;
}