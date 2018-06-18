#include "character.h"

character::character(QObject *parent) : QObject(parent)
{

}

void character::setColor(const String &somecolor)
{
    name=somecolor;
}

QString character::getColor() const
{
    return name;
}

QLabel character::setFeature()
{
    QLabel image;
    image.setPixmap(&feature);
}
