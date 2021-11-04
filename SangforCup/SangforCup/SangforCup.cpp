// SangforCup.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;



struct target
{
	int Sum=0;
	int* sequence=0;
};


void initialize(target &list,int sum) {
	list.Sum = sum;
	list.sequence = new int[list.Sum];
	for (int i = 0; i < list.Sum; i++) {
		list.sequence[i] = i;
	}
}

void randomlist(target &list) {
	srand(time(0));
	int temp = 0;
	int random = 0;
	for (int i = 0; i < list.Sum;i++) {
		random = rand() % (list.Sum);
		temp = list.sequence[random];
		list.sequence[random] = list.sequence[i];
		list.sequence[i] = temp;
	}
}

void listshow(target list) {
	for (int i = 0; i < list.Sum; i++) {
		cout << list.sequence[i] + 1 << endl;
	}
	cout << endl;
}

int main()
{
	int playerNum = 37;

	int webSum = 37;
	int sysSum = 37;

	struct target webA;
	struct target webB;
	struct target sys;

	initialize(webA,webSum);
	initialize(webB, webSum);
	initialize(sys,sysSum);
	
	randomlist(webA);
	Sleep(1000);
	randomlist(webB);
	Sleep(1000);
	randomlist(sys);

	cout << "A组抽签结果：" << endl;
	listshow(webA);
	cout << "B组抽签结果：" << endl;
	listshow(webB);
	cout << "C组抽签结果：" << endl;
	listshow(sys);
	int a;
	cout << "press any key to continue...";
	//cin >> a;
	getchar();
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
