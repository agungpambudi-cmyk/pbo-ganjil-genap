//menentukan bilangan genap ganjil dengan seleksi.
#include <iostream>
using namespace std;
main()
{
	
	int a;
	cout<<"masuk bilangan bulat : ";cin>>a;
	if (a % 2 ==0 ) // kondisi
	{
		cout<<endl;
		cout<<"ini adalah bilangan genap"; // pernyataan
	}
	else if(a % 2 ==1)
	{
			cout<<endl;
		cout<<"ini adalah bilangan ganjil"; // pernyataan
	}
	return 0;
}
