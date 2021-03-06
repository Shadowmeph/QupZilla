/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2012  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef DOWNLOADOPTIONSDIALOG_H
#define DOWNLOADOPTIONSDIALOG_H

#include <QDialog>
#include <QUrl>
#include <QCloseEvent>

#include "downloadmanager.h"

namespace Ui
{
class DownloadOptionsDialog;
}

class DownloadOptionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DownloadOptionsDialog(const QString &fileName, const QPixmap &fileIcon, const QString &mimeType, const QUrl &url, QWidget* parent = 0);
    ~DownloadOptionsDialog();

    void setLastDownloadOption(const DownloadManager::DownloadOption &option);

private slots:
    void emitDialogFinished(int status);

signals:
    void dialogFinished(int);

private:
    Ui::DownloadOptionsDialog* ui;
    bool m_signalEmited;
};

#endif // DOWNLOADOPTIONSDIALOG_H
