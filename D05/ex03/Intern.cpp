#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

Intern::Intern(void) {}

Intern::Intern(Intern const &src) 
{
    (void)src;
}

Intern::~Intern(void) {}

Intern  &Intern::operator=(Intern const &other)
{
    (void)other;
    return *this;
}

Form    *Intern::makeForm(const char *type, const char *target)
{
    
    std::string const   forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    std::string type_string;
    std::string target_string;
    int                 i;

    type_string = type;
    target_string = target;
    try
    {
        for (i = 0; i < 3; i++)
        {
            if (type_string == forms[i])
                break;
        }
        switch(i)
        {
            case 0:
                std::cout << "Intern creates presidential pardon form" << std::endl;
                return(new PresidentialPardonForm(target_string));
            case 1:
                std::cout << "Intern creates robotomy request form" << std::endl;
                return(new RobotomyRequestForm(target_string));
            case 2:
                std::cout << "Intern creates shrubbery creation form" << std::endl;
                return(new ShrubberyCreationForm(target_string));
            default :
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
