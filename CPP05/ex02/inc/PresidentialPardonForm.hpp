#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    private:
	int			_grade;
	std::string _target;
		class ExecException : public std::exception
		{
				public :
				
				virtual const char *what() const throw()
				{
					return (" Execution failed");
				}
		};
		
    	class GradeTooHighException : public std::exception
		{
				public :
				
				virtual const char *what() const throw()
				{
					return ("PresidentialPardonForm failed : Grade is too High");
				}
		};
		class GradeTooLowException : public std::exception
		{
				public :
				
				virtual const char *what() const throw()
				{
					return("PresidentialPardonForm failed : Grade is too Low");
				}
		};

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
	~PresidentialPardonForm();
	virtual void	execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const;
	void	setGrade(int i);
	void	apologize(void) const;
	PresidentialPardonForm(PresidentialPardonForm &copy);
	PresidentialPardonForm & operator = ( PresidentialPardonForm const & value );

	
};

int        random(int min, int max);