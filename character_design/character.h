#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QLabel>
#include<QString>
#include<QList>
#include <QComboBox>
#include<QLabel>
#include "feature.h"

class character : public QObject
{
    Q_OBJECT
public:
    explicit character(QObject *parent = nullptr,QLabel* label= new QLabel);
    void addfeature(feature*);
    void setComboBox(QComboBox* );
    int size() const;
    QString get_name(int pos) const;


signals:

public slots:
    void setLabel(const QString &);
private:
    QList<feature*> property;
    QLabel* show;

};

#endif // CHARACTER_H
