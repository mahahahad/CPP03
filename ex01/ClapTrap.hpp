#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

class   ClapTrap {
    public:
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap& copy );
        ClapTrap&   operator=( const ClapTrap& copy );
        ~ClapTrap();
        void        attack( const std::string& target );
        void        takeDamage( unsigned int amount );
        void        beRepaired( unsigned int amount );
        // Util function for dislaying stats
        void        displayStats( std::string stat = "all");
    protected:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    private:
        ClapTrap();
};

#endif
