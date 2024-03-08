#include <iostream>
#include "StrBolb.h"

using namespace std;
/// <summary>
/// 动态内存:
///	除了自动和static对象外，C++还支持动态分配对象。动态分配的对
///	象的生存期与它们在哪里创建是无关的，只有当显式地被释放时，这些
///	对象才会销毁。

/// </summary>
/// <returns></returns>
int main()
{
	std::shared_ptr<string> shr; // 默认初始化的智能指针中保存着一个空指针

	// 函数在动态内存中分配一个对象并初始化它，返回指向此对象的shared_ptr。
	shr = std::make_shared<string>();

	// 当进行拷贝或赋值操作时，每个shared_ptr都会记录有多少个其他shared_ptr指向相同的对象
	auto p = make_shared<int>(42);
	auto q(p);

	auto r = make_shared<int>(42);
	// 递增p指向对象的引用计数， 递减r原来对象的引用计数，r原来对象销毁
	r = q; // 此时p指向对象的引用计数为3 (r、q、p)， r 原来指向的int被释放
	cout << q.use_count() << endl;

	cout << "------------------\n";

	StrBolb s({"111"});

	const string s1 = s.back();

	int* c = new int(); // 创建一个p指针指向一个动态分配的未初始化的无名对象

	int i = int();

	cout << i << endl;

	return 0;
}