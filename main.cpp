#include<bits/stdc++.h>

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
	
	string file1,file2;
	cin>>file1>>file2;
	ifstream infile1,infile2;
	infile1.open(file1.c_str());
	infile2.open(file2.c_str());
	
	vector<string> vfile1;
	vector<string> vfile2;
	char c;
	string current="";
	while(!infile1.eof())
	{
		infile1.get(c);
		if(c=='\n')
		{
		     //cout<<current<<endl;
		     vfile1.push_back(current);
		     current="";
		     continue;
		}
		else current+=c;

	}
	
	
	while(!infile2.eof())
	{
		infile2.get(c);
		if(c=='\n')
		{
		     //cout<<current<<endl;
		     vfile2.push_back(current);
		     current="";
		     continue;
		}
		else current+=c;

	}
	
	for(int i=0;i<vfile1.size();i++)
	{
		if(vfile1[i]!=vfile2[i])cout<<vfile1[i]<<" "<<vfile2[i]<<endl;
	}
	//if(infile1.eof())cout<<"End reached"<<endl;
		
}
