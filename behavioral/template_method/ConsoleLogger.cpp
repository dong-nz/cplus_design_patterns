#include "ConsoleLogger.h"

namespace TemplateMethodPattern
{

    ConsoleLogger::ConsoleLogger(/* args */)
    {
        des = std::make_shared<ConsoleDestination>();
    }

    ConsoleLogger::~ConsoleLogger()
    {
        std::cout << "ConsoleLogger destructor called\n";
    }

    std::shared_ptr<Destination> ConsoleLogger::getDestination()
    {
        return des;
    }
} // namespace TemplateMethodPattern