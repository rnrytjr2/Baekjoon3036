// Baekjoon3036.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int main()
{
	int length;
	cin >> length;
	int firstring;
	cin >> firstring;
	for (int i = 0; i < length - 1; i++)
	{
		int ring;
		cin >> ring;
		int gcdnum=gcd(ring, firstring);
		cout << firstring / gcdnum << "/" << ring / gcdnum << "\n";
	}

}
