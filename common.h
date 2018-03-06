#ifndef COMMON_H
#define COMMON_H


#include <memory>
#include <QObject>
#include <QFont>

class Common : public QObject
{
    Q_OBJECT
public:
    explicit Common(QObject *parent = 0);
    static Common * instance();


signals:

public slots:
private:
    static std::auto_ptr<Common> mInstance;
};

#endif // COMMON_H
