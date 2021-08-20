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
		sum += num[i]- '0';
	}

	cout << sum << endl;
}
