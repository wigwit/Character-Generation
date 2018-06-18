#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QLabel>
#include<QString>
#include<QList>
#include <QComboBox>
#include<QLabel>
class character : public QObject
{
//    Q_PROPERTY(QPixmap feature READ feature WRITE setFeature NOTIFY featureChanged)
    Q_OBJECT
public:
    explicit character(QObject *parent = nullptr,QLabel* label= new QLabel);
    void addIndex(const QString&);// note: index and image must match for each other
    void addImage(const QString&);
    void setComboBox(QComboBox* );
    int size() const;
    QString get_name(int pos) const;

signals:

public slots:
    void setLabel(const QString &);
private:
    QList<QString> index;
    QList<QPixmap> image;
    QLabel* show;

};

#endif // CHARACTER_H
