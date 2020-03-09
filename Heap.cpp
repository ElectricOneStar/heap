#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//char* parce(){
char* parce(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* extraNumbers);
void maxSize(char* inputHeap, int* wordSize);
char* createHeap(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* sortedHeap, int* wordSize, int* counterTwo, int* sortCounter, int* extraNumbers, int* ones, int* twos, int* threes, int* reindex);
void PrintHeap(int* sortedHeap, int* counterTwo, int* index);
void PrintSpace(int* spaceNumber);
void PrintVisual(int* sortedHeap, int* spaceNumber, int* visualCounter, int* left, int* right, int* rowCounter);
void PrintBranch(int* direction, int* rowCounter);
void correctOutput(int* sortedHeap, int* wordCounter, int* maxIndex, int* repitions, int* temp);
void CorrectVisual(int* sortedHeap, int* level, int* n, int* wordSize, int* j);
void MyVisual(int* sortedHeap, int* wordSize, int* n, int* j);
void displayHeap(int* sortedHeap, int length, int count, int i);
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
  int* reindex = new int;
  int* maxIndex = new int;
  (*maxIndex) = 0;
  int* repitions = new int;
  int* temp = new int;
  int* level = new int;
  //void CorrectVisual(int* sortedHeap, int* level);
  int* n = new int;
  int* j = new int;
  (*j) = 0;
  (*n) = 1;
  (*level) = 0;
  (*temp) = 0;
  (*reindex) = 1;
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
      rfile.getline(inputHeap, 500);
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
  createHeap(inputHeap, index, parcedChar, counterOne, wordCounter, sortedHeap, wordSize, counterTwo, sortCounter, extraNumbers, ones, twos, threes, reindex);
  cout << "visual" << endl;
  int length = (*wordSize);
  displayHeap( sortedHeap, length, 0, 1);
  //MyVisual( sortedHeap, wordSize, n, j);
  // CorrectVisual(sortedHeap, level, n, wordSize, j);
  
  //thisVisual();
  (*wordSize) = 1;
  maxSize( inputHeap, wordSize);
  // PrintVisual(sortedHeap, spaceCounter, visualCounter, left, right, rowCounter);
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
 cout << "Output: " << endl;
 correctOutput(sortedHeap, wordSize, maxIndex, repitions, temp);
 return 0;
}
char* createHeap(char* inputHeap, int* index, char* parcedChar, int* counterOne, int* wordCounter, int* sortedHeap, int* wordSize, int* counterTwo, int* sortCounter, int* extraNumbers,  int* ones, int* twos, int* threes, int* reindex){
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
       //  (*ones) = 0;
       //(*twos) = 0;
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
     //(*ones) = 0;
     // (*twos) = 0;
     //(*threes) = 0;
       parcedChar[1] = ' ';
       parcedChar[2] = ' ';
     (*extraNumbers) = 0;
     }
     else{
       //sortedHeap[(*index)] = sortedHeap[(*sortCounter)];
   sortedHeap[(*index)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';
     }
   
   //sortedHeap[(*index)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
 }
 
 else{
   (*reindex) = (*index);
   (*sortCounter) = (*index);
   cout << (*sortCounter) << endl;
   // cout << sortedHeap[(*sortCounter)-1] << endl;
      cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;
       parcedChar[1] = '\0';
      while((*extraNumbers) == 0 && sortedHeap[(*sortCounter)/2-1] < (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48 && (*sortCounter) != 1){
	(*sortCounter) = (*sortCounter) / 2;
	sortedHeap[(*reindex)-1] = sortedHeap[(*sortCounter)-1];
       sortedHeap[(*sortCounter)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';
     (*reindex) = (*reindex)/2;
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
	 while((*extraNumbers) == 2 && sortedHeap[(*sortCounter)/2-1] < (*ones) + (*twos) && (*sortCounter) != 1){
	   (*sortCounter) = (*sortCounter) / 2;
	   //  if((*extraNumbers) == 2){
     cout << "2num" << endl;
     //parcedChar[2] = '\0';
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*10;
     cout << "ones" << (*ones) << endl;
     (*twos) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48;
     cout << "twos" << (*twos) << endl;
     sortedHeap[(*reindex)-1] = sortedHeap[(*sortCounter)-1];
     sortedHeap[(*sortCounter)-1] = (*ones) + (*twos);
     //       (*ones) = 0;
     // (*twos) = 0;
       (*reindex) = (*reindex)/2;
       // }
	 }
	 // (*ones) = 0;
	 //(*twos) = 0;

	 while((*extraNumbers) == 3 && sortedHeap[(*sortCounter)/2-1] < (*ones) + (*twos) + (*threes) && (*sortCounter) != 1){
	     (*sortCounter) = (*sortCounter)/2;
	     //    if((*extraNumbers) == 3){
     cout << "3num" << endl;
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*100;
	  //cout << "ones" << (*ones) << endl;
	  (*twos) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48)*10;
     (*threes) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[2]-48;
          sortedHeap[(*reindex)-1] = sortedHeap[(*sortCounter)-1];
	  //cout << "twos" << (*twos) << endl;
     sortedHeap[(*sortCounter)-1] = (*ones) + (*twos) + (*threes);
     //       (*ones) = 0;
     // (*twos) = 0;
     // (*threes) = 0;
       (*reindex) = (*reindex)/2;
       //}
	 }
	 //     (*ones) = 0;
	 //(*twos) = 0;
	 // (*threes) = 0;

	 if((*index) == (*sortCounter)){
	   	     if((*extraNumbers) == 3){
     cout << "3num" << endl;
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*100;
	  //cout << "ones" << (*ones) << endl;
	  (*twos) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48)*10;
     (*threes) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[2]-48;
     //  sortedHeap[(*index)-1] = sortedHeap[(*sortCounter)-1];
	  //cout << "twos" << (*twos) << endl;
     sortedHeap[(*sortCounter)-1] = (*ones) + (*twos) + (*threes);
     //(*ones) = 0;
     // (*twos) = 0;
     // (*threes) = 0;
	     }
		     else if((*extraNumbers) == 2){
     cout << "2num" << endl;
     //parcedChar[2] = '\0';
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*10;
     cout << "ones" << (*ones) << endl;
     (*twos) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48;
     cout << "twos" << (*twos) << endl;
     //sortedHeap[(*index)-1] = sortedHeap[(*sortCounter)-1];
     sortedHeap[(*sortCounter)-1] = (*ones) + (*twos);
     //(*ones) = 0;
     // (*twos) = 0;
		     }
		     else{
		       //	sortedHeap[(*index)-1] = sortedHeap[(*sortCounter)-1];
       sortedHeap[(*sortCounter)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';

		     }
		     
	 }

	 
	 (*extraNumbers) = 0;

      // while((*extraNumbers) == 3 && sortedHeap[(*sortCounter)-1] < (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumber != 0){
      //(*sortCounter)--;
      // }

   //      cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;

	 //cout << "count"<< (*sortCounter) << endl;
   //for(int i = (*index)-1; i != (*sortCounter); i--){
   // sortedHeap[i] = sortedHeap[i-1];
   //}
   //   cout << "Useless" << parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers) << endl;
	 /*
	 if((*extraNumbers) == 2){
     cout << "2num" << endl;
     //parcedChar[2] = '\0';
     (*ones) = ((int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[0]-48)*10;
     cout << "ones" << (*ones) << endl;
     (*twos) = (int)parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers)[1]-48;
     cout << "twos" << (*twos) << endl;
     sortedHeap[(*index)-1] = sortedHeap[(*sortCounter)-1];
     sortedHeap[(*sortCounter)-1] = (*ones) + (*twos);
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
          sortedHeap[(*index)-1] = sortedHeap[(*sortCounter)-1];
	  //cout << "twos" << (*twos) << endl;
     sortedHeap[(*sortCounter)-1] = (*ones) + (*twos) + (*threes);
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
            sortedHeap[(*index)-1] = sortedHeap[(*sortCounter)-1];
       sortedHeap[(*sortCounter)-1] = (int)(*parce(inputHeap, index,  parcedChar, counterOne, wordCounter, extraNumbers))-48;
     parcedChar[1] = ' ';
     parcedChar[2] = ' ';

     }
	 */
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
void correctOutput(int* sortedHeap, int* wordCounter, int* maxIndex, int* repitions, int* temp){
  //PrintHeap( sortedHeap, maxIndex, wordCounter);
  //  cout << (*wordCounter) << endl;
  //cout << (*maxIndex) << endl;
  for(int i = 0; i < (*wordCounter); i++){
    //f (i !=(*maxIndex) - 1 && sortedHeap[i] < sortedHeap[i+1]){
    if(i != (*wordCounter) - 1 && sortedHeap[(*maxIndex)] < sortedHeap[i+1]){
    (*maxIndex) = i + 1;
    //cout << "there" << endl;
    }
  }
  //cout << "max Index: "<< (*maxIndex) << endl;
  //  cout << (*maxIndex) << endl;
  cout << sortedHeap[(*maxIndex)] << " ";
 
  if((*maxIndex) != (*wordCounter)-1){
    //temp) = sortedHeap[(*wordCounter)-1];
    //rtedHeap[(*wordCounter)-1];
    sortedHeap[(*maxIndex)] = sortedHeap[(*wordCounter)-1];
    //cout << "here" << endl;
  
  }
  sortedHeap[(*wordCounter)-1] = 0;
 
  (*wordCounter)--;
  //intHeap( sortedHeap, c         , wordCounter);
  if((*wordCounter) == 1){
     cout << sortedHeap[(*wordCounter)-1] << endl;
    //  cout << "here1" << endl;
    return;
  }
(*maxIndex) = 0;

//cout << "here3" << endl;
// PrintHeap( sortedHeap, maxIndex, wordCounter);
correctOutput(     sortedHeap,      wordCounter,      maxIndex,      repitions,      temp);
 
 }
void CorrectVisual(int* sortedHeap, int* level, int* n, int* wordSize, int* j){
  //cout << "here" << endl;
  if((*n) == 1){
      cout << sortedHeap[(*n)-1] << endl;
  }
  if((*n)*2 + 1 <= (*wordSize)){
  (*level)++;
  (*n) = (*n)*2 + 1;
  // cout << "here1" << endl;
  ///cout << endl;
  CorrectVisual(sortedHeap, level, n, wordSize, j);
  }
  for(int i = 0; i < (*level); i++){
    cout << '\t';
  }
  // cout << "here2" << endl;
  cout << sortedHeap[(*n)-1];
  //(*n) = (*j);
  // for(int i = 0; i < (*level); i++){
    cout << endl;
    //  (*n) = (*n)/2;
    // }
  
  //cout <<
  //cout << "here3" << endl;
  if((*n)*2 <= (*wordSize)){
    (*level)++;
  //Print(, level)
  (*n) = (*n)*2;
  //cout << "here4" << endl;
  CorrectVisual(sortedHeap, level, n, wordSize, j);
  }
    //if(){
    if((*j)  != (*wordSize)){
      //cout << endl;
      (*n) = 1 + (*j);
    (*j)++;
    /*
    cout << "data" << endl;
    cout << (*n);
    cout << (*wordSize);
      cout << (*j);
    */
CorrectVisual(sortedHeap, level, n, wordSize, j);
    }
      }
void MyVisual(int* sortedHeap, int* wordSize, int* n, int* j){
  int* left = new int;
    (*left) = 2*(*n);
    int* right = new int;
    (*right) = 2*(*n)+1;
  if((*right) <= (*wordSize)){
    (*j) = (*j) + 1;
    MyVisual( sortedHeap, wordSize, right, j);
  }
  // int* current = new int;
  //(*current) = (*j);
  /*
  while((*j) > 0){
    cout << "    ";
      (*j)--;
      }
  */
   for(int i = 0; i < (*j); i++){
    cout << '\t';
  }
  cout << sortedHeap[(*n)-1] << endl;
  if((*left) <= (*wordSize)){
    //(*current) = (*current) + 1;
    (*j) = (*j) + 1;
    MyVisual( sortedHeap, wordSize, left, j);

  }
  // int* current = new int
}
void displayHeap(int* sortedHeap, int length, int count, int i){
  int left = 2*i;
  int right = 2*i+1;
  if(right <= length){
    displayHeap(sortedHeap, length, count+1, right);
  }
  int current = count;
  while(count > 0){
    cout << "    ";
    count--;
  }
  cout << sortedHeap[i-1] << endl;
  if(left <= length){
    displayHeap(sortedHeap, length, current + 1, left);
  }
}
