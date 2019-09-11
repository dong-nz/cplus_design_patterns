#if !defined(DESTINATION_H)
#define DESTINATION_H
#include "iostream"
namespace TemplateMethodPattern
{
    class Destination
    {
    private:
        /* data */
    public:
        virtual ~Destination() = default;
        virtual void printMessage(std::string message) = 0;
    };
} // namespace TemplateMethodPattern

#endif // DESTINATION_H
