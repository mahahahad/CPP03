#include "ScavTrap.hpp"

int main(void) {
    ScavTrap test("ShmapTrap");
    // ScavTrap testCopy(test);
    // ScavTrap testCopyAssignment("NULL");

    // testCopyAssignment = testCopy;
    test.attack("FlapTrap");
    test.takeDamage(10);
    test.guardGate();
    test.displayStats();
    // testCopy.displayStats();
    // testCopyAssignment.displayStats();
    return (0);
}
