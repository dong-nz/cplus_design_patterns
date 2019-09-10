#include "App.h"

namespace CommandPattern
{

    App::App(Editor *editor)
    {
        this->editor = editor;
    }

    App::~App()
    {
        if (editor)
            delete editor;
    }

    std::string App::copy()
    {
        CopyCommand copyCmd(editor);
        executeCommand(copyCmd);

        return editor->getClipboard();
    }

    void App::paste()
    {
        PasteCommand pasteCmd(editor);
        executeCommand(pasteCmd);
    }

    void App::executeCommand(Command &command)
    {
        command.execute();
    }

    std::string App::getEditorText()
    {
        return editor->getText();
    }
} // namespace CommandPattern
