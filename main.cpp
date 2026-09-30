// main.cpp
#include "widget_events.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
      QApplication newApp(argc, argv);

      WidgetEvent newWidget;
      newWidget.resize(400, 300);
      newWidget.setWindowTitle("exercise 10");
      newWidget.show();

      return newApp.exec(); // enters the event loop
}
