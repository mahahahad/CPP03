#include "FragTrap.hpp"

FragTrap::FragTrap(std::string fragName): ClapTrap(fragName) {
    name = fragName;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << BLUE << name << RESET
        << " has been constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy.name) {
    name = copy.name;
    hitPoints = copy.hitPoints;
    attackDamage = copy.attackDamage;
    energyPoints = copy.energyPoints;
    std::cout << "FragTrap " << BLUE << name << RESET
        << " copied with copy constructor" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& copy) {
    if (this != &copy) {
        name = copy.name;
        hitPoints = copy.hitPoints;
        attackDamage = copy.attackDamage;
        energyPoints = copy.energyPoints;
    }
    std::cout << "FragTrap " << BLUE << name << RESET
        << " copied with copy assignment operator" << std::endl;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << BLUE << name << RESET
        << " has destructed." << std::endl;
}

void    FragTrap::attack(const std::string& target) {
    energyPoints -= 1;
    std::cout << "FragTrap " << BLUE << name << RESET
        << RED " attacks " << target << RESET ", causing "
        << RED << attackDamage << " points of damage!" RESET
        << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "FragTrap " << BLUE << name << RESET
            << RED " is already dead and cannot take more damage! " RESET
            << std::endl;
        return ;
    }
    hitPoints -= amount;
    std::cout << "FragTrap " << BLUE << name << RESET
        << RED " took " << amount << " points of damage!" RESET
        << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount) {
    hitPoints += amount;
    energyPoints -= 1;
    std::cout << "FragTrap " << BLUE << name << RESET
        << GREEN " repaired itself by " << amount << " points." RESET
        << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << BLUE << name << RESET
        << " called the highFivesGuys member function." << std::endl;
}
