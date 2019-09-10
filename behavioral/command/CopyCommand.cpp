#include "CopyCommand.h"

namespace CommandPattern
{
    CopyCommand::CopyCommand(Editor *editor)
    {
        this->editor = editor;
    }

    CopyCommand::~CopyCommand()
    {
    }

    void CopyCommand::execute(){
        std::string text = editor->getSelection();
        editor->setClipboard(text);
    }

    void CopyCommand::undo(){

    }
} // namespace CommandPattern