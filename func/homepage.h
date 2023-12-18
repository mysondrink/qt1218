#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_homepage.h"

class homepage : public QMainWindow
{
    Q_OBJECT

public:
    homepage(QWidget* parent = nullptr);
    ~homepage();

private:
    Ui::homepageClass ui;
};
