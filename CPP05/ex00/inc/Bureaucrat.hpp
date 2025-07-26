#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
    protected:
        Bureaucrat(void);
    public:
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &src);
};