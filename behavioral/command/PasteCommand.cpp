#include "PasteCommand.h"

namespace CommandPattern
{

    PasteCommand::PasteCommand(Editor *editor)
    {
        this->editor = editor;
    }

    PasteCommand::~PasteCommand()
    {

    }

    void PasteCommand::execute()
    {
        std ::string clipboard = editor->getClipboard();
        std::string currentText = editor->getText();

        currentText.append(clipboard);

        editor->setText(currentText);
    }

    void PasteCommand::undo()
    {
    }
} // namespace CommandPattern