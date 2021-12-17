#include "scannergui.h"
#include <QDebug>

#include "scannernet.h"

ScannerGUI::ScannerGUI(QWidget *parent) :
    QWidget(parent)
{

    m_scan = new scannerNET;
    setupUi(this);
}

void ScannerGUI::on_start_btn_clicked()
{
    QString host = port_input ->text();
    int port;
    qDebug() << "click";
    m_scan ->doScan() << port_input ->text() << " " << host_input ->text();
}
