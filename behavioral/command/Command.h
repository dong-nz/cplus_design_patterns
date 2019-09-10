/*
 * Command.cpp
 *
 *  Created on: Sep 5, 2019
 *      Author: dong
*/
#ifndef COMMAND_H
#define COMMAND_H

namespace CommandPattern
{
    class Command
    {
    public:
        virtual void execute() = 0;
        virtual void undo() = 0;
    };
} // namespace CommandPattern
#endif