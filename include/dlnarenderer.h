#ifndef DLNARENDERER_H
#define DLNARENDERER_H
#include <QtNetwork>
#include <QObject>

class DLNARenderer : public QObject
{
    Q_OBJECT
public:
    explicit DLNARenderer( QUrl url, QObject *parent = 0 );
    QUrl getUrl();
    QString getControlUrl();
    QString getName();
    void setControlUrl( QString name );
    void setName( QString name );
    void setPlaybackUrl( QUrl url );
    void playPlayback();
    void setUrl( QUrl url );
private:
    QNetworkAccessManager *mgr;
    QUrl serverUrl;
    QUrl fullcontrolUrl;
    QString serverName;
    QString controlUrl;
private slots:
    void test(QNetworkReply* reply);
};

#endif // DLNARENDERER_H