#include "mainwindow.h"

#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QDateEdit>
#include <QGridLayout>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("Registration Form");

    // set main Widget
    QWidget widget(&w);
    w.setCentralWidget(&widget);

    // init vertical layout for main widget
    QVBoxLayout vLayout(&widget);

    // top name label
    QLabel topLabel;
    topLabel.setText("Fill Resgistration Form");
    vLayout.addWidget(&topLabel);

    // Grid Layout
    QGridLayout gridLayout;
    vLayout.addLayout(&gridLayout);
    QLabel nameLabel("Name");
    QLabel surnameLabel("Surname");
    QLabel dateLabel("Birth Date");
    QLabel ageLabel("Age");

    QLineEdit nameEdit;
    QLineEdit surnameEdit;
    QDateEdit dateEdit;
    dateEdit.setCalendarPopup(true);
    QSpinBox ageEdit;

    gridLayout.addWidget(&nameLabel,0,0);
    gridLayout.addWidget(&nameEdit,0,1);
    gridLayout.addWidget(&surnameLabel,1,0);
    gridLayout.addWidget(&surnameEdit,1,1);
    gridLayout.addWidget(&dateLabel,2,0);
    gridLayout.addWidget(&dateEdit,2,1);
    gridLayout.addWidget(&ageLabel,3,0);
    gridLayout.addWidget(&ageEdit,3,1);

    //init horizontal layout
    QHBoxLayout hLayout;
    vLayout.addLayout(&hLayout);

    QPushButton sendButton("Send");
    QPushButton cancelButton("Cancel");

    hLayout.addWidget(&sendButton);
    hLayout.addWidget(&cancelButton);

    w.show();
    return a.exec();
}
