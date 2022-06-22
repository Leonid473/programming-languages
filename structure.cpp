#include <iostream>
using namespace std;
struct person
{
	string surname;
	string name;
	int birthday;
	string position;
	int salary;
};
int main()
{
	person person1;
	person1.surname = "Alexandrovich";
	person1.name = "Alexandr";
	person1.birthday = 1954;
	person1.position = "Manager";
	person1.salary = 200000;
	int a = person1.birthday;
	cout << "1.surname: " << person1.surname << endl << "  name: " << person1.name << endl << "  birthday: " << person1.birthday << endl << "  position: " << person1.position << endl << "  salary: " << person1.salary << endl;
	cout << endl;
	person person2;
	person2.surname = "Pavlov";
	person2.name = "Pavel";
	person2.birthday = 2000;
	person2.position = "Clerk";
	person2.salary = 70000;
	int b = person2.birthday;
	cout << "2.surname: " << person2.surname << endl << "  name: " << person2.name << endl << "  birthday: " << person2.birthday << endl << "  position: " << person2.position << endl << "  salary: " << person2.salary << endl;
	cout << endl;
	person person3;
	person3.surname = "Potter";
	person3.name = "Peter";
	person3.birthday = 1996;
	person3.position = "Accountant";
	person3.salary = 150000;
	int c = person2.birthday;
	cout << "3.surname: " << person3.surname << endl << "  name: " << person3.name << endl << "  birthday: " << person3.birthday << endl << "  position: " << person3.position << endl << "  salary: " << person3.salary << endl;
	cout << endl;
	person person4;
	person4.surname = "Mcfly";
	person4.name = "Marty";
	person4.birthday = 1985;
	person4.position = "Archivist";
	person4.salary = 100000;
	int d = person4.birthday;
	cout << "4.surname: " << person4.surname << endl << "  name: " << person4.name << endl << "  birthday: " << person4.birthday << endl << "  position: " << person4.position << endl << "  salary: " << person4.salary << endl;
	cout << endl;
	person person5;
	person5.surname = "Grimes";
	person5.name = "Rick";
	person5.birthday = 1988;
	person5.position = "Head of ecurity";
	person5.salary = 120000;
	int e = person5.birthday;
	cout << "5.surname: " << person5.surname << endl << "  name: " << person5.name << endl << "  birthday: " << person5.birthday << endl << "  position: " << person5.position << endl << "  salary: " << person5.salary << endl;
	cout << endl;
	person person6;
	person6.surname = "Grimes";
	person6.name = "Carl";
	person6.birthday = 2002;
	person6.position = "Security Guard";
	person6.salary = 60000;
	int f = person6.birthday;
	cout << "6.surname: " << person6.surname << endl << "  name: " << person6.name << endl << "  birthday: " << person6.birthday << endl << "  position: " << person6.position << endl << "  salary: " << person6.salary << endl;
	cout << endl;
	person person7;
	person7.surname = "NamJoon";
	person7.name = "Kim";
	person7.birthday = 1988;
	person7.position = "PR manager";
	person7.salary = 170000;
	int g = person7.birthday;
	cout << "7.surname: " << person7.surname << endl << "  name: " << person7.name << endl << "  birthday: " << person7.birthday << endl << "  position: " << person7.position << endl << "  salary: " << person7.salary << endl;
	cout << endl;
	person person8;
	person8.surname = "Chan";
	person8.name = "Jackie";
	person8.birthday = 1975;
	person8.position = "Cleaner";
	person8.salary = 30000;
	int h = person8.birthday;
	cout << "8.surname: " << person8.surname << endl << "  name: " << person8.name << endl << "  birthday: " << person8.birthday << endl << "  position: " << person8.position << endl << "  salary: " << person8.salary << endl;
	cout << endl;
	cout << "----------------------- " << endl;
	cout << endl;
	cout << "Average salary: " << ((person1.salary + person2.salary + person3.salary + person4.salary + person5.salary + person6.salary + person7.salary + person8.salary) / 8) << endl;
	cout << endl;
	cout << "Employees over thirty: " << endl;
	if (a < 1992) 
	{
		cout << person1.name << " " << person1.surname << endl;
	}
	if (b < 1992)
	{
		cout << person2.name << " " << person2.surname << endl;
	}
	if (c < 1992)
	{
		cout << person3.name << " " << person3.surname << endl;
	}
	if (d < 1992)
	{
		cout << person4.name << " " << person4.surname << endl;
	}
	if (e < 1992)

	{
		cout << person5.name << " " << person5.surname << endl;
	}
	if (f < 1992)
	{
		cout << person6.name << " " << person6.surname << endl;
	}
	if (g < 1992)
	{
		cout << person7.name << " " << person7.surname << endl;
	}
	if (h < 1992)
	{
		cout << person8.name << " " << person8.surname << endl;
	}
	return 0;
}




