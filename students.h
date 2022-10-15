#include <string>
#include <iostream>
using namespace std;
class Students
{
public:
	void set_name(string);
	string get_name();
	void set_lastname(string);
	string get_lastname();
	void set_scores(int[]);
	void set_average_ball(float);
	float get_average_ball();

private:
	int scores[5];
	float average_ball;
	string name, lastname;
};
