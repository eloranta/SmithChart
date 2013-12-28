#include <QMainWindow>
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QMainWindow window;
  window.show();
  app.exec();
  return 0;
}