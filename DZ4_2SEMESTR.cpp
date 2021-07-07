#include <iostream>
#include "person.h"
#include "team.h"

int main()
{
	person a("Alex", "web designer", 25, 1);//имя проффесия возраст стаж работы
	person b("Eldar", "tester", 28, 3);
	person c("Kriss", "programmer C++", 26, 3);
	b.set_exp(4);
	a.set_age(25);
	vector<person> v = { a, b, c };
	team D("developers", v);
	cout << D;
	person d("Emma", "programmer", 25, 2);
	D + d;
	cout << D;
	D.delete_person(d);
	cout << D;
}