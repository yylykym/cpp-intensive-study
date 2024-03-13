#include <iostream>
#include <fstream>
#include "StrBolb.h"

using namespace std;
/// <summary>
/// ��̬�ڴ�:
///	�����Զ���static�����⣬C++��֧�ֶ�̬������󡣶�̬����Ķ�
///	��������������������ﴴ�����޹صģ�ֻ�е���ʽ�ر��ͷ�ʱ����Щ
///	����Ż����١�

/// </summary>
/// <returns></returns>
int main()
{
	std::shared_ptr<string> shr; // Ĭ�ϳ�ʼ��������ָ���б�����һ����ָ��

	// �����ڶ�̬�ڴ��з���һ�����󲢳�ʼ����������ָ��˶����shared_ptr��
	shr = std::make_shared<string>();

	// �����п�����ֵ����ʱ��ÿ��shared_ptr�����¼�ж��ٸ�����shared_ptrָ����ͬ�Ķ���
	auto p = make_shared<int>(42);
	auto q(p);

	auto r = make_shared<int>(42);
	// ����pָ���������ü����� �ݼ�rԭ����������ü�����rԭ����������
	r = q; // ��ʱpָ���������ü���Ϊ3 (r��q��p)�� r ԭ��ָ���int���ͷ�
	cout << q.use_count() << endl;

	cout << "------------------\n";

	StrBlob sb1({"111"});

	const string s1 = sb1.back();

	int* c = new int(); // ����һ��pָ��ָ��һ����̬�����δ��ʼ������������

	int i = int();

	cout << i << endl;

	cout << "------------------\n";

	ifstream ifs("E:/code/cpp_primer_answer/Cpp_Primer_Answers/data/books.txt");
	StrBlob sb;
	string s;
	while (getline(ifs, s))
	{
		sb.push_back(s);
	}
	for (StrBlobPtr sbp = sb.begin(); sbp != sb.end(); sbp.incr())
	{
		cout << sbp.deref() << endl;
	}

	return 0;
}