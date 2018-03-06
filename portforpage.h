#ifndef PORTFORPAGE_H
#define PORTFORPAGE_H

#include <QWidget>
#include <memory>

namespace Ui {
class PortforPage;
}

class PortforPage : public QWidget
{
    Q_OBJECT

public:
    explicit PortforPage(QWidget *parent = 0);
    static PortforPage * instance();
    ~PortforPage();
    static bool IsExists()
    {
        return (mInstance.get() != NULL);
    }

private slots:
    void on_pushButton_2_clicked();

    void on_ToDash_clicked();

private:
    Ui::PortforPage *ui;
    static std::auto_ptr<PortforPage> mInstance;
};

#endif // PORTPAGE_H
