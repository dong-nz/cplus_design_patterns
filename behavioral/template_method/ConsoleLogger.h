#if !defined(CONSOLE_LOGGER_H)
#define CONSOLE_LOGGER_H

#include "ConsoleDestination.h"
#include "Logger.h"
#include "memory"

namespace TemplateMethodPattern
{
    class ConsoleLogger : public Logger
    {
    private:
        /* data */
        std::shared_ptr<Destination> des;

    public:
        ConsoleLogger(/* args */);
        ~ConsoleLogger();

    protected:
        std::shared_ptr<Destination> getDestination() override;
    };
} // namespace TemplateMethodPattern

#endif // CONSOLE_LOGGER_H
