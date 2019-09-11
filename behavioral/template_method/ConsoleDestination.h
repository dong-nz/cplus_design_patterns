#if !defined(CONSOLE_DESTINATION_H)
#define CONSOLE_DESTINATION_H

#include "Destination.h"

namespace TemplateMethodPattern
{
    class ConsoleDestination : public Destination
    {
    private:
        /* data */
    public:
        ConsoleDestination(/* args */);
        ~ConsoleDestination();
        void printMessage(std::string message);
    };
} // namespace TemplateMethodPattern

#endif // CONSOLE_DESTINATION_H
