#include "leftmenufunctionitemwidget.h"
#include "ui_leftmenufunctionitemwidget.h"
#include <QMouseEvent>
LeftMenuFunctionItemWidget::LeftMenuFunctionItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftMenuFunctionItemWidget)
{
    ui->setupUi(this);

}

LeftMenuFunctionItemWidget::~LeftMenuFunctionItemWidget()
{
    delete ui;
}

void LeftMenuFunctionItemWidget::setName(const QString name)
{
    ui->_function_name->setText(name);
}

void LeftMenuFunctionItemWidget::setComment(const QString comment)
{
    ui->_function_comment->setText(comment);
}
void LeftMenuFunctionItemWidget::mousePressEvent( QMouseEvent * e )
{
    // store click position
    _m_lastPoint = e->pos();
    // set the flag meaning "click begin"
    _m_mouseClick = true;
}

void LeftMenuFunctionItemWidget::mouseReleaseEvent ( QMouseEvent * e )
{
    // check if cursor not moved since click beginning
    if ((_m_mouseClick) && (e->pos() == _m_lastPoint))
    {
        // do something: for example emit Click signal
        emit onFocus();
    }
}
