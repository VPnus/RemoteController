#include "button.h"


Button::Button(const QString &text, QWidget *parent) : QToolButton(parent)
{
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    setText(text);


}

QSize Button::sizeHint() const
{
    QSize size = QToolButton::sizeHint();
    size.rheight() += 30;
    size.rwidth() = qMax(size.width(), size.height());
    return size;
}
