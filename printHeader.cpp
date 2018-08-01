#include "printHeader.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <stdlib.h>
using namespace std;

/**********************************************************
*
* FUNCTION PrintHeader
*_________________________________________________________
* This function receives an assignment name, type
* and number then outputs the appropriate header -
* returns nothing.
*_________________________________________________________
* POST-CONDITIONS
* This function will output the class heading.
* <Post-conditions are the changed outputs either
* passed by value or by reference OR anything affected
* by the function>
***********************************************************/
void printHeader (string LabName,	//IN - lab name
				  string labNumber);//IN - lab number




void printHeader (string LabName, string labNumber){


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
		const char LAB_NUM[] 		= "6b";
		const char LAB_NAME[30]		= "STAY IN SHAPE";

		//OUTPUT - Class Heading
		cout << left;
		cout << "************************************************";
		cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
		cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
		cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
		cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
		cout << "\n************************************************\n\n";
		cout << right;

}



