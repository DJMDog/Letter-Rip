/*************************************
* AUTHOR	: Madison Stowe
 * STUDENT	: 1062751
 * LAB #0	: Eclipse Lab
 * CLASS	: CS1A
 * SECTION	: MTWTH 10AM-1:35PM
 * DUE DATE	: 6/18/2018
**************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

/********************************************************
*						SWITCH SWITCH
*
*********************************************************
* This program takes two integer inputs from the user
* and either +, -, *, or / them and gives the remainder
* if the user inputs an invalid operator or tries to
* divide by 0 then an error message will appear.
*********************************************************
*INPUT:
*	i: 		This acts as my loop counter
*	num1:	The first integer input from user
*	num2:	The second integer input from user
*	math:	The input of the operator from user
*OUTPUT:
*	remain:	The remainder of division operations
*	result: The result of an operation
********************************************************/

// Documentation that goes here will be discussed later
int main()
{
	/******************************************************
	 * CONSTANTS
	 * ---------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * ---------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number
	 * LAB_NAME		: Title of the Lab
	 *****************************************************/
	const char PROGRAMMER[30]	= "Madison Stowe";
	const char CLASS[5]			= "CS1A";
	const char SECTION[25]		= "MWTTH: 10:00a - 1:35p";
	const char LAB_NUM[] 		= "5a";
	const char LAB_NAME[17]		= "SWITCH SWITCH";

	//OUTPUT - Class Heading
	cout << left;
	cout << "************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n************************************************\n\n";
	cout << right;


	//int letter;
		int stop;
		string instring;
		string outstring;
		int i;



	//Get user input
		cout << "Please enter the letters you would like to convert: " << endl;
		cout << "To exit the program enter a # " << endl;

		cin >> instring;

	outstring = "";

	getline(cin, instring);

	for(unsigned int i = 0; i<instring.length(); i++){
		outstring += toupper(instring[i]);
	}


//While loop with sentinel. While not the sentinel

	While(stop!='#'){
//if too short tell user, get input, and continue if too long
		if(outstring<8){
			cout << "The input is too short. Please enter an input that is 7 letters or higher";
			cin >> instring;

				getline(cin, instring);

				for(unsigned int i = 0; i<instring.length(); i++){
					outstring += toupper(instring[i]);
				}
		if(outstring>8)
			cout << "The input is too long. Only the first 7 letters will be converted"
				 << endl;
		}
//for loop for each character to be processed
		for(i=0;i<outstring.length();i++){
			switch(outstring[i])

			case'A':
			case'B':
			case'C':
				outstring[i]=2;
				break;
			case'D':
			case'E':
			case'F':
				outstring[i]=3;
				break;
			case'G':
			case'H':
			case'I':
				outstring[i]=4;
				break;
			case'J':
			case'K':
			case'L':
				outstring[i]=5;
				break;
			case'M':
			case'N':
			case'O':
				outstring[i]=6;
				break;
			case'P':
			case'Q':
			case'R':
			case'S':
				outstring[i]=7;
				break;
			case'T':
			case'U':
			case'V':
				outstring[i]=8;
				break;
			case'W':
			case'X':
			case'Y':
			case'Z':
				outstring[i]=9;
				break;
			case'0':
				outstring[i]=0;
				break;
			case'1':
				outstring[i]=1;
				break;
			case'2':
				outstring[i]=2;
				break;
			case'3':
				outstring[i]=3;
				break;
			case'4':
				outstring[i]=4;
				break;
			case'5':
				outstring[i]=5;
				break;
			case'6':
				outstring[i]=6;
				break;
			case'7':
				outstring[i]=7;
				break;
			case'8':
				outstring[i]=8;
				break;
			case'9':
				outstring[i]=9;
				break;
			default:
					cout << "Error! Invalid character in input" << endl;
		}
	//insert a - at the right place

		cout << outstring << endl;

//if valid output number, otherwise output error




	}

	return 0;
}
