#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

Student::Student(){
	studentID = 0; 
	studentName = "my"; 
	English = 0.0; 
	mathematics = 0.0;
	informationTechnology = 0.0;
}
		
Student::Student(int studentID_1, string studentName_1, double English_1, double mathematics_1, double informationTechnology_1){
	setStudentID(studentID_1); 
	setStudentName(studentName_1); 
	setEnglish(English_1); 
	setMathematics(mathematics_1);
	setInformationTechnology(informationTechnology_1);
}

void Student::setStudentID(int studentID_2){
	studentID = studentID_2;
}
int Student::getStudentID(){
	return studentID;
}
void Student::setStudentName(string studentName_2){
	studentName = studentName_2;
}
string Student::getStudentName(){
	return studentName;
}
void Student::setEnglish(double English_2){
	English = English_2;
}	
double Student::getEnglish(){
	return English;
}	
void Student::setMathematics(double mathematics_2){
	mathematics = mathematics_2;
}	
double Student::getMathematics(){
	return mathematics;
}
void Student::setInformationTechnology(double informationTechnology_2){
	informationTechnology = informationTechnology_2;
}	
double Student::getInformationTechnology(){
	return informationTechnology;
}	
double Student::getTotal(){
	return ((English + mathematics + informationTechnology) / 300) * 100;
}	
string Student::getGrade(){
	if(getTotal() >= 90 && getTotal() <= 100){
		return "A+";
	}else if(getTotal() < 90 && getTotal() >= 80){
		return "A0";
	}else if(getTotal() < 80 && getTotal() >= 70){
		return "B+";
	}else if(getTotal() < 70 && getTotal() >= 60){
		return "B0";
	}else if(getTotal() < 60 && getTotal() >= 50){
		return "C+";
	}else if(getTotal() < 50 && getTotal() >= 40){
		return "C0";
	}else if(getTotal() < 40 && getTotal() >= 30){
		return "D+";
	}else if(getTotal() < 30 && getTotal() >= 20){
		return "D0";
	}else if(getTotal() < 20 && getTotal() >= 0){
		return "F";
	}else{
		return "Not correct input!";
	}
}
