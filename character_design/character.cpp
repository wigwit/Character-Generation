#include "character.h"

character::character(QObject *parent,QLabel* label) : QObject(parent),show(label)
{

}

void character::addImage(const QString & address)
{
    QPixmap new_image(address);
    image.append(new_image);
}

void character::setComboBox(QComboBox* box)
{
 box->addItems(index);
}

void character::setLabel(const QString & name)
{
    for(int i=0;i<size();i++)
    {
        if (index[i]==name)
        {
            int w=show->width();
            int h=show->height();
            show->setPixmap(image[i]);
        }
    }
}

int character::size() const
{
    return image.size();
}

QString character::get_name(int pos) const
{
    return index[pos];
}

void character::addIndex(const QString & new_index)
{
 index.append(new_index);
}

