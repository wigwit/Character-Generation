#include "feature.h"

feature::feature(QObject *parent, QString new_name, QString new_address) : QObject(parent),name(new_name)
{

   image=QPixmap(new_address);
}

void feature::setName(const QString & new_name)
{

    name=new_name;
}

void feature::setImage(const QString & new_address)
{
    image=QPixmap(new_address);
}

QString feature::getName() const
{
    return name;
}

QPixmap feature::getImage() const
{
    return image;
}


