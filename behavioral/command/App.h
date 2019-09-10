#ifndef APP_H
#define APP_H

#include "Command.h"
#include "CopyCommand.h"
#include "Editor.h"
#include "PasteCommand.h"
#include "string"

namespace CommandPattern
{
    class App
    {
    private:
        Editor *editor;
        void executeCommand(Command &command);

    public:
        App(Editor *editor);
        ~App();
        std::string copy();
        void paste();
        std::string getEditorText();
    };
} // namespace CommandPattern
#endif