#include "../inc/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat officer("John", 42);
    Bureaucrat justBob("Bob", 149);
    std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		Bureaucrat tmp("Tmp", 1);
		std::cout << tmp;
		Bureaucrat tmp1("Tmp1", 0);
		std::cout << tmp1;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		Bureaucrat tmp("Tmp", 150);
		std::cout << tmp;
		Bureaucrat tmp1("Tmp1", 151);
		std::cout << tmp1;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		std::cout << officer;
		officer.IncGrade();
		std::cout << officer;
		officer.IncGrade();
		std::cout << officer;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	try
	{
		std::cout << justBob;
		justBob.DecGrade();
		std::cout << justBob;
		justBob.DecGrade();
		std::cout << justBob;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "###############################################" << std::endl;
	std::cout << "###############################################" << std::endl;
	return (0);
}