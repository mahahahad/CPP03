#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string scavName): ClapTrap(scavName) {
    name = scavName;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << BLUE << name << RESET
        << " has been constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy.name) {
    name = copy.name;
    hitPoints = copy.hitPoints;
    attackDamage = copy.attackDamage;
    energyPoints = copy.energyPoints;
    std::cout << "ScavTrap " << BLUE << name << RESET
        << " copied with copy constructor" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy) {
    if (this != &copy) {
        name = copy.name;
        hitPoints = copy.hitPoints;
        attackDamage = copy.attackDamage;
        energyPoints = copy.energyPoints;
    }
    std::cout << "ScavTrap " << BLUE << name << RESET
        << " copied with copy assignment operator" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << BLUE << name << RESET
        << " has destructed." << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    energyPoints -= 1;
    std::cout << "ScavTrap " << BLUE << name << RESET
        << RED " attacks " << target << RESET ", causing "
        << RED << attackDamage << " points of damage!" RESET
        << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ScavTrap " << BLUE << name << RESET
            << RED " is already dead and cannot take more damage! " RESET
            << std::endl;
        return ;
    }
    hitPoints -= amount;
    std::cout << "ScavTrap " << BLUE << name << RESET
        << RED " took " << amount << " points of damage!" RESET
        << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount) {
    hitPoints += amount;
    energyPoints -= 1;
    std::cout << "ScavTrap " << BLUE << name << RESET
        << GREEN " repaired itself by " << amount << " points." RESET
        << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << BLUE << name << RESET
        << " is now in " << YELLOW << "gate keeper mode." << RESET << std::endl;
}
