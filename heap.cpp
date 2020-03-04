#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//char* parce(){
char* parce(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* extraNumbers);
void maxSize(char* inputHeap, int* wordSize);
char* createHeap(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* sortedHeap, int* wordSize, int* counterTwo, int* sortCounter, int* extraNumbers, int* ones, int* twos, int* threes);
void PrintHeap(int* sortedHeap, int* counterTwo, int* index);
void PrintSpace(int* spaceNumber);
void PrintVisual(int* sortedHeap, int* spaceNumber, int* visualCounter, int* left, int* right, int* rowCounter);
void PrintBranch(int* direction, int* rowCounter);
int main(){
  char input[30];
  char inputTwo[30];
  char* inputHeap = new char[500];
  int* sortedHeap = new int[100];
  int* index = new int;
  char* parcedChar = new char[20];
  int* parcedInt = new int;
  int* counterOne = new int;
  int* wordCounter = new int;
  int* wordSize = new int;
  int* counterTwo = new int;
  int* heapSize = new int;
  int* sortCounter = new int;
  int* spaceCounter = new int;
  int* visualCounter = new int;
  int* left = new int;
  int* right = new int;
  int* LZeroROne = new int;
  int* rowCounter = new int;
  int* extraNumbers = new int;
  int* ones = new int;
  int* twos = new int;
  int* threes = new int;
  (*extraNumbers) = 0;
  (*rowCounter) = 1;
  (*LZeroROne) = 0;
  (*visualCounter) = 1;
  (*spaceCounter) = 10;
  (*counterTwo) = 0;
  (*wordCounter) = 0;
  (*index) = 1;
  (*counterOne) = -1;
  (*wordSize) = 1;
  do{
  cout << "Welcome to Heap. Please choose the input method. A string of numbers(string) or a file(file)" << endl;
  cin.get(input, 30);
  cin.clear();
  cin.ignore();
  if(strcmp(input, "file") == 0){
    cout << "please enter the file name" << endl;
    cin.get(inputTwo, 30);
   cin.clear();
    cin.ignore();
    cout << inputTwo << endl;
    ifstream rfile;
    rfile.open(inputTwo);
    if(rfile.is_open()){
      rfile.getline(inputHeap, 20);
      cout << inputHeap << endl;
      cout << "in file" << endl;
	}
  }
  if(strcmp(input, "string") == 0){
    cout << "please eneter a string of numbers" << endl;
    cin.get(inputHeap, 500);
   cin.clear();
    cin.ignore();
    //cout << inputHeap << endl; 
      }
  }
  while(strcmp(input, "file") != 0 && strcmp(input, "string") != 0);
  maxSize( inputHeap, wordSize);
  createHeap(inputHeap, index, parcedChar, counterOne, wordCounter, sortedHeap, wordSize, counterTwo, sortCounter, extraNumbers, ones, twos, threes);
  cout << "visual" << endl;
  PrintVisual(sortedHeap, spaceCounter, visualCounter, left, right, rowCounter);
  // cout << (*wordSize) << endl;
  
   //   (*index)++;
   /*
   cout << (*index) << endl;
  cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter);
  /*
  (*index)++;
   cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter);
   (*index)++;
    cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter);
  */
   //(*parcedChar) = NULL;
  //parcedChar[0] = '\0';
  (*index) = 1;
 cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0];
  //cout << ".";
  return 0;
}
char* createHeap(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* sortedHeap, int* wordSize, int* counterTwo, int* sortCounter, int* extraNumbers,  int* ones, int* twos, int* threes){
  cout << "BUILD THE HEAP" << endl;
  //cout << (*wordSize) << endl;
  // sortedHeap[(*index)] = 1;
  //(*index)++;
  //  cout << sizeof(sortedHeap) / 8 << endl;
     while((*index)-1 != (*wordSize)){
       /*
       cout << "tree: ";
      PrintHeap( sortedHeap, counterTwo, index);
      (*counterTwo) = 0;
       */
       cout << "size of tree: ";
      // cout << sizeof(sortedHeap) / 8 << endl;
      // cout << sizeof(sortedHeap)/sizeof(sortedHeap[0]) << endl;
 cout << "and index: ";
  cout << (*index) << endl;
 /*
 cout << "char: ";
   cout << parce(inputHeap, index - 1,  parcedChar, counterOne, wordCounter) << endl;
 sortedHeap[(*index)] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter));
 */
 if((*index) == 1){
   //cout << (*index) << endl;

   cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;
   
   if((*extraNumbers) == 2){
     cout << "2num" << endl;
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*10;
     cout << "ones" << (*ones) << endl;
     (*twos) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48;
     cout << "twos" << (*twos) << endl;
       sortedHeap[(*index)-1] = (*ones) + (*twos);
       (*ones) = 0;
       (*twos) = 0;
     (*extraNumbers) = 0;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';
   }
     else if((*extraNumbers) == 3){
     cout << "3num" << endl;
          (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*100;
	  //cout << "ones" << (*ones) << endl;
	  (*twos) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48)*10;
     (*threes) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[2]-48;
     
	  //cout << "twos" << (*twos) << endl;
     sortedHeap[(*index)-1] = (*ones) + (*twos) + (*threes);
       (*ones) = 0;
       (*twos) = 0;
       (*threes) = 0;
       parcedChar[1] = ' ';
       parcedChar[2] = ' ';
     (*extraNumbers) = 0;
     }
     else{
   sortedHeap[(*index)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';
     }
   
   //sortedHeap[(*index)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
 }
 
 else{
   (*sortCounter) = (*index)-1;
   cout << (*sortCounter) << endl;
   // cout << sortedHeap[(*sortCounter)-1] << endl;
      cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;
       parcedChar[1] = '\0';
      while((*extraNumbers) == 0 && sortedHeap[(*sortCounter)-1] < (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48 && (*sortCounter) != 0){
     (*sortCounter)--;
     }
         if((*extraNumbers) == 2){
     cout << "2num" << endl;
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*10;
     cout << "ones" << (*ones) << endl;
     (*twos) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48;
     cout << "twos" << (*twos) << endl;
	 }
	      else if((*extraNumbers) == 3){
     cout << "3num" << endl;
          (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*100;
	  //cout << "ones" << (*ones) << endl;
	  (*twos) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48)*10;
     (*threes) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[2]-48;
	      }
	 while((*extraNumbers) == 2 && sortedHeap[(*sortCounter)-1] < (*ones) + (*twos) && (*sortCounter) != 0){
     (*sortCounter)--;
     }
	 while((*extraNumbers) == 3 && sortedHeap[(*sortCounter)-1] < (*ones) + (*twos) + (*threes) && (*sortCounter) != 0){
     (*sortCounter)--;
     }
	 

      // while((*extraNumbers) == 3 && sortedHeap[(*sortCounter)-1] < (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumber != 0){
      //(*sortCounter)--;
      // }

   //      cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;

   cout << (*sortCounter) << endl;
   for(int i = (*index)-1; i != (*sortCounter); i--){
     sortedHeap[i] = sortedHeap[i-1];
   }
   //   cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;
   if((*extraNumbers) == 2){
     cout << "2num" << endl;
     //parcedChar[2] = '\0';
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*10;
     cout << "ones" << (*ones) << endl;
     (*twos) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48;
     cout << "twos" << (*twos) << endl;
       sortedHeap[(*sortCounter)] = (*ones) + (*twos);
       (*ones) = 0;
       (*twos) = 0;
     (*extraNumbers) = 0;
     //  parcedChar[1] = ' ';
     //parcedChar[2] = ' ';
   }
     else if((*extraNumbers) == 3){
     cout << "3num" << endl;
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*100;
	  //cout << "ones" << (*ones) << endl;
	  (*twos) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48)*10;
     (*threes) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[2]-48;
     
	  //cout << "twos" << (*twos) << endl;
     sortedHeap[(*sortCounter)] = (*ones) + (*twos) + (*threes);
       (*ones) = 0;
       (*twos) = 0;
       (*threes) = 0;
       //parcedChar[1] = '12';
       //parcedChar[2] = ' ';
     (*extraNumbers) = 0;
     }
     else{
       //    parcedChar[1] = '\0';
       //parcedChar[2] = ' ';

       sortedHeap[(*sortCounter)] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';

     }
     }
  //cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter) << endl;
 //(*counterOne) = 0;
 //(*wordCounter) = 0;
 // sortedHeap[(*index)] = 1;
       cout << "tree: ";
      PrintHeap( sortedHeap, counterTwo, index);
      (*counterTwo) = 0;
      
      // cout << (*wordSize) << endl;
 (*index)++;
 //cout << (*index) << endl;
    }
     //cout << "visual" << endl;
     //PrintVisual(i sortedHeap, spaceNumber);
}
char* parce(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* extraNumbers){
  parcedChar[0] = '\0';
  (*counterOne) = 0;
   for(int i = 0; i < strlen(inputHeap); i++){
     // cout << "Here" << endl;
      //      if(inputHeap[i] == '\0'){
      //   return parcedChar;
      // }
     if(inputHeap[i] != ' ' && (*wordCounter) != 3){
	   parcedChar[(*wordCounter)] = inputHeap[i];
	   //	   cout << "HereThere" << endl;
	   (*wordCounter)++;
  	   if((*wordCounter) == 2){
	     (*extraNumbers) = 2;
	   }
	   if((*wordCounter) == 3){
	     (*extraNumbers) = 3;
	   }
	   if((*wordCounter) == 1){
	     (*extraNumbers) = 0;
	   }
	 }
     if(inputHeap[i] == ' '){
       // cout << "Here2" << endl;
       (*counterOne)++;
     
     if((*counterOne) == (*index)){
       //cout << "Here3" << endl;
       //(*index)++;
       (*counterOne) = -1;
       (*wordCounter) = 0;
       
       // parcedInt =
       return parcedChar;
     }
     else{
       //cout << "Here4" << endl;
       //(*parcedChar) = NULL;
       parcedChar[0] = '\0';
       (*wordCounter) = 0;
     }
     }
   }
   // if(inputHeap[i] == '\0'){
          (*counterOne) = -1;
       (*wordCounter) = 0;

   return parcedChar;
	// }
}
void maxSize(char* inputHeap, int* wordSize){
  for(int i = 0; i < strlen(inputHeap); i++){
         if(inputHeap[i] == ' '){
	   (*wordSize)++;
	 }
  }
}
void PrintHeap(int* sortedHeap, int* counterTwo, int* index){

  while((*counterTwo) != (*index)){
    // cout << (*counterTwo) << endl;
    // cout << 
    cout << sortedHeap[(*counterTwo)] << " ";
      (*counterTwo)++;
  }
  cout << endl;
}
/*
int* SizeofHeap(int* sortedHeap, int* heapSize){
  while(sortedHeap ){
  (*heapSize)++;

  }
  return heapSize;
}
*/
void PrintVisual(int* sortedHeap, int* spaceNumber, int* visualCounter, int* left, int* right, int* rowCounter){
  //(*spaceNumber) = (*spaceNumber) - 1;
  if((*spaceNumber) == 10){
    PrintSpace(spaceNumber);
  }
  //else{
    // PrintSpace(left);
    // }
  else{

     (*spaceNumber) = (*spaceNumber) -1;
     PrintSpace(spaceNumber);
     (*spaceNumber) = (*spaceNumber) +1;
  }

  if((*rowCounter) == 1){
  cout << sortedHeap[(*visualCounter)-1]<< endl;
  }
  else{
    for(int i = 0; i < (*rowCounter); i ++){
	cout << sortedHeap[(*visualCounter)-1];
	(*rowCounter) = (*rowCounter) + 1;
	PrintSpace(rowCounter);
	(*rowCounter) = (*rowCounter) - 1;
	(*visualCounter)++;
    }
	  cout << endl;
  }
  //(*visualCounter)++;
   //(*spaceNumber)--;
   (*left) = (*spaceNumber) - 1;
   (*right) = (*spaceNumber) + 1;
   //(*spaceNumber)--;
   PrintBranch(left, rowCounter);
   cout << endl;
   if((*rowCounter) == 1){
   (*rowCounter)++;
   }
   else{
     (*rowCounter) = (*rowCounter) + 2;
   }
   (*visualCounter)++;
   if((*rowCounter) == 1 || (*rowCounter) == 2 || (*rowCounter) == 4){
   PrintVisual(sortedHeap, left, visualCounter, left, right, rowCounter);
     }
     }
void PrintSpace(int* spaceNumber){
  for(int i = 0; i< (*spaceNumber); i++){
    cout << " ";
  }
  // cout << "e" << endl;
}
void PrintBranch(int* direction, int* rowCounter){
  for(int i = 0; i< (*rowCounter); i++){
    //(*direction) = (*direction) - 1;
  if(i == 0){
    //(*direction) = (*direction) - 1;
    (*direction) = (*direction) + 1 - (*rowCounter);
    PrintSpace(direction);
    (*direction) = (*direction) - 1 + (*rowCounter);
  //(*direction) = (*direction) + 1;
  }
  else{
    //if((*direction) == 9){
    cout << " ";
    // }
  }
  cout << "/";
  //if((*direction) == 9){
  cout << " ";
  //}
  cout << ".";
  //(*direction) = (*direction) + 1;
  // PrintVisual(sortedHeap, spaceCounter, visualCounter, left, right, rowCounter);
  }
  
}
