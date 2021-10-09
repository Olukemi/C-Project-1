
#include "Questions.h"



int Q1_for(){
	int sum = 0;
	int num;

	// calculate your sum below..this has to use for loop

	// loop through each number from 30 to 1000
	for (num = 30; num <= 1000; num++){
		// if the reminder of the current number divided by 4 is 0 then add number to current sum
		if (num % 4 == 0) {
			sum += num; // sum = sum + num
		}
	}


	// here, we return the calculated sum:
	return sum;
}
int Q1_while(){
	int sum = 0;
	int num = 30; //initialize number

	// calculate your sum below..this has to use while loop

	// loop through while each number is less than 1000
	while (num <= 1000){
		// if the reminder of the current number divided by 4 is 0 then add number to current sum
		if (num % 4 == 0) {
			sum += num; // sum = sum + num
		}
		num++;
	}


	// here, we return the calculated sum:
	return sum;
}
int Q1_do(){
	int sum = 0;
	int num = 30; //initialize number

	// calculate your sum below..this has to use do-while loop
	do {
		// if the reminder of the current number divided by 4 is 0 then add number to current sum
		if (num % 4 == 0) {
			sum += num; // sum = sum + num
		}
		num++;

	} while (num <= 1000); // continue to loop while each number is less than 1000


	// here, we return the calculated sum:
	return sum;
}
//===============================================================================================
int Q2(int Q2_input){
	
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit;
	int length = 0; // initialize and set length equal to 0

	// Do your coding below to check

	// while input is not equal to zero continue to loop and stop once input equals to zero
	while (Q2_input != 0){
		// divide input each time by 10 because digits are written in base 10 (log10)
		// the number of divisions while input >=  1 is the length of the integer
		Q2_input /= 10;
		length++; // add 1 to length each time it's divided by 10
	}

	// if length is 5 then IsFiveDigit is flagged and set to 1, else IsFiveDigit is set to 0
	if (length == 5){
		IsFiveDigit = 1;
	} else {
		IsFiveDigit = 0;
	}


	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}
//===============================================================================================
int Q3(float Q3_input){
	
	/* Question 3: 
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89, 
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program shouldreturn -1
*/	
	// this is the varaible that holds the out value to return
	float GPA;
	
	
	// Do your coding below to calculate the GPA variable value
	
	 if (Q3_input >= 90 && Q3_input <= 100){
		 GPA = 4; // 4 if the Q3_input is in the range 90-100
	 } else if (Q3_input >= 80 && Q3_input <= 89){
		 GPA = 3; // 3 if it is in the range 80-89
	 } else if (Q3_input >= 70 && Q3_input <= 79){
		 GPA = 2; // 2 if it is in the range 70-79
	 } else if (Q3_input >= 60 && Q3_input <= 69){
		 GPA = 1; // 1 if it is in the range 60-69
	 } else if (Q3_input >= 0 && Q3_input <= 59){
		 GPA = 0; // 0 if the Q3_input is between 0 and 59
	 } else if (Q3_input < 0 || Q3_input > 100){
		 GPA = -1; // if the Q3_input is not in the range 0-100, return -1
	 } else {
		 GPA = 5; //if (59 > GPA < 60), (69 > GPA < 70), (79 > GPA < 80), (89 > GPA < 90), return 5
	 }
	
	
	// finally, we return the GPA
	return GPA;	
}
//===============================================================================================
double Q4(int Q4_input){
	
	// this is the variable that holds the pi value to return
	double pi = 0.0;
	int term = 1; // initialize the starting term
	double d = 1.0; // initialize denominator starting at 1
	double n = 4.0; // set the constant numerator as 4
	
	
	// Do your coding below to calculate the pi value
	if (Q4_input >= term){
		while (term <= Q4_input) {
			pi += n/d; // add constant numerator divided by changing denominator to "pi"
			d += 2.0; // add 2 to denominator
			n *= -1; // change the sign of numerator before looping
			term++;
		}
	} else {
		pi = 0;
	}


	   
	// finally, we return the pi value
	return pi;	
}
//===============================================================================================
int Q5(){
	
	// this is the variable that holds and the total number of triples to return at the end of the function
	int totNumTribles = 0;
	
	
	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/
	for (int c = 1; c <= 400; c++){ // loops through numbers no larger than 400 (hypotenuse)
		for (int b = 1; b < c; b++){ // loops through numbers less than c (side 2)
			for (int a = 1; a <= b; a++){ // loops through numbers less than and equal to b (side 1)
				if (a*a + b*b == c*c){ // if pythagorean theorem is true for values a,b and c no larger than 400
					totNumTribles++; // increase counter by 1
		        }
		    }
		}
	}

	
	//finally you should return the total number of tribles.
	return totNumTribles;
}
//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	
	
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts = 0;


		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	    if (Q6_input <= 0){
	    	counts = 0;
	    } else {
	    	for (int num = 1; num <= Q6_input; num++){ //loop through each number from 1 to Q6_input
	    		int sum = 0; // reset sum to 0 for next number
	    		for (int factor = 1; factor < num; factor++){ // loop through each number less than given number to find factors
	    			if (num % factor == 0){ // check if it's a factor
	    				sum += factor; // if a factor, add to sum
	    			}
	    		}
	    		if (sum == num){ // if the sum is equal to the given number
	    			perfect[counts] = num; // add number to array
	    		    counts++; // increase counts by 1
	    		}
	    	}

	    }


	   return counts;

	
}
//===============================================================================================
int Q7a(int Q7_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt = 0;
	int r; // initialize remainder
	
	
	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer

	if (Q7_input >= 0){
		for(int i = 0; i < 7; i++){ // loop for 7 times because it's a 7 digit
			r = Q7_input % 10; // the remainder of "portion" of Q7_input
			reversedInt = (reversedInt * 10) + r; // add the remainder to the current tense of the reversed integer so far
			Q7_input = Q7_input / 10; // Q7_input becomes one less tense than before (i.e 232 becomes 23)
		}
	} else {
		reversedInt = 0;
	}

	return reversedInt;
	
}
int Q7b(int Q7b_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt = 0;
	int r; // initialize remainder
	
	

	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits
	if (Q7b_input >= 0){
		while(Q7b_input != 0){ // loop for as long as the number is not equal to 0 (n-digit --> loops n times)
			r = Q7b_input % 10; // the remainder of "portion" of Q7_input
			reversedInt = (reversedInt * 10) + r; // add the remainder to the current tense of the reversed integer so far
			Q7b_input = Q7b_input / 10; // Q7_input becomes one less tense than before (i.e 232 becomes 23)
		}
	} else {
		reversedInt = 0;
	}

	
	return reversedInt;

	
	
	
}
