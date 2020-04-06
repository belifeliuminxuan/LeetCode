//#include <iostream>

//using namespace std;
#if 0
class Solution {
public:
	string intToRoman(int num)
	{
		/*string _Roman[] = { "I","V","X","L","C","D","M" };
		int Save[4] = {0};
		while (num)
		{

		}*/

		string Str = "";
		if (num >= 1000)
		{
			int count = num / 1000;
			for (int i = 0; i < count; i++)
				Str += "M";
			num -= count * 1000;
		}
		if (num >= 100)
		{
			int count = num / 100;
			if (count == 9)
				Str += "CM";
			else if (count > 5)
			{
				Str += "D";
				int tmp = count;
				while (tmp > 5)
				{
					Str += "C";
					tmp--;
				}
			}
			else if (count == 5)
			{
				Str += "D";
			}
			else if (count == 4)
			{
				Str += "CD";
			}
			else
			{
				int tmp = count;
				while (tmp >= 1)
				{
					Str += "C";
					tmp--;
				}
			}
			num -= count * 100;
		}
		if (num >= 10)
		{
			int count = num / 10;
			if (count == 9)
			{
				Str += "XC";
			}
			else if (count > 5)
			{
				Str += "L";
				int temp = count;
				while (temp > 5)
				{
					Str += "X";
					temp--;
				}
			}
			else if (count == 5)
			{
				Str += "L";
			}
			else if (count == 4)
			{
				Str += "XL";
			}
			else {
				int temp = count;
				while (temp >= 1)
				{
					Str += "X";
					temp--;
				}
			}
			num -= count * 10;
		}
		if (num > 0)
		{
			int count = num;
			if (count == 9)
			{
				Str += "IX";
			}
			else if (count > 5)
			{
				Str += "V";
				int temp = count;
				while (temp > 5)
				{
					Str += "I";
					temp--;
				}
			}
			else if (count == 5) {
				Str += "V";
			}
			else if (count == 4) {
				Str += "IV";
			}
			else
			{
				int temp = count;
				while (temp >= 1)
				{
					Str += "I";
					temp--;
				}
			}
		}
		return Str;
	}
};
int main()
{
	Solution S
	
	return 0;
}
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000

//public static String intToRoman1(int num) {
//String str = "";
////分解大于等于1000的部分
//if (num >= 1000) {
//	int count = num / 1000;
//	for (int i = 0; i < count; i++)
//		str += "M";
//	num -= count * 1000;
//}
////分解大于等于100的部分
//if (num >= 100) {
//	int count = num / 100;
//	if (count == 9)
//		str += "CM";
//	else if (count > 5) {
//		str += "D";
//		int temp = count;
//		while (temp > 5) {
//			str += "C";
//			temp--;
//		}
//	}
//	else if (count == 5) {
//		str += "D";
//	}
//	else if (count == 4) {
//		str += "CD";
//	}
//	else {
//		int temp = count;
//		while (temp >= 1) {
//			str += "C";
//			temp--;
//		}
//	}
//	num -= count * 100;
//}
////分解大于等于10的部分
//if (num >= 10) {
//	int count = num / 10;
//	if (count == 9) {
//		str += "XC";
//	}
//	else if (count > 5) {
//		str += "L";
//		int temp = count;
//		while (temp > 5) {
//			str += "X";
//			temp--;
//		}
//	}
//	else if (count == 5) {
//		str += "L";
//	}
//	else if (count == 4) {
//		str += "XL";
//	}
//	else {
//		int temp = count;
//		while (temp >= 1) {
//			str += "X";
//			temp--;
//		}
//	}
//	num -= count * 10;
//}
////分解大于0的部分
//if (num > 0) {
//	int count = num;
//	if (count == 9) {
//		str += "IX";
//	}
//	else if (count > 5) {
//		str += "V";
//		int temp = count;
//		while (temp > 5) {
//			str += "I";
//			temp--;
//		}
//	}
//	else if (count == 5) {
//		str += "V";
//	}
//	else if (count == 4) {
//		str += "IV";
//	}
//	else {
//		int temp = count;
//		while (temp >= 1) {
//			str += "I";
//			temp--;
//		}
//	}
//}
//
//return str;
//}
#endif
//C语言解法
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
#define  _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
#include <string.h>
char * intToRoman(int num)
{
	char Str[20]="\0";
	if (num>=1000)
	{
		int count = num / 1000;
		for (int i=0;i<count;i++)
		{
			strcat(Str, "M");
		}
		num -= count * 1000;
	}
	else if (num>=100)
	{
		int count = num / 100;
		if (count==9)
		{
			strcat(Str, "CM");
		}
	}
	return Str;
}
int main()
{
	intToRoman(1900);
	return 0;
}