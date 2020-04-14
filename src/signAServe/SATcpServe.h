#ifndef SATCPSERVE_H
#define SATCPSERVE_H
#include <QTcpServer>
#include "SAServeGlobal.h"
class SATcpServePrivate;
class SATcpSocket;
/**
 * @brief QTcpServer的多线程支持
 * SATCPServe 以长链接为基础，每个socket都应该是长链接，由于每个socket都在一个线程中，短连接的效率会比较低
 */
class SASERVE_EXPORT SATcpServe : public QTcpServer
{
    Q_OBJECT
    SA_IMPL(SATcpServe)
public:
    SATcpServe(QObject *par = nullptr);
    ~SATcpServe();
    //获取当前所有socket
    QList<SATcpSocket*> getSockets() const;
    //virtual QTcpSocket * nextPendingConnection() override;
protected:
    void incomingConnection(qintptr socketDescriptor) override;
protected slots:
protected:
    //多线程模式，不允许调用此函数
    virtual bool hasPendingConnections() const override;
private slots:
    void onSectionFinished();
};

#endif // SATCPSERVE_H
