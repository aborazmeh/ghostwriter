#ifndef TRANSLATION_PANEL_H
#define TRANSLATION_PANEL_H

#include "MarkdownEditor.h"

class TranslationPanel : public MarkdownEditor
{
    Q_OBJECT

    public:
        TranslationPanel(
            TextDocument* document,
            QWidget* parent = 0
        );

        virtual ~TranslationPanel();

        void update();

    signals:

    public slots:
};

#endif
