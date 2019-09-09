#include "Plane.h"

namespace MediatorPattern
{
    Plane::Plane(Mediator *controller, int id)
    {
        this->controller = controller;
        this->id = id;
    }

    void Plane::requestDeparture()
    {
        this->controller->notify(this, Request::DEPARTURE);
    }

    void Plane::takeOff()
    {
        this->controller->notify(this, Request::TAKE_OFF);
    }

    void Plane::requestLanding()
    {
        this->controller->notify(this, Request::LANDING);
    }

    void Plane::landed()
    {
        this->controller->notify(this, Request::LANDED);
    }

    int Plane::getId(){
        return id;
    }
} // namespace MediatorPattern