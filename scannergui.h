#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include "ui_scannergui.h"
#include "scannernet.h"

class ScannerGUI : public QWidget, private Ui::ScannerGUI
{
    Q_OBJECT

public:
    explicit ScannerGUI(QWidget *parent = nullptr);
private slots:
    void on_start_btn_clicked();
private:
    scannerNET* m_scan;
};

#endif // SCANNERGUI_H
