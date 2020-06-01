#ifndef team_H
#define team_H

#include "person.h"
#pragma once
#include <string>
#include <vector>
using namespace std;
class team //структурное подразделение 
{
	string team_name;
	vector<person> pers;//вектор людей в этом подразделении
	int qty;//quantity-количество человек в подразделении
	vector<string> all_spec;//вектор мпециальностей
	int SumExp;//суммарный стаж работы всего подразделения
public:
	team();
	team(string name, vector<person> p);
	~team();
	string get_team_name();
	int get_qty();
	int get_SumExp();
	void set_team_name(string NewName);
	void add_person(person& p);
	void delete_person(person& p);//p[i]=0; for(j=i;...){p[j]=p[j+1]} (дальше либо метод resize(N) либо разобраться с popback
	void print_spec();
	friend std::ostream& operator<<(std::ostream& out, team& t);//печатаем все что есть (возможно без инфы о работниках)
	team operator+(person& p);
};

#endif