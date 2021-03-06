// Pidgeons dillemma_git problem_reiteration.cpp : 
//outputs all possibilities to put + or - or nothing between the numbers 1,2,…,9 
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

std::vector <std::string> PidgeonPerm(int);

int main()
{
	auto perm = PidgeonPerm(4);
	for (auto str : perm)
	{
		std::cout << ">" << str << "<" << std::endl;
	}

	return 0;
}

std::vector <std::string> PidgeonPerm(int Length) {

	if (Length == 0) {
		return { "" };
	}
	else if (Length > 0)
	{
		std::vector <std::string> Output;
		auto Input = PidgeonPerm(Length - 1);
		for (auto str : Input)
		{
			Output.push_back(str + "+");
			Output.push_back(str + "-");
			Output.push_back(str + " ");
		}

		return Output;
	}
}