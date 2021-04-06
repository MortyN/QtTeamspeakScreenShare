#pragma once

#include <QtWidgets/QWidget>
#include "ui_qwebapptest.h"

class qwebapptest : public QWidget
{
    Q_OBJECT

public:
    qwebapptest(QWidget *parent = Q_NULLPTR);

private:
    Ui::qwebapptestClass ui;
};
