#if !defined(FILE_DESTINATION_H)
#define FILE_DESTINATION_H

#include "Destination.h"

namespace TemplateMethodPattern
{
    class FileDestination : public Destination
    {
    private:
        /* data */
    public:
        FileDestination(/* args */);
        ~FileDestination();
        void printMessage(std::string message);
    };
} // namespace TemplateMethodPattern

#endif // FILE_DESTINATION_H
