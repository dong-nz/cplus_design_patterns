#include "TrafficController.h"
#include "iostream"

namespace MediatorPattern
{

    TrafficController::TrafficController()
    {
    }
    TrafficController::~TrafficController()
    {
    }

    int TrafficController::getAvailableLandsForDeparture()
    {
        return availableLandsForDeparture;
    }

    int TrafficController::getAvailableLandsForLanding()
    {
        return availableLandsForLandding;
    }

    void TrafficController::notify(Plane *plane, Request requestType)
    {
        if (requestType == Request::DEPARTURE)
        {
            takeSlotForDeparture(plane);
        }
        else if (requestType == Request::LANDING)
        {
            takeSlotForLanding(plane);
        }
        else if (requestType == Request::TAKE_OFF)
        {
            releaseSlotForDeparture(plane);
        }
    }
    void TrafficController::takeSlotForLanding(Plane *plane)
    {
        if (availableLandsForLandding > 0)
        {
            --availableLandsForLandding;
            std::cout << "Plane " << plane->getId() << " is landing\n";
        }
        else
        {
            std::cout << "There is no available land for landing\n";
        }
    }
    void TrafficController::releaseSlotForLanding(Plane *plane)
    {
        ++availableLandsForLandding;
        std::cout << "Plane " << plane->getId() << " landed\n";
    }
    void TrafficController::takeSlotForDeparture(Plane *plane)
    {
        if (availableLandsForDeparture > 0)
        {
            --availableLandsForDeparture;
            std::cout << "Plane " << plane->getId() << " is taking off\n";
        }
        else
        {
            std::cout << "There is no available land for departure\n";
        }
    }
    void TrafficController::releaseSlotForDeparture(Plane *plane)
    {
        ++availableLandsForDeparture;
        std::cout << "Plane " << plane->getId() << " is taken off\n";
    }
} // namespace MediatorPattern