//Written by Monica Ingham

#include "DataStructures.h"

/*
This file has all of the functions for the data structures. They are all
very simple so I don't feel the need to explain them all individually.
*/
Work::Work() {
	title = "";
	compName = "";
	yearsWorked = 0;
	return;
}

Work::Work(string t) {
	title = t;
	compName = "";
	yearsWorked = 0;
	return;
}

Work::Work(string t, string c) {
	title = t;
	compName = c;
	yearsWorked = 0;
	return;
}

Work::Work(string t, string c, int y) {
	title = t;
	compName = c;
	yearsWorked = y;
	return;
}

Work::Work(int y) {
	title = "";
	compName = "";
	yearsWorked = y;
	return;
}

Work::Work(string t, int y) {
	title = t;
	compName = "";
	yearsWorked = y;
	return;
}

string Work::getTitle() {
	return title;
}

string Work::getCompName() {
	return compName;
}

int Work::getYearsWorked() {
	return yearsWorked;
}

void Work::setTitle(string t) {
	title = t;
	return;
}

void Work::setCompName(string c) {
	compName = c;
	return;
}

void Work::setYearsWorked(int y) {
	yearsWorked = y;
	return;
}

Education::Education() {
	uniName = "";
	major = "";
	degree = "";
	gpa = 4.000;
	return;
}

Education::Education(string m) {
	uniName = "";
	major = m;
	degree = "";
	gpa = 4.000;
	return;
}

Education::Education(string m, string d) {
	uniName = "";
	major = m;
	degree = d;
	gpa = 4.000;
	return;
}

Education::Education(string m, string d, string u) {
	uniName = u;
	major = m;
	degree = d;
	gpa = 4.000;
	return;
}

Education::Education(string m, string d, string u, double g) {
	uniName = u;
	major = m;
	degree = d;
	gpa = g;
	return;
}

Education::Education(double g) {
	uniName = "";
	major = "";
	degree = "";
	gpa = g;
	return;
}

Education::Education(string m, double g) {
	uniName = "";
	major = m;
	degree = "";
	gpa = g;
	return;
}

Education::Education(string m, string d, double g) {
	uniName = "";
	major = m;
	degree = d;
	gpa = g;
	return;
}

string Education::getUniName() {
	return uniName;
}

string Education::getMajor() {
	return major;
}

string Education::getDegree() {
	return degree;
}

double Education::getGPA() {
	return gpa;
}

void Education::setUniName(string u) {
	uniName = u;
	return;
}

void Education::setMajor(string m) {
	major = m;
	return;
}

void Education::setDegree(string d) {
	degree = d;
	return;
}

void Education::setGPA(double g) {
	gpa = g;
	return;
}

Skills::Skills() {
	return;
}

Skills::Skills(vector<string> l) {
	list = l;
	return;
}

vector<string> Skills::getList() {
	return list;
}

void Skills::setList(vector<string> l) {
	list = l;
	return;
}

string Skills::getSkill(int i) {
	return list.at(i);
}

void Skills::setSkill(int i, string s) {
	list.at(i) = s;
	return;
}

void Skills::addSkill(string s) {
	list.push_back(s);
	return;
}

void Skills::removeSkill(int i) {
	list.erase(list.begin() + i);
	return;
}

int Skills::getListSize() {
	return list.size();
}

Resume::Resume() {
	return;
}

Resume::Resume(vector<Work> w) {
	workExp = w;
	return;
}

Resume::Resume(vector<Work> wo, vector<string> li, string m, string d, string u, double g) {
	SetWorkExp(wo);
	setList(li);
	setMajor(m);
	setDegree(d);
	setUniName(u);
	setGPA(g);
	return;
}

vector<Work> Resume::getWorkExp() {
	return workExp;
}

void Resume::SetWorkExp(vector<Work> w) {
	workExp = w;
	return;
}

Work Resume::getSingleWork(int i) {
	return workExp.at(i);
}

void Resume::setSingleWork(int i, Work w) {
	workExp.at(i) = w;
	return;
}

void Resume::addWorkExp(Work w) {
	workExp.push_back(w);
	return;
}

void Resume::removeWorkExp(int i) {
	workExp.erase(workExp.begin() + i);
	return;
}

int Resume::getWorkSize() {
	return workExp.size();
}

Day::Day() {
	shiftStart = "";
	hours = 0;
}

Day::Day(string s) {
	shiftStart = s;
	hours = 0;
}

Day::Day(int h) {
	shiftStart = "";
	hours = h;
}

Day::Day(string s, int h) {
	shiftStart = s;
	hours = h;
}

string Day::getShift() {
	return shiftStart;
}

int Day::getHours() {
	return hours;
}

void Day::setShift(string s) {
	shiftStart = s;
	return;
}

void Day::setHours(int h) {
	hours = h;
	return;
}

Schedule::Schedule() {
	return;
}

Day Schedule::getDay(int i) {
	return week[i];
}

void Schedule::setDay(int i, Day d) {
	week[i] = d;
	return;
}

Project::Project() {
	projectName = "";
	completionDate = "";
	return;
}

Project::Project(string p) {
	projectName = p;
	completionDate = "";
	return;
}

Project::Project(string p, string c) {
	projectName = p;
	completionDate = c;
	return;
}

string Project::getProjectName() {
	return projectName;
}

string Project::getCompletionDate() {
	return completionDate;
}

void Project::setProjectName(string p) {
	projectName = p;
	return;
}

void Project::setCompletionDate(string c) {
	completionDate = c;
	return;
}

Location::Location() {
	country = "";
	state = "";
	city = "";
	address = "";
	return;
}

Location::Location(string c) {
	country = c;
	state = "";
	city = "";
	address = "";
	return;
}

Location::Location(string c, string s) {
	country = c;
	state = s;
	city = "";
	address = "";
	return;
}

Location::Location(string c, string s, string ci) {
	country = c;
	state = s;
	city = ci;
	address = "";
	return;
}

Location::Location(string c, string s, string ci, string a) {
	country = c;
	state = s;
	city = ci;
	address = a;
	return;
}

string Location::getCountry() {
	return country;
}

string Location::getState() {
	return state;
}

string Location::getCity() {
	return city;
}

string Location::getAddress() {
	return address;
}

void Location::setCountry(string c) {
	country = c;
	return;
}

void Location::setState(string s) {
	state = s;
	return;
}

void Location::setCity(string ci) {
	city = ci;
	return;
}

void Location::setAddress(string a) {
	address = a;
	return;
}

Customer::Customer() {
	name = "";
	phoneNumber = "";
	return;
}

Customer::Customer(string n) {
	name = n;
	phoneNumber = "";
	return;
}

Customer::Customer(string n, string p) {
	name = n;
	phoneNumber = p;
	return;
}

Customer::Customer(string na, string ph, string co, string st, string ci, string ad, string pr, string cD) {
	setName(na);
	setPhoneNumber(ph);
	setCountry(co);
	setState(st);
	setCity(ci);
	setAddress(ad);
	setProjectName(pr);
	setCompletionDate(cD);
	return;
}

string Customer::getName() {
	return name;
}

string Customer::getPhoneNumber() {
	return phoneNumber;
}

void Customer::setName(string n) {
	name = n;
	return;
}

void Customer::setPhoneNumber(string p) {
	phoneNumber = p;
	return;
}

Employee::Employee() {
	name = "";
	phoneNumber = "";
	position = "";
	id = 0;
	return;
}

Employee::Employee(string n) {
	name = n;
	phoneNumber = "";
	position = "";
	id = 0;
	return;
}

Employee::Employee(string n, string p) {
	name = n;
	phoneNumber = "";
	position = p;
	id = 0;
	return;
}

Employee::Employee(string n, string p, string ph) {
	name = n;
	phoneNumber = ph;
	position = p;
	id = 0;
	return;
}

Employee::Employee(string n, string p, string ph, int i) {
	name = n;
	phoneNumber = ph;
	position = p;
	id = i;
	return;
}

Employee::Employee(string na, string po, string ph, int i, string co, string st, string ci, string ad, string pr, string cD, vector<Work> we, vector<string> li, string ma, string de, string un, double gp) {
	setName(na);
	setPosition(po);
	setPhoneNumber(ph);
	setID(i);
	setCountry(co);
	setState(st);
	setCity(ci);
	setAddress(ad);
	setProjectName(pr);
	setCompletionDate(cD);
	SetWorkExp(we);
	setList(li);
	setMajor(ma);
	setDegree(de);
	setUniName(un);
	setGPA(gp);
	return;
}

Employee::Employee(int i) {
	name = "";
	phoneNumber = "";
	position = "";
	id = i;
	return;
}

Employee::Employee(string n, int i) {
	name = n;
	phoneNumber = "";
	position = "";
	id = i;
	return;
}

Employee::Employee(string n, string p, int i) {
	name = n;
	phoneNumber = "";
	position = p;
	id = i;
	return;
}

string Employee::getName() {
	return name;
}

string Employee::getPhoneNumber() {
	return phoneNumber;
}

string Employee::getPosition() {
	return position;
}

int Employee::getID() {
	return id;
}

void Employee::setName(string n) {
	name = n;
	return;
}

void Employee::setPhoneNumber(string ph) {
	phoneNumber = ph;
	return;
}

void Employee::setPosition(string p) {
	position = p;
	return;
}

void Employee::setID(int i) {
	id = i;
	return;
}