#ifndef PLANE_H
#define PLANE_H

#include "Mediator.h"

namespace MediatorPattern
{
    class Mediator;
    class Plane
    {
    private:
        Mediator *controller;
        int id;

    public:
        Plane(Mediator *controller, int id);
        void requestDeparture();
        void takeOff();
        void requestLanding();
        void landed();
        int getId();
    };

} // namespace MediatorPattern
#endif