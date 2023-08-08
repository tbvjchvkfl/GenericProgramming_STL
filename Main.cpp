#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <sstream>
#include <vector>
#include <algorithm>
int main()
{
	std::string s1;
	int value = 123;

	// ���ڿ� <-> �ٸ� Ÿ��
	s1 = std::to_string(value);
	value = std::stoi(s1);

	std::cout << s1 << std::endl;
	std::cout << value << std::endl;

	//char Ư��ȭ
	std::string s2{ "�����ٶ󸶹ٻ�" };

	std::cout << s2 << std::endl;


	// wchar_t Ư��ȭ 
	// wchar_t �� ���ͷ��� �ٸ�
	// �Ϲ� ĳ���� Ÿ�԰� �ٸ��� ����ؾ���.
	// char ���ͷ� : ''
	// wchar_t ���ͷ� : L'' 

	char ch1 = 'A';
	wchar_t ch2 = L'B';

	// cout == Character output stream�� ����
	// ��, cout�� char�ۿ� ����� �� ����.
	std::cout << ch1 << std::endl;
	std::wcout << ch2 << std::endl;



	std::string nick{"Doggy"};
	int rarity{ 5 };

	std::string itemName{"������"};

	std::ostringstream oss;

	oss << nick << "����" << rarity << "��" << itemName << "��/�� ��ȭ ����!" << std::endl;
	
	std::cout << oss.str() << std::endl;


	/////////////////////////////

	/*char output[512];
	snprintf(output, sizeof(output), "s���� %d �� %s��/�� ��ȭ ����!", nick.c_str(), rarity, itemName.c_str());

	std::cout << output << std::endl;*/
	



	std::vector<int> v1{2, 3, 1, 5, 6};
	std::vector<std::string>v2 {"LSM", "People", "Man"};

	std::cout << v1[0] << std::endl;

	for (int i = 0; i < v2.size(); i++)
	{
		std::cout << v2[i] << std::endl;
	}

	// ������
	std::vector<int> v3(5);					//<- 5���� ���Ҹ� ����� ��
	std::vector<int> v4(5, 10);				// <- 5���� ���Ҹ� �����, 10���� �ʱ�ȭ�ϴ� ��.
	for (int i = 0; i < v3.size(); i++)
	{
		std::cout << v3[i] << std::endl;
	}


	// Range-based loop : [0 : v1.size()]
	// ���� ��� �ݺ���
	
	for (int e : v1)   // e�� v1�� ��� ���Ҹ� ��ȸ
	{
		std::cout << e << std::endl;
	}

	// ���� ��ȣ
	// [2:3] 2 �̻� 3����
	// (2:3) 2 �ʰ� 3�̸�

	//std::vector<int>varray;
	//int input{};
	//std::cout << "�Է��� �������� e�� ��������" << std::endl;
	//// �Է��� �������� true
	//// �Է��� �������� ���ϸ� false
	//while (std::cin >> input)
	//{
	//	varray.push_back(input);
	//}
	//
	//for (int i : varray)
	//{
	//	std::cout << i << ", ";
	//}
	//std::cout << std::endl;

	//int x{};

	//for (int e : varray)
	//{
	//	x += e;
	//}
	//std::cout << "�հ�� " << x << std::endl;

	
	std::vector<int>varr;
	int value1{};
	std::cout << "�Է��� �������� e�� ��������" << std::endl;

	while (std::cin >> value1)
	{
		varr.push_back(value1);
	}

	for (int j : varr)
	{
		std::cout << j;
	}
	std::cout << std::endl;
	
	//sort(varr.begin(), varr.end());

	//std::cout << varr[0] << std::endl;

	int element{};

	element = min_element(varr.begin(), varr.end()) - varr.begin();
	std::cout << element << std::endl;
	return 0;
}