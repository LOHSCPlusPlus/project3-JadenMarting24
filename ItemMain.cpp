#include <iostream>
#include "ItemDB.h"
using namespace std;
int main() {
    Database birds; 

    birds.readBirdies();
    int enter = 1200231;
    


    while(enter != 7){
      cout << " Reload Bird Data(1)\n Print Bird Data(2)\n Add Bird Data(3)\n Remove Bird Data(4)\n Print Bird By Color(5)\n Save Bird Data(6)\n Quit(7)\n Enter: ";
      cin >> enter;
      
      if(enter == 4){
        birds.removeBird();
        
      }
      else if(enter == 6){
        birds.saveData();
      }
      else if(enter == 1){
        birds.reloadData();
      }
      else if(enter == 2){
        birds.printBirds();
      }
      else if(enter == 3){
       
          birds.addBird();
      
        
      }
      else if(enter == 5){
        birds.printBirdsByColor();
      }
      else if(enter == 7){
        cout << endl << "Goodbye";
        return 0;
      }
    }
  return 0;
}
