#if !defined(FILE_LOGGER_H)
#define FILE_LOGGER_H

#include "FileDestination.h"
#include "Logger.h"
#include "memory"

namespace TemplateMethodPattern
{
    class FileLogger : public Logger
    {
    private:
        /* data */
        std::shared_ptr<Destination> des;

    public:
        FileLogger(/* args */);
        ~FileLogger();

    protected:
        std::shared_ptr<Destination> getDestination() override;
    };
} // namespace TemplateMethodPattern

#endif // FILE_LOGGER_H
