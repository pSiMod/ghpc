#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{

if(argc < 3)
{
	cout<< "Invalid no. of Arguments";
}
else
{
cout<<argc<<endl;
cout<<"1 ="<<argv[1]<<endl;
cout<<"2 ="<<argv[2]<<endl;

cout<<"end"<<endl;
	ifstream paramsFile;
	ofstream outputFile;

	outputFile.open("output.dat",ios::out);
	paramsFile.open(argv[1],ios::in);

	string paramString;

	while(!paramsFile.eof())
	{
		getline(paramsFile,paramString,',');
		outputFile<<paramString<<",";
		cout<<paramString<<endl;
	}
outputFile<<"EnergyConsumption:200,PowerConsumption:300";
	paramsFile.close();
	outputFile.close();
}

return 0;
}
