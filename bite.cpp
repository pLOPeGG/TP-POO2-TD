#include <iostream>
#include <cstring>
using namespace std;
enum BITE
{
	GROSSE, ENORME, INEXISTANTE
};

int main()
{
	char a[100];
	cin>>a;
	if(strcmp(a,"ok")==0)
		cout<<"a=ok"<<endl;
	cout<<a<<endl;
	cin.ignore();
	cin>>a;
	cout<<a<<endl;;
}
