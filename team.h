#ifndef team_H
#define team_H

#include "person.h"
#pragma once
#include <string>
#include <vector>
using namespace std;
class team //ñòðóêòóðíîå ïîäðàçäåëåíèå 
{
	string team_name;
	vector<person> pers;//âåêòîð ëþäåé â ýòîì ïîäðàçäåëåíèè
	int qty;//quantity-êîëè÷åñòâî ÷åëîâåê â ïîäðàçäåëåíèè
	vector<string> all_spec;//âåêòîð ìïåöèàëüíîñòåé
	int SumExp;//ñóììàðíûé ñòàæ ðàáîòû âñåãî ïîäðàçäåëåíèÿ
public:
	team();
	team(string name, vector<person> p);
	~team();
	string get_team_name();
	int get_qty();
	int get_SumExp();
	void set_team_name(string NewName);
	void add_person(person& p);
	void delete_person(person& p);//p[i]=0; for(j=i;...){p[j]=p[j+1]} (äàëüøå ëèáî ìåòîä resize(N) ëèáî ðàçîáðàòüñÿ ñ popback
	void print_spec();
	friend ostream& operator<<(ostream& out, team& t);//ïå÷àòàåì âñå ÷òî åñòü (âîçìîæíî áåç èíôû î ðàáîòíèêàõ)
	team operator+(person& p);
};

#endif
