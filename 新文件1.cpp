#include <iostream>
#include <cstdlib>   
using namespace std;

int main()
{
//	string str ;
	rep_in:
	int str;	
	cout << "請輸入目的地-";
	cin >> str ;
	switch (str) {
		case 1:{
		 	cout <<"彰化站需要25元";
		 	system("Pause");
		 	break;
		 }
		case 2:{
			cout <<"溪湖站需要15元";
			system("Pause");
			break;
		 } 
		case 3:{
		 	cout <<"北斗站需要20元";
		 	system("Pause");
			break;
		 }
		case 4:{
		 	cout <<"埤頭站需要10元";
		 	system("Pause");
			break;
		 }
		 default :{
		 	cout << "未知" << str <<"數字\n" ;
		 	system("Pause");
			goto rep_in;
		 	break;
		} 
	}

	
return 0;	
}
