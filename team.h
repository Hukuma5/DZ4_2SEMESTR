#ifndef team_H
#define team_H

#include "person.h"
#pragma once
#include <string>
#include <vector>
using namespace std;
class team //����������� ������������� 
{
	string team_name;
	vector<person> pers;//������ ����� � ���� �������������
	int qty;//quantity-���������� ������� � �������������
	vector<string> all_spec;//������ ��������������
	int SumExp;//��������� ���� ������ ����� �������������
public:
	team();
	team(string name, vector<person> p);
	~team();
	string get_team_name();
	int get_qty();
	int get_SumExp();
	void set_team_name(string NewName);
	void add_person(person& p);
	void delete_person(person& p);//p[i]=0; for(j=i;...){p[j]=p[j+1]} (������ ���� ����� resize(N) ���� ����������� � popback
	void print_spec();
	friend std::ostream& operator<<(std::ostream& out, team& t);//�������� ��� ��� ���� (�������� ��� ���� � ����������)
	team operator+(person& p);
};

#endif