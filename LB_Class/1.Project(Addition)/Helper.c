/////////////////////////////////////////////
//
// Function name : Additon
// Input :         Integer, Integer
// Output :        Interger
// Description :   It used to add 2 numbers
// Auther :        Shrikant Rajendra Khatavkar
// Date :          31/08/2021
//
///////////////////////////////////////////
/*
    Algorithm
    START
	Accept first number as NO1
        Accept second number as NO2
        Perform addition of NO1 & NO2
        Store the result in RET
        Return the value of RET
   STOP
*/
#include"Header.h"
int Addition(
              int iNo1,   // First input argument
              int iNo2    // Second input argument
             )
{
  int iResult = 0;       // Local variable to store result
  iResult = iNo1 + iNo2;
  return iResult;        // Return the value to the caller

}