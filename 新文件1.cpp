#include <iostream>
#include <cstdlib>   
using namespace std;

int main()
{
//	string str ;
	rep_in:
	int str;	
	cout << "�п�J�ت��a-";
	cin >> str ;
	switch (str) {
		case 1:{
		 	cout <<"���Ư��ݭn25��";
		 	system("Pause");
		 	break;
		 }
		case 2:{
			cout <<"�˴򯸻ݭn15��";
			system("Pause");
			break;
		 } 
		case 3:{
		 	cout <<"�_�毸�ݭn20��";
		 	system("Pause");
			break;
		 }
		case 4:{
		 	cout <<"���Y���ݭn10��";
		 	system("Pause");
			break;
		 }
		 default :{
		 	cout << "����" << str <<"�Ʀr\n" ;
		 	system("Pause");
			goto rep_in;
		 	break;
		} 
	}

	
return 0;	
}
