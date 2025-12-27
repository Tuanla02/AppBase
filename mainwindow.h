#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onConnected();
    void onDisconnected();
    void onTextMessageReceived(QString message);

    void on_btnLock_clicked();
    void on_btnUnlock_clicked();
    void on_pushButton_clicked();   // nút Connect

private:
    Ui::MainWindow *ui;
    QWebSocket m_webSocket;
};
#endif // MAINWINDOW_H
