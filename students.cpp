#include "students.h"
#include <string>
using namespace std;
void Students::set_name(string student_name) { name = student_name; }
string Students::get_name() { return name; }
void Students::set_lastname(string student_lastname) { lastname = student_lastname; }
string Students::get_lastname() { return lastname; }
void Students::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i)
	{
		Students::scores[i] = scores[i];
	}
}
void Students::set_average_ball(float ball) { Students::average_ball = ball; }
float Students::get_average_ball() { return Students::average_ball; }
