#ifndef FEATURE_H
#define FEATURE_H

#include <QObject>

class feature : public QObject
{
    Q_OBJECT
public:
    explicit feature(QObject *parent = nullptr);

signals:

public slots:
};

#endif // FEATURE_H