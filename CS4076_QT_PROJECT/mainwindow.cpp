#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, RecipeBook *recipeBook)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_recipeBook(recipeBook)
{
    ui->setupUi(this);
    connect(ui->actionNew_Recipe, &QAction::triggered, this, &MainWindow::newRecipe);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::on_actionOpen_triggered);

    // Load recipes from file
    m_recipeBook->loadFromFile("recipes.dat");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newRecipe()
{
    RecipeWindow recipeWindow(this, m_recipeBook);
    recipeWindow.setModal(true);
    recipeWindow.exec();
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Recipe File"), "", tr("Recipe Files (*.recipe);;All Files (*)"));
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Error"), tr("Could not open file."));
        return;
    }

    QTextStream in(&file);
    QString name = in.readLine();
    QString ingredients = in.readLine();
    QString instructions = in.readAll();

    Recipe recipe(name, ingredients, instructions);
    m_recipeBook->addRecipe(recipe);

    file.close();
}


