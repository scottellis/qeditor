#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Editor)
{
    ui->setupUi(this);

    connect(ui->actionExit, SIGNAL(triggered()), SLOT(onExit()));
    connect(ui->actionClear, SIGNAL(triggered()), SLOT(onClear()));
}

Editor::~Editor()
{
    delete ui;
}

void Editor::onExit()
{
    close();
}

void Editor::onClear()
{
    ui->textEdit->clear();
}
