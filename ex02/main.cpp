#include "FragTrap.hpp"

int main(void) {
    FragTrap test("ShmapTrap");
    // FragTrap testCopy(test);
    // FragTrap testCopyAssignment("NULL");

    // testCopyAssignment = testCopy;
    test.attack("FlapTrap");
    test.takeDamage(10);
    test.highFivesGuys();
    // test.displayStats();
    // testCopy.displayStats();
    // testCopyAssignment.displayStats();
    return (0);
}
