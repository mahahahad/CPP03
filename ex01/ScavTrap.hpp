#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap: public ClapTrap {
    public:
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap& copy );
        ScavTrap&   operator=(const ScavTrap& copy);
        ~ScavTrap();
        void    guardGate( void );
    private:
        ScavTrap();
    
};

#endif
