// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	int sum = 0;

	scanf("%d", &count);
	char* num = new char[count +1];
	//scanf_s("%s", num);

	cin >> num;


	for (int i = 0; i<count; i++)
	{
		//방법1
		string a;
		a.push_back(num[i]);
		sum += stoi(a);
		
		//방법2
		//sum += num[i]- '0';
		//num[i]만 할 경우 아스키코드 값이 나오기 떄문에 -'0' 해야 숫자 나옴
		
	}

	cout << sum << endl;
}
