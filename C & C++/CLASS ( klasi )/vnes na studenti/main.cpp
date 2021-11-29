#include <iostream>
using namespace std ;
class student
{
	private:
	string name,surname;
	public:
		void id(string n, string sn )
		{
		name = n ;
		surname = sn;
		cout<<"the student's name : "<<name<<" | the student's surname: "<<surname<<endl;
	 	}
};

int main() {
	string name, surname;
	int s;
	cout<<"enter how many students you have "<<endl;
	cin>>s;
	student su;
	cout<<"enter there info "<<endl;

	for (int i=0; i<s; i++)
	{
	cin>>name>>surname;
	su.id(name,surname);
	}

	return 0;
}
