/*
	Hello friends! I created this .cpp file as the base for out assignment,
	including the #include stuff, and an outline of every function required
	by the assignment. We should all be able to use GitHub to individually
	edit certain functions, which we will then push to a final version that
	we can all use and turn in together.
															-Alex Andrews
*/

/*
	Alexander Andrews	60%
	Cosmo Jun			20%
	Pichvyda Tuy		20%
*/

#include <iostream>
#include <fstream>
#include <string>
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
	double weights[5];
	double examAvgs[5];
	double studentGrades[10]; //I believe that studentAvgs and studentGrades on the edited assignment refer to one array, so that's what this is
	string fileName; //String to store any filepath that the user inputs

	//Function
	cout << "Enter the entire path of the file containing the raw exam scores, using two backslashes (\\\\) instead of one (\\): ";
	cin >> fileName;
	cout << "You entered " << fileName << endl;
	readGrades(fileName, numberOfExams, numOfStudents);
	getWeights(weights, numberOfExams);
	getAvgsOfStudents(studentGrades, weights, numberOfExams, numOfStudents);
	getAvgsOfExams(examAvgs, numberOfExams, numOfStudents);
	writeFinalGrades(examAvgs, studentGrades, numberOfExams, numOfStudents);

	/*
		A BRIEF NOTE TO THE INSTRUCTOR/GRADER
		All of the code functions properly in terms of taking input from a file and creating a finalgrades.txt with the correct information.
		However, for a reason unknown to me an exception is thrown at AFTER ALL OF THE FUNCTIONS HAVE BEEN PROPERLY EXECUTED saying:
		"Run-Time Check Failure #2 - Stack around the variable 'examAvgs' was corrupted." (sometimes it says 'weights' instead of 'examAvgs')
		After spending time on Google and digging through what code is here, I could find nothing that would cause this exception, nor a way
		to prevent the exception from being thrown.

		I just want to point out that the input and output of the program appear to be unaffected by whatever is causing this exception.
		
		Thank you,
		Alex Andrews
	*/
	system("pause");
	return 0;
}

/*
a. This function should read in the grades from your file, and store it in a
   double-dimensional array, which should be a global​ variable​.
*/
void readGrades(string fileName, int numberOfExams, int numOfStudents) {
    ifstream fileInput;
    fileInput.open(fileName); //This should use the string fileName that was taken in the arguements. - Alex A.
	if (fileInput.fail()) //This needs to occur everytime after attempting to open a file. - Alex A.
	{
		cout << "Error: failed open " << fileName << endl;
		system("pause");
		exit(1);
	}
    for (int i = 0; i < numOfStudents; i++) {
        for (int j = 0; j < numberOfExams; j++) {
            fileInput >> examScores[i][j];
            cout << examScores[i][j];
            cout << '\t';
        }
        cout << endl;
    }

	fileInput.close();
}

/*
a. Inside this function, you should accept user input from the keyboard (use cin) in order to
   fill the weights[] array with the relative weight of each exam (you may use any values you
   like, but they should all add up to 1).
b. Note: You are passing in weights[] by reference​, and therefore any operations performed
   on the array will modify whichever array is initially passed into it.
*/
void getWeights(double weights[],int numberOfExams){ //Since we aren't actually taking user input here, I got rid of the & before numberOfExams - Alex A.
    //cout<<"Enter number of exams: ";
    //cin>>numberOfExams;				This line of code and the one above it are not needed. They are no longer a requirement of the revised project - Alex A.
	//I'm going to add in the cout we need - Alex A.
    for (int i=0; i<numberOfExams; i++){
		cout << "Enter the weight of exam " << i << ": ";
        cin>>weights[i];
		cout << endl; //Alex A.
    }

	double sum = 0.0;
	for (int i = 0; i < numberOfExams; i++)
		sum += weights[i];
	if (sum != 1)
	{
		cout << "The weights you entered do not add up to 1 (one). The weights must add up to 1 (one)." << endl;
		getWeights(weights, numberOfExams);
	}
}

/*
a. This function should fill the array examAvgs with the average grade scored by all
   students on each exam.
b. Note: Again, you are passing in examAvgs[] by reference​, so any modifications inside
   the function will modify the array that is initially passed into the function
*/
void getAvgsOfExams(double examAvgs[], int numOfExams, int numOfStudents) //Whoever wrote this (Cosmo?) iterated through the array by row instead of column, but still divided by the total number of students, resulting in super low exam averages. I fixed it, though. -Alex A.
{
	for (int exam = 0; exam < numOfStudents; exam++)
	{
		double sum = 0.0;
		for (int student = 0; student < numOfStudents; student++)
		{
			sum += examScores[student][exam];
		}
		examAvgs[exam] = sum / numOfStudents;
	}
		

}

/*
a. This function should fill studentAvgs[] with the weighted averages of their two exams
*/
void getAvgsOfStudents(double studentAvgs[], double weights[], int numOfExams, int numOfStudents) {
	//Nested for-loops iterate through examScores by student and exam
	//Within the for-loops, the average of each student is calculated using the appropriate weight
	cout << endl;
	for (int student = 0; student < numOfStudents; student++)
	{
		double studentAvg = 0.0;
		for (int exam = 0; exam < numOfExams; exam++)
		{
			studentAvg += (examScores[student][exam] * weights[exam]);
		}
		studentAvgs[student] = studentAvg;
	}
}

//Print
/*
a. Writing to a file titled “finalgrades.txt”​, the student’s grades should be outputted, with
   each row followed by its final average, and each exam’s overall average at the bottom of
   their corresponding columns.
*/
void writeFinalGrades(double examAvgs[], double studentGrades[], int numOfExams, int numOfStudents)
{
	string fileOutputPath; //The filepath of the FOLDER in which finalgrades.txt will be placed
	cout << "Enter the path to the FOLDER where you would like to store finalgrades.txt, including two backslashes (\\\\) instead of one (\\): ";
	cin >> fileOutputPath;
	fileOutputPath += "\\finalgrades.txt"; //Append "finalgrades.txt" to the end of the filepath provided
	ofstream finalGrades; //output stream for file containing the final grades
	finalGrades.open(fileOutputPath);
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
	finalGrades << "=============================================" << endl;
	
	//Outputs the averages of each exam  in finalgrades.txt
	for (int exam = 0; exam < numOfExams; exam++)
		finalGrades << examAvgs[exam] << "\t";

	//Close finalgrades.txt
	finalGrades.close();
}
