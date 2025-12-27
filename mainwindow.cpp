#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&m_webSocket, &QWebSocket::connected,
        this, &MainWindow::onConnected);

    connect(&m_webSocket, &QWebSocket::disconnected,
        this, &MainWindow::onDisconnected);

    connect(&m_webSocket, &QWebSocket::textMessageReceived,
        this, &MainWindow::onTextMessageReceived);
}

MainWindow::~MainWindow()
{
    m_webSocket.close();
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString ip = ui->IPDevice->text();  // 192.168.1.100
    QUrl url(QString("ws://192.168.1.100/ws").arg(ip));

    ui->labelStatus->setText("Connecting...");
    m_webSocket.open(url);
}

void MainWindow::onConnected()
{
    ui->labelStatus->setText("Connected");
    ui->labelStatus->setStyleSheet("color: green;");
}

void MainWindow::onDisconnected()
{
    ui->labelStatus->setText("Disconnected");
    ui->labelStatus->setStyleSheet("color: red;");
}

void MainWindow::onTextMessageReceived(QString message)
{
    qDebug() << "ESP32:" << message;

    if (message == "LOCKED")
        ui->labelStatus->setText("🔒 Door Locked");

    else if (message == "UNLOCKED")
        ui->labelStatus->setText("🔓 Door Unlocked");

    else if (message == "ALARM")
        ui->labelStatus->setText("🚨 ALARM");

    else if (message == "SAFE")
        ui->labelStatus->setText("✅ Safe");
}

void MainWindow::on_btnUnlock_clicked()
{
    if (m_webSocket.isValid())
        m_webSocket.sendTextMessage("UNLOCK");
}

void MainWindow::on_btnLock_clicked()
{
    if (m_webSocket.isValid())
        m_webSocket.sendTextMessage("LOCK");
}
