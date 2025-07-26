#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
    private:
        Bureaucrat(void);
        const std::string _name;
        unsigned short int _grade;
    public:
        Bureaucrat(std::string const name, unsigned short int const grade);
        Bureaucrat(Bureaucrat const &src);
        virtual ~Bureaucrat(void);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        void IncGrade(void);
        void DecGrade(void);
        class GradeTooLowException : public std::exception {
                virtual const char *what() const throw();
        };
        class GradeTooHighException : public std::exception {
                virtual const char *what() const throw();
        };
        std::string const getName(void) const;
        int getGrade(void) const;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);