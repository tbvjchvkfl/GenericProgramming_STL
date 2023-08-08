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

	// 문자열 <-> 다른 타입
	s1 = std::to_string(value);
	value = std::stoi(s1);

	std::cout << s1 << std::endl;
	std::cout << value << std::endl;

	//char 특수화
	std::string s2{ "가나다라마바사" };

	std::cout << s2 << std::endl;


	// wchar_t 특수화 
	// wchar_t 는 리터럴이 다름
	// 일반 캐릭터 타입과 다르게 사용해야함.
	// char 리터럴 : ''
	// wchar_t 리터럴 : L'' 

	char ch1 = 'A';
	wchar_t ch2 = L'B';

	// cout == Character output stream의 약자
	// 즉, cout은 char밖에 출력할 수 없음.
	std::cout << ch1 << std::endl;
	std::wcout << ch2 << std::endl;



	std::string nick{"Doggy"};
	int rarity{ 5 };

	std::string itemName{"서리한"};

	std::ostringstream oss;

	oss << nick << "님이" << rarity << "성" << itemName << "을/를 강화 성공!" << std::endl;
	
	std::cout << oss.str() << std::endl;


	/////////////////////////////

	/*char output[512];
	snprintf(output, sizeof(output), "s님이 %d 성 %s을/를 강화 성공!", nick.c_str(), rarity, itemName.c_str());

	std::cout << output << std::endl;*/
	



	std::vector<int> v1{2, 3, 1, 5, 6};
	std::vector<std::string>v2 {"LSM", "People", "Man"};

	std::cout << v1[0] << std::endl;

	for (int i = 0; i < v2.size(); i++)
	{
		std::cout << v2[i] << std::endl;
	}

	// 생성자
	std::vector<int> v3(5);					//<- 5개의 원소를 만드는 것
	std::vector<int> v4(5, 10);				// <- 5개의 원소를 만들고, 10으로 초기화하는 것.
	for (int i = 0; i < v3.size(); i++)
	{
		std::cout << v3[i] << std::endl;
	}


	// Range-based loop : [0 : v1.size()]
	// 범위 기반 반복문
	
	for (int e : v1)   // e는 v1의 모든 원소를 순회
	{
		std::cout << e << std::endl;
	}

	// 수학 기호
	// [2:3] 2 이상 3이하
	// (2:3) 2 초과 3미만

	//std::vector<int>varray;
	//int input{};
	//std::cout << "입력을 끝내려면 e를 누르세요" << std::endl;
	//// 입력을 가져오면 true
	//// 입력을 가져오지 못하면 false
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
	//std::cout << "합계는 " << x << std::endl;

	
	std::vector<int>varr;
	int value1{};
	std::cout << "입력을 끝내려면 e를 누르세요" << std::endl;

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