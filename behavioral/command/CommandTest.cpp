#include "Command.h"
#include "App.h"
#include "Editor.h"
#include "iostream"

namespace CommandPattern
{
    class CommandTest
    {
    private:
        /* data */

    public:
        CommandTest(/* args */);
        ~CommandTest();
        void test();
    };

    CommandTest::CommandTest(/* args */)
    {
    }

    CommandTest::~CommandTest()
    {
    }

    void CommandTest::test()
    {
        Editor editor;
        App *app = new App(&editor);

        std::string dummyText = "Hello World";
        std::string dummySelection = dummyText.substr(5);
        editor.setText(dummyText);
        editor.setSelection(dummySelection);

        std::cout << "Current text: " << editor.getText() << "\n";

        std::cout << "Copy the current selection into clipboard in Editor: " << app->copy() << "\n";

        app->paste();

        std::cout << "Paste the clipboard at the end of editor: " << app->getEditorText() << "\n";
    }

} // namespace CommandPattern

int main(int argc, char const *argv[])
{
    CommandPattern::CommandTest test;
    test.test();
    return 0;
}