#include "ConsoleDestination.h"

namespace TemplateMethodPattern
{

    ConsoleDestination::ConsoleDestination(/* args */)
    {
    }

    ConsoleDestination::~ConsoleDestination()
    {
        std::cout << "ConsoleDestination destructure called\n";
    }

    void ConsoleDestination::printMessage(std::string message)
    {
        std::cout << "Print message in Console Log: " << message;
    }
} // namespace TemplateMethodPattern