#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QLabel>
#include<QString>

class character : public QObject
{
    Q_OBJECT
public:
    explicit character(QObject *parent = nullptr);
    void setName(const& QString);
    QString getName() const;
    QLabel setFeature();
signals:

public slots:

private:
    QPixmap feature;
    QString name;
};

#endif // CHARACTER_H
