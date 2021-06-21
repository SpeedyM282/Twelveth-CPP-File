#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student{
	private:
		int studentID;
		string studentName;
		double English, informationTechnology, mathematics;
	public:
/*Get and set functions to access data in private block of the class*/			
		Student();
		
		Student(int, string, double, double, double);

		void setStudentID(int studentID);
		
		int getStudentID();
		
		void setStudentName(string studentName);
		
		string getStudentName();
		
		void setEnglish(double English);
		
		double getEnglish();
		
		void setMathematics(double mathematics);
		
		double getMathematics();
		
		void setInformationTechnology(double informationTechnology);
		
		double getInformationTechnology();
/*Get function to calculate total score*/		
		double getTotal();
/*Some conditions to output the correct grade*/		
		string getGrade();
};

#endif

