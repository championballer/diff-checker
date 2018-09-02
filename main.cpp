#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	
	ofstream outfile("sample.txt",ios::out);
	outfile<<"Hello, I am Iron Man"<<endl;
	outfile.close();
	
}
