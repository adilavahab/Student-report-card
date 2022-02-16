#include <iostream>
using namespace std;

struct student {

	   char name [50];
	   char Class;
	   int rollNo;
	   float engmarks;
	   float mthsmarks;
	   float sciencemarks;
	   float socialsciencemarks;
	   float hindimarks;
	};
int main()	
{
	 student s;
	cout <<"Enter information,"<<endl;
	cout<<"Enter name :";
	cin>>s.name;
	cout<<"Enter class :";
	cin>>s.Class;
	cout<<"Enter roll number :";
	cin>>s.rollNo;
	cout<<"Enter English marks:";
	cin>>s.engmarks;
	cout<<"Enter Mathematics marks:";
	cin>>s.mthsmarks;
	cout<<"Enter Science marks:";
	cin>>s.sciencemarks;
	cout<<"Enter Socialscience marks:";
	cin>>s.socialsciencemarks;
	cout<<"Enter Hindi marks:";
	cin>>s.hindimarks;
	
	cout<<"\nDisplaying information,"<<endl;
	cout<<"Name :"<<s.name<<endl;
	cout<<"Class :"<<s.Class<<endl;
	cout<<"Roll No :"<<s.rollNo<<endl;
	cout<<"\nMARKS:-"<<endl;
	cout<<"English :"<<s.engmarks<<endl;
	cout<<"Mathematics :"<<s.mthsmarks<<endl;
	cout<<"Science :"<<s.sciencemarks<<endl;
	cout<<"Socialscience :"<<s.socialsciencemarks<<endl;
	cout<<"Hindi :"<<s.hindimarks<<endl;
	return 0 ;
}
