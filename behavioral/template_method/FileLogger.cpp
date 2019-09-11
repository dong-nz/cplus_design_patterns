#include "FileLogger.h"

namespace TemplateMethodPattern
{

    FileLogger::FileLogger(/* args */)
    {
        des = std::make_shared<FileDestination>();
    }

    FileLogger::~FileLogger()
    {
        std::cout << "FileLogger destructor called\n ";
    }

    std::shared_ptr<Destination> FileLogger::getDestination()
    {
        return des;
    }
} // namespace TemplateMethodPattern