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
	cout << "cap: " << cap << "\n";
	str_list a;
	a.resize(cap);
	cout << "size: " << a.size << "\n";
	cout << "capacity: " << a.capacity << "\n";
	return a;
}


// ... put your test functions here (one test function for each 
//     function above) ... 

int main() {
  cout << "~~~Assignment 01~~~\n";
  make_new();

  // ... call your test functions here ...
}
