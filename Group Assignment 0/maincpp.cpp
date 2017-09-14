/*
	Hello friends! I created this .cpp file as the base for out assignment,
	including the #include stuff, and an outline of every function required
	by the assignment. We should all be able to use GitHub to individually
	edit certain functions, which we will then push to a final version that
	we can all use and turn in together.
															-Alex Andrews
*/

#include <iostream>
#include <fstream>
using namespace std;

int examScores[10][5]; //Global variable double-dimensional array for the grades to be read from the file

int main()
{

	return 0;
}

/*
a. This function should read in the grades from your file, and store it in a
   double-dimensional array, which should be a global​ variable​.
*/
void readGrades(string fileName, int numberOfExams, int numOfStudents)
{

}

/*
a. Inside this function, you should accept user input from the keyboard (use cin) in order to
fill the weights[] array with the relative weight of each exam (you may use any values you
like, but they should all add up to 1).
b. Note: You are passing in weights[] by reference​, and therefore any operations performed
on the array will modify whichever array is initially passed into it.*/
void getWeights(double weights[], int numOfExams)
{

}

/*
a. This function should fill the array examAvgs with the average grade scored by all
students on each exam.
b. Note: Again, you are passing in examAvgs[] by reference​, so any modifications inside
the function will modify the array that is initially passed into the function
*/
void getAvgsOfExams(double examAvgs[], int numOfExams, int numOfStudents)
{

}

/*
a. This function should fill studentAvgs[] with the weighted averages of their two exams
*/
void getAvgsOfStudents(double studentAvgs[], double weights[], int numOfExams, int numOfStudents)
{

}

/*
a. Writing to a file titled “finalgrades.txt”​, the student’s grades should be outputted, with
each row followed by its final average, and each exam’s overall average at the bottom of
their corresponding columns.
*/
void writeFinalGrades(double examAvgs[], double studentGrades[], int numOfExams, int numOfStudents)
{

}