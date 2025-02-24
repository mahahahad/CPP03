#include "FragTrap.hpp"

int main(void) {
    FragTrap test("ShmapTrap");
    // ScavTrap testCopy(test);
    // ScavTrap testCopyAssignment("NULL");

    // testCopyAssignment = testCopy;
    test.attack("FlapTrap");
    test.takeDamage(10);
    test.displayStats();
    test.highFivesGuys();
    // testCopy.displayStats();
    // testCopyAssignment.displayStats();
    return (0);
}
