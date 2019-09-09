#ifndef TRAFFICE_CONTROLLER_H
#define TRAFFICE_CONTROLLER_H
#include "Mediator.h"
#include "Plane.h"

namespace MediatorPattern
{
    class TrafficController : public Mediator
    {

    public:
        TrafficController();
        ~TrafficController();
        void notify(Plane *plane, Request requestType);
        void takeSlotForLanding(Plane *plane);
        void releaseSlotForLanding(Plane *plane);
        void takeSlotForDeparture(Plane *plane);
        void releaseSlotForDeparture(Plane *plane);
        int getAvailableLandsForDeparture();
        int getAvailableLandsForLanding();

    private:
        int availableLandsForLandding = 3;
        int availableLandsForDeparture = 1;
    };
} // namespace MediatorPattern

#endif