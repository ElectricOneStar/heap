#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//char* parce(){
char* parce(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter);
void maxSize(char* inputHeap, int* wordSize);
char* createHeap(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* sortedHeap, int* wordSize, int* counterTwo);
void PrintHeap(int* sortedHeap, int* counterTwo, int* index);
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
   createHeap(inputHeap, index, parcedChar, counterOne, wordCounter, sortedHeap, wordSize, counterTwo);

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
  //cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter);
  //cout << ".";
  return 0;
}
char* createHeap(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* sortedHeap, int* wordSize, int* counterTwo){
  cout << "BUILD THE HEAP" << endl;
  cout << (*wordSize) << endl;
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
 cout << (*index) << endl;
  sortedHeap[(*index)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter))-48;
 cout << parce(inputHeap, index,  parcedChar, counterOne, wordCounter) << endl;
 //(*counterOne) = 0;
 //(*wordCounter) = 0;
 // sortedHeap[(*index)] = 1;
       cout << "tree: ";
      PrintHeap( sortedHeap, counterTwo, index);
      (*counterTwo) = 0;
      
        cout << (*wordSize) << endl;
 (*index)++;
 cout << (*index) << endl;
    }
}
char* parce(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter){
  (*counterOne) = 0;
   for(int i = 0; i < strlen(inputHeap); i++){
     // cout << "Here" << endl;
      //      if(inputHeap[i] == '\0'){
      //   return parcedChar;
      // }
         if(inputHeap[i] != ' '){
	   parcedChar[(*wordCounter)] = inputHeap[i];
	   //	   cout << "HereThere" << endl;
	   (*wordCounter)++;
	   
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