#include "ScavTrap.hpp"

int main(void) {
    ScavTrap test("ShmapTrap");
    // ScavTrap testCopy(test);
    // ScavTrap testCopyAssignment("NULL");

    // testCopyAssignment = testCopy;
    test.attack("FlapTrap");
    test.takeDamage(100);
    test.takeDamage(100);
    test.guardGate();
    test.displayStats();
    // testCopy.displayStats();
    // testCopyAssignment.displayStats();
    return (0);
}
