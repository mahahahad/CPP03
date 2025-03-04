#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap: public ClapTrap {
    public:
        FragTrap( std::string name );
        FragTrap( const FragTrap& copy );
        FragTrap&   operator=( const FragTrap& copy );
        ~FragTrap();
        void        attack( const std::string& target );
        void        takeDamage( unsigned int amount );
        void        beRepaired( unsigned int amount );
        void        highFivesGuys( void );
    private:
        FragTrap();
    
};

#endif
