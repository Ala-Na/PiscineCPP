#include "Intern.hpp"
#include "Form.hpp"
#include <string>

Intern::Intern(void) {}

Intern::Intern(Intern const &src) {}

Intern::~Intern(void) {}

Intern  &Intern::operator=(Intern const &other)
{
    return *this;
}

Form    *Intern::makeForm(std::string &type, std::string &target)
{
    
    std::string const   forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int                 i;

    try
    {
        for (i = 0; i < 3; i++)
        {
            if (type == forms[i])
                break;
        }
        switch(i)
        {
            case 0:
                std::cout << "Intern create presidential pardon form" << std::endl;
                return(new PresidentialPardonForm());
            case 1:
                std::cout << "Intern create robotomy request form" << std::endl;
                return(new RobotomyRequestForm());
            case 2:
                std::cout << "Intern create shrubbery creation form" << std::endl;
                return(new ShrubberyCreationForm());
            case default :
                throw FormDoesntExistsException();
        } 
    }
    catch (std::exception &e)
    {
        std::cerr << "Intern can't create form because " << e.what() << std::endl;
        return NULL;
    }
}

const char  *Intern::FormDoesntExistsException::what(void) const throw()
{
    return "Intern : Requested form doesn't exists !";
}