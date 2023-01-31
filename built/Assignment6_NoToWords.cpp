#include <iostream>
#include <string>
#include<bits/stdc++.h> 
using namespace std;

string NumberToWord(long n)
{
	switch (n)
	{
		case 0:
			return "Zero";
		case 1:
			return "One";
		case 2:
			return "Two";
		case 3:
			return "Three";
		case 4:
			return "Four";
		case 5:
			return "Five";
		case 6:
			return "Six";
		case 7:
			return "Seven";
		case 8:
			return "Eight";
		case 9:
			return "Nine";
		case 10:
			return "Ten";
		case 11:
			return "Eleven";
		case 12:
			return "Tweleve";
		case 13:
			return "Thirteen";
		case 14:
			return "Fourteen";
		case 15:
			return "Fifteen";
		case 16:
			return "Sixteen";
		case 17:
			return "Seventeen";
		case 18:
			return "Eighteen";
		case 19:
			return "Nineteen";
		case 20:
			return "Twenty";
		case 30:
			return "Thirty";
		case 40:
			return "Forty";
		case 50:
			return "Fifty";
		case 60:
			return "Sixty";
		case 70:
			return "Seventy";
		case 80:
			return "Eighty";
		case 90:
			return "Ninety";

		default:
			return "";
	}
}

string TwoDigitsNumberToWord(long n)
{
	int a, b;
	string WordA, WordB;

	if (n <= 20)
	{
		return NumberToWord(n);
	}

	b = n % 10;
	a = n - b;

	WordA = NumberToWord(a);
	WordB = NumberToWord(b);

	if (b == 0)
	{
		return WordA;
	}

	return WordA + "_" + WordB;
}

string ThreeDigitsNumberToWord(long n)
{
	int q, r;
	string WordQ, WordR;

	if (n <= 99)
	{
		return TwoDigitsNumberToWord(n);
	}

	r = n % 100;
	q = n / 100;

	WordQ = NumberToWord(q);
	WordR = TwoDigitsNumberToWord(r);

	if (r == 0)
	{
		return WordQ + "_Hundred_";

	}

	return WordQ + "_Hundred_" + WordR;
}

string FiveDigitsNumberToWord(long n)
{
	int q, r;
	string WordQ, WordR;

	if (n <= 999)
	{
		return ThreeDigitsNumberToWord(n);
	}

	r = n % 1000;
	q = n / 1000;

	WordQ = TwoDigitsNumberToWord(q);
	WordR = ThreeDigitsNumberToWord(r);

	if (r == 0)
	{
		return WordQ + "_Thousand_";
	}

	return WordQ + "_Thousand_" + WordR;
}

string SevenDigitsNumberToWord(long n)
{
	int q, r;
	string WordQ, WordR;

	if (n <= 99999)
	{
		return FiveDigitsNumberToWord(n);
	}

	r = n % 100000;
	q = n / 100000;

	WordQ = TwoDigitsNumberToWord(q);
	WordR = FiveDigitsNumberToWord(r);

	if (r == 0)
	{
		return WordQ + "_Lakh_";
	}

	return WordQ + "_Lakh_" + WordR;
}

string NineDigitsNumberToWord(long n)
{
	int q, r;
	string WordQ, WordR;

	if (n <= 9999999)
	{
		return SevenDigitsNumberToWord(n);
	}

	r = n % 10000000;
	q = n / 10000000;

	WordQ = TwoDigitsNumberToWord(q);
	WordR = SevenDigitsNumberToWord(r);

	if (r == 0)
	{
		return WordQ + "_Crore_";
	}

	return WordQ + "_Crore_" + WordR;
}
void testFunction(string funcOutcome,string exceptedOutcome)
{
	
	if(funcOutcome.compare(exceptedOutcome))   //!strcmp()
	{
		printf("Test Code run Successfully");
	}
	else
	{
		printf("Test Code Unsuccessful");
	}
}
int main()
{
	int n;
	string expectedOutcome;
    
	//cout << n << " => " << answer << endl;
	ifstream myfile("text1.txt");
	myfile>>n;
    getline(myfile,expectedOutcome);
	string funcOutcome = NineDigitsNumberToWord(n);
	//cout<< funcOutcome;
	//cout<< expectedOutcome<<endl;
    testFunction(funcOutcome,expectedOutcome);


}
