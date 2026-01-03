#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create window and configure it
    QMainWindow window;
    window.resize(1280, 960);
    window.setWindowTitle("AoC_gui");

    // Add stuff to window
    QPushButton button("Hello World", &window);

    // Show the window
    window.show();

    return app.exec();
}
