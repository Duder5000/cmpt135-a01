// a1.cpp

/////////////////////////////////////////////////////////////////////////
//
// Student Info
// ------------
//
// Name : Alexander Soames
// St.# : 301 292 794
// Email: asoames@sfu.ca
//
//
// Statement of Originality
// ------------------------
//
// All the code and comments below are my own original work. For any non-
// original work, I have provided citations in the comments with enough detail
// so that someone can see the exact source and extent of the borrowed work.
//
// In addition, I have not shared this work with anyone else, and I have not
// seen solutions from other students, tutors, websites, books, etc.
//
/////////////////////////////////////////////////////////////////////////

//Only str_list I was able to find https://rextester.com/LPIH38171

#include "a1.h"
#include "cmpt_error.h"
#include <iostream>      // no other #includes are allowed
#include <fstream>       // for this assignment
#include <string>
#include <cassert>

using namespace std;

// ... write your functions here ...
str_list make_new(int cap = 5){
	str_list a;
	a.size = 0;
	a.capacity = cap;
	
	cout << "cap: " << cap << ", a.size: " << a.size << ", a.capacity: " << a.capacity << "\n";
	return a;
}

void deallocate(str_list& arr){
	//http://www.cplusplus.com/reference/new/operator%20delete[]/

	delete[] arr;
	arr = nullptr;
}

// ... put your test functions here (one test function for each 
//     function above) ... 

int main() {
  cout << "~~~Assignment 01~~~\n";

  str_list *apple = new str_list[0];
  delete[] apple;
  apple = nullptr;

  str_list *banana = new str_list[0];
  banana = make_new(50);
  deallocate(banana);
  delete[] banana;
  banana = nullptr;

  // ... call your test functions here ...


}
