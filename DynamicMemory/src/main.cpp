#include <iostream>
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

	StrBolb s({"111"});

	const string s1 = s.back();

	int* c = new int(); // ����һ��pָ��ָ��һ����̬�����δ��ʼ������������

	int i = int();

	cout << i << endl;

	return 0;
}