//Written by Monica Ingham
#pragma once

#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <vector>
#include <string>
using namespace std;



//Work class has information on job title, years worked, and company name
class Work {

public:

	//Constructors
	Work();
	Work(string);
	Work(string, string);
	Work(string, string, int);
	Work(int);
	Work(string, int);

	//Gets and sets
	string getTitle();
	string getCompName();
	int getYearsWorked();
	void setTitle(string);
	void setCompName(string);
	void setYearsWorked(int);

private:

	string title;
	string compName;
	int yearsWorked;

};

//Eduction class has information on the university name, major, GPA, and highest degree earned
class Education {

public:

	//Constructors
	Education();
	Education(string);
	Education(string, string);
	Education(string, string, string);
	Education(string, string, string, double);
	Education(double);
	Education(string, double);
	Education(string, string, double);

	//Gets and sets
	string getUniName();
	string getMajor();
	string getDegree();
	double getGPA();
	void setUniName(string);
	void setMajor(string);
	void setDegree(string);
	void setGPA(double);

private:

	string uniName;
	string major;
	string degree;
	double gpa;

};

//Skills class has a list of skills as a vector
class Skills {

public:

	//Constructors
	Skills();
	Skills(vector<string>);

	//Gets and sets
	vector<string> getList();
	void setList(vector<string>);
	string getSkill(int);
	void setSkill(int, string);
	void addSkill(string);
	void removeSkill(int);
	int getListSize();

private:

	vector<string> list;

};

//Resume class has information from the work experience, education, and skills classes
class Resume : public Skills , public Education {

public:

	//Constructors
	Resume();
	Resume(vector<Work>);
	Resume(vector<Work>, vector<string>, string, string, string, double);

	//Gets and sets
	vector<Work> getWorkExp();
	void SetWorkExp(vector<Work>);
	Work getSingleWork(int);
	void setSingleWork(int, Work);
	void addWorkExp(Work);
	void removeWorkExp(int);
	int getWorkSize();

private:

	vector<Work> workExp;

};

//Day class has information for scheduled work time and total length of the shift in hours
class Day {

public:

	//Constructors
	Day();
	Day(string);
	Day(int);
	Day(string, int);

	//Gets and sets
	string getShift();
	int getHours();
	void setShift(string);
	void setHours(int);

private:

	string shiftStart;
	int hours;

};

//Schedule class has information for every day
class Schedule {

public:

	//Constructor
	Schedule();

	//All variables in the Day class are private so this is ok
	Day week[7];

	//Gets and sets
	Day getDay(int);
	void setDay(int, Day);

};

//Project class has project name and completion date information
class Project {

public:

	//Constructors
	Project();
	Project(string);
	Project(string, string);
	
	//Gets and sets
	string getProjectName();
	string getCompletionDate();
	void setProjectName(string);
	void setCompletionDate(string);

private:

	string projectName;
	string completionDate;

};

//Location class has country, state, city, and address information
class Location {

public:

	//Constructors
	Location();
	Location(string);
	Location(string, string);
	Location(string, string, string);
	Location(string, string, string, string);
	
	//Gets and sets
	string getCountry();
	string getState();
	string getCity();
	string getAddress();
	void setCountry(string);
	void setState(string);
	void setCity(string);
	void setAddress(string);

private:

	string country;
	string state;
	string city;
	string address;

};

//Customer class has name, phone number, and information from the location and project classes
class Customer : public Location, public Project {

public:

	//Constructors
	Customer();
	Customer(string);
	Customer(string, string);
	Customer(string, string, string, string, string, string, string, string);

	//Gets and sets
	string getName();
	string getPhoneNumber();
	void setName(string);
	void setPhoneNumber(string);

private:

	string name;
	string phoneNumber;

};

//Employee class has name, phone number, position, ID, and information from the location, project, schedule, and resume classes
class Employee : public Location, public Project , public Schedule, public Resume {

public:

	//Constructors
	Employee();
	Employee(string);
	Employee(string, string);
	Employee(string, string, string);
	Employee(string, string, string, int);
	Employee(int);
	Employee(string, int);
	Employee(string, string, int);
	Employee(string, string, string, int, string, string, string, string, string, string, vector<Work>, vector<string>, string, string, string, double);

	//Gets and sets
	string getName();
	string getPhoneNumber();
	string getPosition();
	int getID();
	void setName(string);
	void setPhoneNumber(string);
	void setPosition(string);
	void setID(int);

private:

	string name;
	string phoneNumber;
	string position;
	int id;

};



#endif