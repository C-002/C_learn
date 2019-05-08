#include<iostream>
#include<string>

int main()
{
	// I don't like use namespace and type the words "std::" !!!
	std::string str1;
	std::string str2 = "two";

	std::cout << "Enter a string :" << std::endl;
	std::cin >> str1;
	std::cout << "Here you input is :" << str1 << std::endl;
	str1 += str2;
	std::cout << "after process the string is :" << str1 << std::endl;

	char charr[20];
	std::string str;
	std::cin.get(); //get the "\n" in the terminal
	std::cout << "Length of string in charr before input: "
		<< strlen(charr) << std::endl;
	std::cout << "Length of string in charr before input: "
		<< str.size() << std::endl;
	std::cout << "Enter a line of text:\n";
	std::cin.getline(charr, 20);
	std::cout << "You entered: " << charr << std::endl;
	std::cout << "Enter anthor line of text:\n";
	std::getline(std::cin, str);
	std::cout << "You entered: " << str << std::endl;
	std::cout << "Length of string in charr after input: "
		<< strlen(charr) << std::endl;
	std::cout << "Length of string in charr after input: "
		<< str.size() << std::endl;
	
	return 0;
}