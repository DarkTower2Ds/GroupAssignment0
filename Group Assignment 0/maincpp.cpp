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

//Prototypes of functions
void readGrades(string fileName, int numberOfExams, int numOfStudents);
void getWeights(double weights[], int numOfExams);
void getAvgsOfExams(double examAvgs[], int numOfExams, int numOfStudents);
void getAvgsOfStudents(double studentAvgs[], double weights[], int numOfExams, int numOfStudents);
void writeFinalGrades(double examAvgs[], double studentGrades[], int numOfExams, int numOfStudents);

int examScores[10][5]; //Global variable double-dimensional array for the grades to be read from the file

int main()
{
	//Declare and Initialize variables
	int numberOfExams = 5;
	int numOfStudents = 10;
	double weights[5] = { 0 };
	double examAvgs[5] = { 0 };
	double studentGrades[10] = { 0 }; //I believe that studentAvgs and studentGrades on the edited assignment refer to one array, so that's what this is

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 5; j++)
			examScores[i][j] = 0;
	getAvgsOfStudents(studentGrades, weights, numberOfExams, numOfStudents);
	writeFinalGrades(examAvgs, studentGrades, numberOfExams, numOfStudents);

	system("pause");
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
   on the array will modify whichever array is initially passed into it.
*/
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
	//Nested for-loops iterate through examScores by student and exam
	//Within the for-loops, the average of each student is calculated using the appropriate weight
	for (int student = 0; student < numOfStudents; student++)
		for (int exam = 0; exam < numOfExams; exam++)
			studentAvgs[student] += (examScores[student][exam] * weights[exam]);
}

/*
a. Writing to a file titled “finalgrades.txt”​, the student’s grades should be outputted, with
   each row followed by its final average, and each exam’s overall average at the bottom of
   their corresponding columns.
*/
void writeFinalGrades(double examAvgs[], double studentGrades[], int numOfExams, int numOfStudents)
{
	ofstream finalGrades; //output stream for file containing the final grades
	finalGrades.open("D:\\Comp Sci\\finalgrades.txt"); //This path is specific to MY desktop computer and WILL NOT work unless you have a D: drive with a Comp Sci folder on your computer as well. Be sure to change this while testing.
	//Check if there was an error creating finalgrades.txt and exit if an error occured
	if (finalGrades.fail())
	{
		cout << "Error: failed to create finalgrades.txt" << endl;
		system("pause");
		exit(1);
	}

	//Creates a simple header along the top of the file. Probably unnecessary and definitely removeable
	for (int i = 0; i < numOfExams; i++)
		finalGrades << "Exam " << i << "\t";
	finalGrades << "Grade" << endl;

	//for-loop iterates through the rows of students
	for (int student = 0; student < numOfStudents; student++)
	{
		//for-loop iterates through the columns of exams
		for (int exam = 0; exam < numOfExams; exam++)
			finalGrades << examScores[student][exam] << "\t"; //Ouputs the scores of each exam into finalgrades.txt

		//Ouputs the students average after their exam scores in finalgrades.txt
		finalGrades << studentGrades[student] << endl; //ends line after printing in preperation for next student
	}

	//This is another formatting thing to separate the students' grades and averages from the averages on the individual exams. This line can be removed
	finalGrades << "===============================================" << endl;
	
	//Outputs the averages of each exam  in finalgrades.txt
	for (int exam = 0; exam < numOfExams; exam++)
		finalGrades << examAvgs[exam] << "\t";

	//Close finalgrades.txt
	finalGrades.close();
}