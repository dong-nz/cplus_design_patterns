/*
 * Command.cpp
 *
 *  Created on: Sep 5, 2019
 *      Author: dong
 */
#include "ConsoleLogger.h"
#include "FileLogger.h"
#include "iostream"
namespace TemplateMethodPattern
{
    class TemplateTest
    {
    public:
        void test();
    };

    void TemplateTest::test()
    {
        std::unique_ptr<Logger> logger = std::make_unique<ConsoleLogger>();
        logger->debug("Hello Template Method to Console");

        logger = std::make_unique<FileLogger>();

        logger->info("Log message to File");
    }
} // namespace TemplateMethodPattern

int main(int argc, char **argv)
{
    std::cout << "Template Method pattern \n";

    TemplateMethodPattern::TemplateTest test;

    test.test();
}
