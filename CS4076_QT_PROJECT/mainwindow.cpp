//Name:Stephen Walsh ID:21334234

#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create a menu bar
    QMenuBar *menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    // Create a "File" menu
    QMenu *fileMenu = menuBar->addMenu(tr("File"));

    // Add "New" action
    QAction *newAction = new QAction(tr("New"), this);
    connect(newAction, &QAction::triggered, this, &MainWindow::newRecipe); // Connect "New" action to newRecipe() function
    fileMenu->addAction(newAction);

    // Add "Open" action
    QAction *openAction = new QAction(tr("Open"), this);
    fileMenu->addAction(openAction);

    // Add "Exit" action
    QAction *exitAction = new QAction(tr("Exit"), this);
    connect(exitAction, &QAction::triggered, this, &QWidget::close); // Connect "Exit" action to close the main window
    fileMenu->addAction(exitAction);

    // Set the main window title and size
    setWindowTitle(tr("Cooking Recipe Application"));
    setFixedSize(800, 600);
}

MainWindow::~MainWindow()
{
    delete ui;
}
