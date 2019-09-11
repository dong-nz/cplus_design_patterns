#if !defined(LOGGER_H)
#define LOGGER_H

#include "Destination.h"
#include "iostream"
#include "memory"
#include "string"
namespace TemplateMethodPattern
{
    class Logger
    {
    public:
        virtual ~Logger() = default;
        void debug(std::string message);
        void info(std::string message);

    protected:
        virtual std::shared_ptr<Destination> getDestination() = 0;
    };
} // namespace TemplateMethodPattern

#endif // MACRO
