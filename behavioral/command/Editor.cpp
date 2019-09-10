#include "Editor.h"

namespace CommandPattern
{

    Editor::Editor(/* args */)
    {
    }

    Editor::~Editor()
    {
    }

    std::string Editor::getText()
    {
        return text;
    }

    void Editor::setText(std::string &text)
    {
        this->text = text;
    }

    void Editor::setSelection(std::string &currentSelection)
    {
        this->currentSelection = currentSelection;
    }
    std::string Editor::getClipboard()
    {
        return clipboard;
    }

    std::string Editor::getSelection()
    {
        return currentSelection;
    }

    void Editor::setClipboard(std::string &currentSelection)
    {
        clipboard = currentSelection;
    }
} // namespace CommandPattern