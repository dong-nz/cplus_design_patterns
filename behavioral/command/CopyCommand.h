#ifndef COPY_COMMAND_H
#define COPY_COMMAND_H

#include "Command.h"
#include "Editor.h"
#include "string"
namespace CommandPattern
{
    class CopyCommand : public Command
    {
    private:
        Editor *editor;

    public:
        CopyCommand(Editor *editor);
        ~CopyCommand();
        void execute();
        void undo();
    };
} // namespace CommandPattern
#endif