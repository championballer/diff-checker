#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	string oname;
	cout<<"Please add name for output file:";
	cin>>oname;
	
	ofstream outfile(oname.c_str(),ios::out);
	outfile<<"Hello, I am Iron Man\nThis is my file"<<endl;
	outfile.close();
	
	ifstream infile;
	infile.open("sample.txt");
	
	char c;
	string current="";
	while(!infile.eof())
	{
		infile.get(c);
		if(c=='\n')
		{
		     //cout<<current<<endl;
		     current="";
		     continue;
		}
		else current+=c;

	}
	
	if(infile.eof())cout<<"End reached"<<endl;
		
}
