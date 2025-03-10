#include "ClapTrap.hpp"

// Parameterized Constructor
// The correct method of constructing this class without copies
ClapTrap::ClapTrap(std::string name): name(name) {
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << BLUE << name << RESET
        << " has been constructed!" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy) {
    name = copy.name;
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
    std::cout << "ClapTrap " << BLUE << name << RESET 
        << " has been copied with the copy constructor!"
        << std::endl;
}

// Copy assignment operator
ClapTrap&   ClapTrap::operator=(const ClapTrap& copy) {
    if (this != &copy) {
        name = copy.name;
        hitPoints = copy.hitPoints;
        energyPoints = copy.energyPoints;
        attackDamage = copy.attackDamage;
    }
    std::cout << "ClapTrap " << BLUE << name << RESET 
        << " has been copied with the copy assignment operator!"
        << std::endl;
    return (*this);
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << BLUE << name << RESET 
        << " has destructed." << std::endl;
}

/* Member Functions */

void    ClapTrap::attack(const std::string& target) {
    energyPoints -= 1;
    std::cout << "ClapTrap " << BLUE << name << RESET
        << RED " attacks " << target << RESET ", causing "
        << RED << attackDamage << " points of damage!" RESET
        << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << BLUE << name << RESET
            << RED " is already dead and cannot take more damage! " RESET
            << std::endl;
        return ;
    }
    hitPoints -= amount;
    std::cout << "ClapTrap " << BLUE << name << RESET
        << RED " took " << amount << " points of damage!" RESET
        << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    hitPoints += amount;
    energyPoints -= 1;
    std::cout << "ClapTrap " << BLUE << name << RESET
        << GREEN " repaired itself by " << amount << " points." RESET
        << std::endl;
}

void    ClapTrap::displayStats(std::string stat) {
    std::cout << name << " Stats:" << std::endl;
    if (stat == "hitPoints" || stat == "all")
        std::cout << "- Hit Points: " << hitPoints << std::endl;
    if (stat == "attackDamage" || stat == "all")
        std::cout << "- Attack Damage: " << attackDamage << std::endl;
    if (stat == "energyPoints" || stat == "all")
        std::cout << "- Energy Points: " << energyPoints << std::endl;
}
