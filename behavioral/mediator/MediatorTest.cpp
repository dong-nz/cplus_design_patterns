#include "MediatorTest.h"

using namespace MediatorPattern;

namespace MediatorPattern
{
    void testMediator()
    {
        Mediator *controller = new TrafficController();

        Plane plane1(controller, 1);
        
        std::cout << "Available Lands for departure: " << controller->getAvailableLandsForDeparture() << "\n";

        plane1.requestDeparture();

        std::cout << "Available Lands for departure: " << controller->getAvailableLandsForDeparture() << "\n";

        plane1.takeOff();

        std::cout << "Available Lands for departure: " << controller->getAvailableLandsForDeparture() << "\n";
    }
} // namespace MediatorPattern

int main(int argc, char const *argv[])
{
    MediatorPattern::testMediator();
    return 0;
}
