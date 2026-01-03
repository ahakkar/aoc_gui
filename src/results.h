#pragma once
#include <QWidget>

class results : public QObject
{
    Q_OBJECT
public:
    explicit results(QObject *parent = nullptr);

signals:
};
