#ifndef PASTE_COMMAND_H
#define PASTE_COMMAND_H

#include "Command.h"
#include "Editor.h"
#include "string"
namespace CommandPattern
{
    class PasteCommand : public Command
    {
        private:
            Editor *editor;

        public:
            PasteCommand(Editor *editor);
            ~PasteCommand();
            void execute();
            void undo();
    };
} // namespace CommandPattern
#endif