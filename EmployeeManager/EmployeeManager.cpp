//Written by Monica Ingham
#include <iostream>
#include "DataStructures.h"
using namespace std;

//Function definitions
void mainMenu();
Employee newEmployee();
Employee modifyEmployee(Employee);
Customer newCustomer();
Customer modifyCustomer(Customer);



/*
This small program tests the data structure in the Datastructures.h header file.
Note that it doesn't test every constructor, but it doesn't really matter because
they are all very simple.
*/
int main()
{
	
	//Go to main menu
	mainMenu();
	
}



//Main menu for the program
void mainMenu() {
	
	vector<Customer> customerList;
	vector<Employee> employeeList;
	string input;

	while (true) {

		//Display menu
		cout << "Welcome to the Employee Manager program!\n"
			<< "Available options:\n"
			<< "1. Add Employee\n"
			<< "2. Modify Employee\n"
			<< "3. Remove Employee\n"
			<< "4. Add Customer\n"
			<< "5. Modify Customer\n"
			<< "6. Remove Customer\n"
			<< "7. Exit\n"
			<< "Please enter a number: ";

		cin >> input;

		if (input == "1") {

			//Get new Employee
			employeeList.push_back(newEmployee());

		}
		else if (input == "2") {

			//Find which employee to modify and modify it
			cout << "\n\n\nHere are the current entered employees:\n";
			for (int a = 0; a < employeeList.size(); a++) {

				cout << a << ": " << employeeList.at(a).getName() << endl;

			}
			cout << "Please select a employee to modify (enter 'none' to exit): ";
			cin >> input;
			if (input != "none") {
				employeeList.at(stoi(input)) = modifyEmployee(employeeList.at(stoi(input)));
			}

		}
		else if (input == "3") {

			//Find which employee to remove and remove it
			cout << "\n\n\nHere are the current entered employees:\n";
			for (int a = 0; a < employeeList.size(); a++) {

				cout << a << ": " << employeeList.at(a).getName() << endl;

			}
			cout << "Please select an employee to delete (enter 'none' to exit): ";
			cin >> input;
			if (input != "none") {
				employeeList.erase(employeeList.begin() + stoi(input));
			}

		}
		else if (input == "4") {

			//Get new customer
			customerList.push_back(newCustomer());

		}
		else if (input == "5") {

			//Find which customer to modify and modify it
			cout << "\n\n\nHere are the current entered customers:\n";
			for (int a = 0; a < customerList.size(); a++) {

				cout << a << ": " << customerList.at(a).getName() << endl;

			}
			cout << "Please select a customer to modify (enter 'none' to exit): ";
			cin >> input;
			if (input != "none") {
				customerList.at(stoi(input)) = modifyCustomer(customerList.at(stoi(input)));
			}

		}
		else if (input == "6") {

			//Find which customer to remove and remove it
			cout << "\n\n\nHere are the current entered customers:\n";
			for (int a = 0; a < customerList.size(); a++) {

				cout << a << ": " << customerList.at(a).getName() << endl;

			}
			cout << "Please select a customer to delete (enter 'none' to exit): ";
			cin >> input;
			if (input != "none") {
				customerList.erase(customerList.begin() + stoi(input));
			}

		}
		else if (input == "7") {

			return;

		}

		cout << "\n\n\n";

	}

}



//Get information on a new Employee
Employee newEmployee() {

	//Make a new employee with default data
	Employee e;
	string input;

	//First get employee data
	cout << "\n\n\nPlease enter employee data.\nName: ";
	cin >> input;
	e.setName(input);
	cout << "Phone number: ";
	cin >> input;
	e.setPhoneNumber(input);
	cout << "Position: ";
	cin >> input;
	e.setPosition(input);
	cout << "ID: ";
	cin >> input;
	e.setID(stoi(input));

	//Next get location data
	cout << "\nPlease enter location data.\nCountry: ";
	cin >> input;
	e.setCountry(input);
	cout << "State: ";
	cin >> input;
	e.setState(input);
	cout << "City: ";
	cin >> input;
	e.setCity(input);
	cout << "Address: ";
	cin >> input;
	e.setAddress(input);

	//Next is project data
	cout << "\nPlease enter project data.\nProject name: ";
	cin >> input;
	e.setProjectName(input);
	cout << "Project completion date: ";
	cin >> input;
	e.setCompletionDate(input);

	//Set up schedule data
	Day d;
	cout << "\nPlease enter schedule data.\n";
	for (int a = 0; a < 7; a++) {

		cout << "Day " << (a + 1) << " shift start time: ";
		cin >> input;
		d.setShift(input);

		cout << "Day " << (a + 1) << " shift total hours: ";
		cin >> input;
		d.setHours(stoi(input));

		e.setDay(a, d);

	}

	//Finally, get resume data
	//First is education
	cout << "\nPlease enter resume data.\n\nFirst enter education data.\nUniversity name: ";
	cin >> input;
	e.setUniName(input);
	cout << "Major: ";
	cin >> input;
	e.setMajor(input);
	cout << "Degree: ";
	cin >> input;
	e.setDegree(input);
	cout << "GPA: ";
	cin >> input;
	e.setGPA(stod(input));

	//Next is skills
	cout << "\nPlease enter skills data.\nHow many skills? ";
	cin >> input;
	int num = stoi(input);

	for (int a = 0; a < num; a++) {

		cout << "Skill " << (a + 1) << ": ";
		cin >> input;
		e.addSkill(input);

	}

	//Lastly, work experience
	cout << "\nPlease enter work experience data.\nHow many work experiences? ";
	cin >> input;
	num = stoi(input);

	for (int a = 0; a < num; a++) {

		Work w;
		cout << "Work " << (a + 1) << " position title: ";
		cin >> input;
		w.setTitle(input);

		cout << "Work " << (a + 1) << " company name: ";
		cin >> input;
		w.setCompName(input);

		cout << "Work " << (a + 1) << " years worked: ";
		cin >> input;
		w.setYearsWorked(stoi(input));

		e.addWorkExp(w);

	}

	return e;

}



//Modify information on an existing employee
Employee modifyEmployee(Employee e) {

	string input;

	//Display employee info and modify what they choose
	cout << "\n\n\nCustomer Data available to modify:\n"
		<< "0. Name: " << e.getName() << endl
		<< "1. Phone number: " << e.getPhoneNumber() << endl
		<< "2. Position: " << e.getPosition() << endl
		<< "3. ID: " << e.getID() << endl
		<< "4. Location data\n"
		<< "5. Project data\n"
		<< "6. Schedule data\n"
		<< "7. Resume data\n"
		<< "Please select an option to modify: ";

	cin >> input;
	int num = stoi(input);

	if (num == 0) {

		cout << "\nPlease enter a new name: ";
		cin >> input;
		e.setName(input);

	}
	else if (num == 1) {

		cout << "\nPlease enter a new phone number: ";
		cin >> input;
		e.setPhoneNumber(input);

	}
	else if (num == 2) {

		cout << "\nPlease enter a new position: ";
		cin >> input;
		e.setPosition(input);

	}
	else if (num == 3) {

		cout << "\nPlease enter a new ID: ";
		cin >> input;
		e.setID(stoi(input));

	}
	else if (num == 4) {

		cout << "\n\nLocation data available to modify:\n"
			<< "0. Country: " << e.getCountry() << endl
			<< "1. State: " << e.getState() << endl
			<< "2. City: " << e.getCity() << endl
			<< "3. Address: " << e.getAddress() << endl
			<< "Please select an option to modify: ";

		cin >> input;
		num = stoi(input);

		if (num == 0) {

			cout << "\nPlease enter a new country: ";
			cin >> input;
			e.setCountry(input);

		}
		else if (num == 1) {

			cout << "\nPlease enter a new state: ";
			cin >> input;
			e.setState(input);

		}
		else if (num == 2) {

			cout << "\nPlease enter a new city: ";
			cin >> input;
			e.setCity(input);

		}
		else if (num == 3) {

			cout << "\nPlease enter a new address: ";
			cin >> input;
			e.setAddress(input);

		}

	}
	else if (num == 5) {

		cout << "\n\nProject data available to modify:\n"
			<< "0. Project name: " << e.getProjectName() << endl
			<< "1. Completion date: " << e.getCompletionDate() << endl
			<< "Please select an option to modify: ";

		cin >> input;
		num = stoi(input);

		if (num == 0) {

			cout << "\nPlease enter a new project name: ";
			cin >> input;
			e.setProjectName(input);

		}
		else if (num == 1) {

			cout << "\nPlease enter a new address: ";
			cin >> input;
			e.setCompletionDate(input);

		}

	}
	else if (num == 6) {

		cout << "\n\nPlease select a day to modify: ";
		cin >> input;
		num = stoi(input);
		Day d = e.getDay(num);

		cout << "Day " << input << " data available to modify:\n"
			<< "0. Day " << input << " shift start time: " << d.getShift() << endl
			<< "1. Day " << input << " shift total hours: " << d.getHours() << endl
			<< "Please select an option to modify: ";

		cin >> input;

		if (input == "0") {

			cout << "\nPlease enter a new shift start time: ";
			cin >> input;
			d.setShift(input);

		}
		else if (input == "1") {

			cout << "\nPlease enter a new total hours: ";
			cin >> input;
			d.setHours(stoi(input));

		}

		e.setDay(num, d);

	}
	else if (num == 7) {
		
		cout << "\n\nResume data available to modify:\n"
			<< "0. Skills data\n"
			<< "1. Education data\n"
			<< "2. Work experience data\n"
			<< "Please select an option to modify: ";

		cin >> input;
		num = stoi(input);

		if (num == 0) {

			cout << "\nSkill data available to modify:\n";
			for (int a = 0; a < e.getListSize(); a++) {

				cout << a << ": " << e.getSkill(a) << endl;

			}
			cout << "Please select an option to modify: ";
			cin >> input;
			num = stoi(input);
			cout << "Please enter a new skill: ";
			cin >> input;
			e.setSkill(num, input);

		}
		else if (num == 1) {

			cout << "\nEducation data available to modify:\n"
				<< "0. University name: " << e.getUniName() << endl
				<< "1. Major: " << e.getMajor() << endl
				<< "2. Degree: " << e.getDegree() << endl
				<< "3. GPA: " << e.getGPA() << endl
				<< "Please select an option to modify: ";

			cin >> input;
			num = stoi(input);

			if (num == 0) {

				cout << "\nPlease enter a new university name: ";
				cin >> input;
				e.setUniName(input);

			}
			else if (num == 1) {

				cout << "\nPlease enter a new major: ";
				cin >> input;
				e.setMajor(input);

			}
			else if (num == 2) {

				cout << "\nPlease enter a new degree: ";
				cin >> input;
				e.setDegree(input);

			}
			else if (num == 3) {

				cout << "\nPlease enter a new GPA: ";
				cin >> input;
				e.setGPA(stod(input));

			}

		}
		else if (num == 2) {

			cout << "\nSkill data available to modify:\n";
			for (int a = 0; a < e.getWorkSize(); a++) {

				cout << a << ": Company name: " << e.getSingleWork(a).getCompName() << endl;

			}
			cout << "Please select an option to modify: ";
			cin >> input;
			num = stoi(input);
			Work w = e.getSingleWork(num);

			cout << "\nWork data available to modify:\n"
				<< "0. Job title: " << w.getTitle() << endl
				<< "1. Company name: " << w.getCompName() << endl
				<< "2. Years worked: " << w.getYearsWorked() << endl
				<< "Please select an option to modify: ";

			cin >> input;
			if (input == "0") {

				cout << "\nPlease enter a new title: ";
				cin >> input;
				w.setTitle(input);

			}
			else if (input == "1") {

				cout << "\nPlease enter a new company name: ";
				cin >> input;
				w.setCompName(input);

			}
			else if (input == "2") {

				cout << "\nPlease enter a new years worked: ";
				cin >> input;
				w.setYearsWorked(stoi(input));

			}

			e.setSingleWork(num, w);

		}

	}

	return e;

}



//Get information on a new customer
Customer newCustomer() {

	Customer c;
	string input;

	//First get customer data
	cout << "\n\n\nPlease enter customer data.\nName: ";
	cin >> input;
	c.setName(input);
	cout << "Phone number: ";
	cin >> input;
	c.setPhoneNumber(input);

	//Next get location data
	cout << "\nPlease enter location data.\nCountry: ";
	cin >> input;
	c.setCountry(input);
	cout << "State: ";
	cin >> input;
	c.setState(input);
	cout << "City: ";
	cin >> input;
	c.setCity(input);
	cout << "Address: ";
	cin >> input;
	c.setAddress(input);

	//Last is project data
	cout << "\nPlease enter project data.\nProject name: ";
	cin >> input;
	c.setProjectName(input);
	cout << "Project completion date: ";
	cin >> input;
	c.setCompletionDate(input);

	return c;

}



//Modify information on an existing customer
Customer modifyCustomer(Customer c) {

	string input;

	//Display customer info and then modify what they choose
	cout << "\n\n\nCustomer Data available to modify:\n"
		 << "0. Name: " << c.getName() << endl
		 << "1. Phone number: " << c.getPhoneNumber() << endl
		 << "2. Location data\n"
		 << "3. Project data\n"
		 << "Please select an option to modify: ";

	cin >> input;
	int num = stoi(input);

	if (num == 0) {

		cout << "\nPlease enter a new name: ";
		cin >> input;
		c.setName(input);

	}
	else if (num == 1) {

		cout << "\nPlease enter a new phone number: ";
		cin >> input;
		c.setPhoneNumber(input);

	}
	else if (num == 2) {

		cout << "\n\nLocation data available to modify:\n"
			 << "0. Country: " << c.getCountry() << endl
			 << "1. State: " << c.getState() << endl
			 << "2. City: " << c.getCity() << endl
			 << "3. Address: " << c.getAddress() << endl
			 << "Please select an option to modify: ";

		cin >> input;
		num = stoi(input);

		if (num == 0) {

			cout << "\nPlease enter a new country: ";
			cin >> input;
			c.setCountry(input);

		}
		else if (num == 1) {

			cout << "\nPlease enter a new state: ";
			cin >> input;
			c.setState(input);

		}
		else if (num == 2) {

			cout << "\nPlease enter a new city: ";
			cin >> input;
			c.setCity(input);

		}
		else if (num == 3) {

			cout << "\nPlease enter a new address: ";
			cin >> input;
			c.setAddress(input);

		}

	}
	else if (num == 3) {

		cout << "\n\nProject data available to modify:\n"
			<< "0. Project name: " << c.getProjectName() << endl
			<< "1. Completion date: " << c.getCompletionDate() << endl
			<< "Please select an option to modify: ";

		cin >> input;
		num = stoi(input);

		if (num == 0) {

			cout << "\nPlease enter a new project name: ";
			cin >> input;
			c.setProjectName(input);

		}
		else if (num == 1) {

			cout << "\nPlease enter a new address: ";
			cin >> input;
			c.setCompletionDate(input);

		}

	}

	return c;

}