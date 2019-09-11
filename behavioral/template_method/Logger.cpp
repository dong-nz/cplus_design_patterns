#include "Logger.h"
namespace TemplateMethodPattern
{
    void Logger::debug(std::string message)
    {
        std::shared_ptr<Destination> des = getDestination();
        std::cout << "DEBUG: ";

        des->printMessage(message);

        std::cout << "\n";
    }

    void Logger::info(std::string message)
    {
        std::shared_ptr<Destination> des = getDestination();
        std::cout << "INFO: ";

        des->printMessage(message);

        std::cout << "\n";
    }
} // namespace TemplateMethodPattern