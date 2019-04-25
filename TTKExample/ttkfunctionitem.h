#ifndef TTKFUNCTIONITEM_H
#define TTKFUNCTIONITEM_H

/* =================================================
 * This file is part of the TTK WidgetTools project
 * Copyright (C) 2015 - 2019 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QLabel>
#include "ttkglobaldefine.h"

class TTK_CORE_EXPORT TTKFunctionItem : public QWidget
{
    Q_OBJECT
public:
    explicit TTKFunctionItem(const QString &path, const QString &text, QWidget *parent = nullptr);
    ~TTKFunctionItem();

    void setIcon(const QString &path);
    void setText(const QString &text);

private:
    QLabel *m_iconLabel, *m_textLabel;

};

#endif // TTKFUNCTIONITEM_H