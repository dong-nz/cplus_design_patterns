#include "FileDestination.h"

namespace TemplateMethodPattern
{

    FileDestination::FileDestination(/* args */)
    {
    }

    FileDestination::~FileDestination()
    {
        std::cout << "FileDestination destructure called \n";
    }

    void FileDestination::printMessage(std::string message)
    {
        std::cout << "Print message in File Log: " << message;
    }
} // namespace TemplateMethodPattern