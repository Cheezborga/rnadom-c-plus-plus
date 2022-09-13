#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

#include <stdlib.h>

// DON'T FUCKING DO THIS
using namespace std;


void FancyPrint(std::string String, int PerCharacterDelay = 10) {
  for (unsigned int i = 0; i < String.size(); i++) {
    std::cout<<String[i]<<std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(PerCharacterDelay));
  }
}
void ClearScreen() {
  std::cout<<std::flush;
  std::system("clear");
}
void SectionHeader() {
  std::cout<<"+===============================================+\n";
}
void NewLine() {
  std::cout<<"\n";
}
int Prompt(std::string PromptString, std::vector<std::string> Options) {

  // Clear Screen, Print Out Prompt
  ClearScreen();
  FancyPrint(PromptString);


  // Add New Line and Header, Then Print Out Every Choice
  NewLine();
  SectionHeader();
  for (unsigned int i = 0; i < Options.size(); i++) {
    std::string Header = std::to_string(i + 1) + ") ";
    FancyPrint(Header + Options[i]);
  }
  SectionHeader();
  NewLine();


  // Collect User Input
  int Choice;
  std::cout<<"Choice: ";
  std::cin>>Choice;
  ClearScreen();

  return Choice;
}


int main() {
  
  // Initialize Variables
  int choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8,choice9;
  std::string name;
  std::string dog_name;

  // Get User Names
  std::cout<<"Heroes name: ";
  std::cin>>name;
  std::cout<<"Heroes dog name: ";
  std::cin>>dog_name;
  ClearScreen();

  // Generate Story
  std::string FirstQuestion = name
  + "'s village was attacked by the league of bad, "
  + name + " narrowly escaped with his best friend/dog " + dog_name + " "
  + name + " was determined to get back at the league of bad for what they did to his village.\n"
  + name + " starts his journey to end the league of bad. \n"
  + name + " and " + dog_name + " are presented with an option that may lead to life or death. They must choose to cross the \n";
  
  std::vector<std::string> Choices;
  Choices.push_back("Murky and dark woods\n");
  Choices.push_back("Nice and grassy fields \n");
  Choices.push_back("Huge dog park that extends 100's of miles \n");

  choice1 = Prompt(FirstQuestion, Choices);


  if (choice1==1){
    cout<<"You walk for miles and miles. ";
    cout<<"A group of goblins attack you and steal "<<dog_name<<endl;
    cout<<"You have 2 choices on what to do next: \n";
    cout<<"1) Go to save your dog\n";
    cout<<"2) Leave my dog: \n";
    cout<<"Your choice: ";
    cin>>choice2;
    if(choice2==1){
      cout<<"You track down the goblins and kill them all with your bare hands and retrieve "<<dog_name<<", "<<dog_name<<" gives you a kiss\n";

  }
  else if(choice2==2){
    cout<<"an angel comes down from the heavens, ";
    cout<<"you die\n";
  }
  if(choice2==1){
    cout<<name<<" and "<<dog_name<<" leave the murky woods and stumble upon the league of bad's base\n";
  }
  }
  if(choice1==2){
    cout<<"you picked a pussy route and ur now ded\n";
    return 0;
  }
  if(choice1==3){
    cout<<"You have a peaceful walk for now....\n";
    cout<<"A pack of 5 angry dogs attacks "<<name<<" and "<<dog_name<<endl;
    cout<<"You have 2 choices of nearby weapons to use: ";
    cout<<"1) a pocket knife in your pocket\n";
    cout<<"2)a Large mallet conveniently placed next to you \n";
    cout<<"Your choice: ";
    cin>>choice3;
    if(choice3==1){
      cout<<"The knife is way too small and you die\n";
    }
    if(choice3==2){
      cout<<"You take some nasty bites getting to the mallet but once you grab it you make easy work of the dogs.\n";
    }
    if(choice3==2){
      cout<<name<< " and "<<dog_name<<" stumble upon the league of bad's base. \n";
    }
    }
  cout<<"Looking over the enemie's base you quickly find 3 ways to beat them.\n";
  cout<<"Which weapon will you use: ";
  cout<<"1) a mortar with 20 shells overlooking the base\n";
  cout<<"2) An attack helicopter with missiles \n";
  cout<<"3) attack them with a tiny pocket knife and "<<dog_name<<endl;
  cout<<"Your choice: ";
  cin>>choice4;

  if(choice4==1){
    cout<<"The mortar was a trap and using it caused "<<name<<" and "<<dog_name<<" to explode.";
    cout<<"skill issue\n";
  }
  if (choice4==2){
    cout<<dog_name<<"'s fatass caused the helicopter to crash down and you die\n";
    cout<<"skill issue\n";
    }
    if(choice4==3){
      cout<<"The heavens noticed your bravery and smited your enemies, good work soldier"<<dog_name<< " wags its tail. \n";
    }
}
