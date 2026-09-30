// widget_events.cpp
#include "widget_events.hpp"

#include <QMetaEnum>
#include <iostream>

// references code from provided links in specification
WidgetEvent::WidgetEvent(QWidget *topLevel) : QWidget(topLevel) {}

bool WidgetEvent::event(QEvent *e) {
    static const QMetaEnum typeEnum = QMetaEnum::fromType<QEvent::Type>();
    const char *title = typeEnum.valueToKey(e->type());

    // prints out even event that takes place in the window
    // custom events will not have a name
    std::cout << "Event: QEvent::" << (title ? title : "UnknownTitle")
                << " (" << static_cast<int>(e->type()) << ")" << std::endl;

    // return as event handled
    return true;
}
