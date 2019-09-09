#pragma once
#include "Plane.h"

namespace MediatorPattern
{
    class Plane;
    enum class Request
    {
        DEPARTURE,
        LANDING,
        TAKE_OFF,
        LANDED
    };
    class Mediator
    {
    public:
        virtual int getAvailableLandsForDeparture() = 0;
        virtual int getAvailableLandsForLanding() = 0;
        virtual void notify(Plane *plane, Request requestType) = 0;
        virtual void takeSlotForLanding(Plane *plane) = 0;
        virtual void releaseSlotForLanding(Plane *plane) = 0;
        virtual void takeSlotForDeparture(Plane *plane) = 0;
        virtual void releaseSlotForDeparture(Plane *plane) = 0;
    };
} // namespace MediatorPattern
