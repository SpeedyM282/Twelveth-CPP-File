/*
Name: Akhadbek Rizakulov
ID: 2010227
First Date: 20.02.2021
Editing date: 27.02.2021
*/

#include<iostream>
#include<string>
#include<iomanip>
#include"Student.h"
#include"Student.cpp"
using namespace std;


int main(){
	int studentID_1;
	
	string studentName_1;
	
	double English_1, informationTechnology_1, mathematics_1; 
	
/*Input functions to take name, id and scores from user*/	
	cout << setfill('-') << setw(45) << "\n";
	
	cout << "\t\t Name and ID\n";
	
	cout << setfill('-') << setw(45) << "\n\n";
	
	cout << "Please enter your name: ";
	
	getline(cin, studentName_1);
	
	cout << "Please enter your ID: ";
	
	cin >> studentID_1;
	
	cout << "\n";
	
	cout << setfill('-') << setw(45) << "\n";
	
	cout << "\t\t Input Scores\n";
	
	cout << setfill('-') << setw(45) << "\n\n";
	
	cout << "Please enter your score from English: ";
	
	cin >> English_1;
	
	cout << "Please enter your score from IT: ";
	
	cin >> informationTechnology_1;
	
	cout << "Please enter your score from Math: ";
	
	cin >> mathematics_1;
	
	cout << "\n";
/*Output functions to show collected data*/	
	cout << setfill('-') << setw(45) << "\n";
	
	cout << "\t\t Data\n";
	
	cout << setfill('-') << setw(45) << "\n\n";
	
	//Student myObj1();
	
	Student myObj(studentID_1, studentName_1, English_1, informationTechnology_1, mathematics_1);

	cout << "Name: " << myObj.getStudentName() << endl;

	cout << "ID: " << myObj.getStudentID() << endl;

	cout << "English score: " << myObj.getEnglish() << endl;

	cout << "IT score: " << myObj.getInformationTechnology() << endl;

	cout << "Math score: " << myObj.getMathematics() << "\n\n";
	
	cout << setfill('-') << setw(45) << "\n\n";
	
	cout << "Total score: " << myObj.getTotal() << "\n\n";
	
	cout << setfill('-') << setw(45) << "\n\n";
	
	cout << "Grade: " << myObj.getGrade() << "\n\n";
	
	cout << setfill('-') << setw(45) << "\n\n";
	
	system("pause");
	return 0;
}
