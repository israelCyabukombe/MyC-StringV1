/********************************************************************
*** NAME : Israel Cyabukombe
*** CLASS : CSc 346
*** ASSIGNMENT : 	4
*** DUE DATE : 3/30/2016
*** INSTRUCTOR : GAMRADT
*********************************************************************
*** DESCRIPTION :-This implement file will implements the a String346 function step by step

				 -It will perform some of the function the C++ string does

				 -use the String346 object to create an instance of a string object and have fun using the implemented
				  functions

				 Example: create String346 object

						  String346 myString1, myString2;
						  myString1.copy("First name ");
						  myString2.copy("Last name ");
						  myString2.view();

						  --experiment other functions--like
						  lessthan
						  equal
						  decrement

*******************************************************************/
//includes
#include<iostream>
#include"cyabukoi4.h"
using namespace std;

using namespace StringNS;

int main() {
	String346 STG1("E");
	String346 S("D");
	String346 STG2(STG1);

	String346 STG3("H");
	String346 STG4("I");

	cout << "--" << STG2.equal(STG1) << "--" << endl;
	cout << STG3.greaterThan(STG4) << endl;
	STG1.view();
	cout << endl;
	STG2.view();
	cout << endl;

	STG2.concat(" ");
	STG2.concat("Cyabukombe");
	STG2.view();

	cout << "\n";
	cout << "Demonstrating Copy" << endl;

	String346 STG5("am");
	String346 STG6("doing am");

	STG5.copy(STG6);
	STG5.view();
	cout << "\n";
	system("Pause");
	return 0;
}