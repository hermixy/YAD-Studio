#include "LeftMenuWidget.h"
#include "ui_LeftMenuWidget.h"
#include "LeftMenuFunctionItemWidget.h"
#include <QStandardItemModel>
#include <QStringListModel>
#include <QVariant>
#include <QPushButton>

LeftMenuWidget::LeftMenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftMenuWidget)
{
    LeftMenuFunctionItemWidget* first = new LeftMenuFunctionItemWidget();
    first->setName("zero(x)");
    first->setComment("returns 0");

    LeftMenuFunctionItemWidget* second = new LeftMenuFunctionItemWidget();
    second->setName("plus1(x)");
    second->setComment("returns x+1");
    ui->setupUi(this);
    ui->verticalLayout_2->addWidget(first);
    ui->verticalLayout_2->addWidget(second);

}

LeftMenuWidget::~LeftMenuWidget()
{
    delete ui;
}
