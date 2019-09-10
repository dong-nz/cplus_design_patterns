#ifndef EDITOR_H
#define EDITOR_H

#include "string"
namespace CommandPattern
{
    class Editor
    {
    private:
        std::string text;
        std::string currentSelection;
        std::string clipboard;

    public:
        Editor();
        ~Editor();

        void setText(std::string &text);
        std::string getText();
        void setSelection(std::string &currentSelection);
        std::string getSelection();
        std::string getClipboard();
        void setClipboard(std::string &currentSelection);
    };
} // namespace CommandPattern
#endif