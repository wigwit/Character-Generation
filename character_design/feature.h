#ifndef FEATURE_H
#define FEATURE_H

#include <QObject>
#include<QString>
#include<QLabel>

class feature : public QObject
{
    Q_OBJECT
public:
    explicit feature(QObject *parent = 0, QString new_name="", QString new_address="");
    void setName(const QString &);
    void setImage(const QString &);
    QString getName() const;
    QPixmap getImage() const;

signals:

public slots:

private:
    QString name;
    QPixmap image;
};

#endif // FEATURE_H
