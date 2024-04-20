#ifndef KYCPAGE_H
#define KYCPAGE_H

#include <QMainWindow>

namespace Ui {
class kycpage;
}

class kycpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit kycpage(QWidget *parent = nullptr);
    ~kycpage();

private:
    Ui::kycpage *ui;
private slots:
    void save_user();
};

#endif // KYPAGE_H
