#ifndef SCANNERNET_H
#define SCANNERNET_H

#include <QObject>

class scannerNET : public QObject
{
    Q_OBJECT
public:
    explicit scannerNET(QObject *parent = nullptr);

    void doScan(const QString& hostname, int port) const;

signals:

public slots:
};

#endif // SCANNERNET_H
