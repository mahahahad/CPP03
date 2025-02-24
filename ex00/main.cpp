#include "ClapTrap.hpp"

int main(void) {
    ClapTrap test("ShmapTrap");

    // test.displayStats();
    test.attack("FlapTrap");
    // test.displayStats("energyPoints");
    test.takeDamage(5);
    // test.displayStats();
    test.beRepaired(4);
    // test.displayStats();
    return (0);
}
