#ifndef SERVER_H
#define SERVER_H


#include <memory>
#include <QWidget>

namespace Ui {
class Server;
}

class Server : public QWidget
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();
    static Server * instance();

private:
    Ui::Server *ui;
    static std::auto_ptr<Server> mInstance;
};

#endif // SERVER_H
