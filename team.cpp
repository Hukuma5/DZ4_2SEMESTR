#include "team.h"

team::team()
{
	team_name = nullptr;
	qty = SumExp = 0;
}

team::team(string name, vector<person> p)
{
	for (int i = 0; i < p.size(); i++) {
		add_person(p[i]);
		SumExp += p[i].get_exp();
		all_spec[i] = p[i].get_spec();
	}
	team_name = name;
	qty = p.size();
}

team::~team()
{

}

string team::get_team_name()
{
	return team_name;
}

int team::get_qty()
{
	return qty;
}

int team::get_SumExp()
{
	return SumExp;
}

void team::set_team_name(string NewName)
{
	team_name = NewName;
}

void team::add_person(person& p)
{
	pers.push_back(p);
	qty++;
	all_spec.push_back(p.get_spec());
	SumExp += p.get_exp();
}

void team::delete_person(person& p)
{
	if (pers.empty())
	{
		cout << "This group is empty";
	}
	else
	{
		pers.pop_back();
		qty--;
		all_spec.pop_back();
		SumExp - +p.get_exp();
	}
}

void team::print_spec()
{
	for (auto i:pers) {
		cout << i.get_spec();
		cout << endl;
	}
}

team team::operator+(person& p)
{
	add_person(p);
	return *this;
}

ostream& operator<<(ostream& out, team& t)
{
	out << "Group:" <<
		"name of group - " << t.get_team_name() << ";" << endl <<
		"amount of workers = " << t.get_qty() << ";" << endl <<
		"cumulative experience =" << t.get_SumExp() << "." << endl <<
		"All specialties of this team:" << endl;
	t.print_spec();
	out << endl;
	return out;
}