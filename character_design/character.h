#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QLabel>
#include<QString>
#include<QList>

class character : public QObject
{
//    Q_PROPERTY(QPixmap feature READ feature WRITE setFeature NOTIFY featureChanged)
    Q_OBJECT
public:
    explicit character(QObject *parent = nullptr);
    void setName(const& QString);
    QString getName() const;
    QLabel setFeature();
signals:

public slots:

private:
    QString name;// the name of a property
    QPixmap* feature; // the actual feature
    QList<QPixmap> block;
};

#endif // CHARACTER_H
