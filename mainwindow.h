﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "about.h"
#include "label.h"
#include "settings.h"
#include "threshold.h"
#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QToolBar>
#include <QSplitter>
#include <QImage>
#include <QMovie>
#include <QLabel>
#include <QScrollArea>
#include <QClipboard>
#include <QPainter>
#include <QUndoStack>
#include <QTreeView>
#include <QFileSystemModel>
#include <QNetworkAccessManager>
#include <QPrinter>
#include <QPrintDialog>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createActions();
    void createMenus();
    void createToolbars();
    void loadFile(QString filename);

 private slots:
    void showOpenFile();
    void colorpicker();
    void zoomIn();
    void zoomOut();
    void hflip();
    void vflip();
    void rotate();
    void aboutMenu();
    void settingsMenu();
    void fullscreen();
    void saveAs();
    void save();
    void copytoclipboard();
    void newWindow();
    void imgur();
    void replyFinished();
    void print();
    void threshold();
    void histogram();
    void updateimg(int);
    void ok();
    void cancel();
    void loadfileviatree(QModelIndex);
    void alwaysontop();
    void dirup();
    void dirhome();
 private:
    QSplitter *spliter;
    QFileSystemModel *model;
    QTreeView *tree;
    Threshold *thresholdWin;
    QPainter *painter;
    QPrinter printer;
    QPrintDialog pdialog;
    QNetworkAccessManager *manager;
    QUndoStack *undoStack = nullptr;
    QClipboard *clipboard;
    About *aWin;
    Settings *sWin;
    QWidget *center;
    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenu *viewMenu;
    QMenu *editMenu;
    QMenu *shareMenu;
    QMenu *toolsMenu;
    QScrollArea *imageScrollArea;
    QToolBar *fileTool;
    QToolBar *ImageTool;
    QToolBar *treeviewTool;
    QImage img;
    QMovie gif;
    QImage histogramimg;
    QImage result;
    QString filename;
    Label *imgWin;
    Label *tempWin;
    QLabel *histogramWin;
    QAction *dirupAction;
    QAction *dirhomeAction;
    QAction *alwaysontopAction;
    QAction *histogramAction;
    QAction *thresholdAction;
    QAction *openFileAction;
    QAction *printAction;
    QAction *saveAction;
    QAction *imgurAction;
    QAction *imgbbAction;
    QAction *imageshackAction;
    QAction *newWindowAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *saveAsAction;
    QAction *zoomInAction;
    QAction *zoomOutAction;
    QAction *fullscreenAction;
    QAction *clipboardAction;
    QAction *exitAction;
    QAction *hFlipAction;
    QAction *vFlipAction;
    QAction *rotateAction;
    QAction *penAction;
    QAction *colorpickerAction;
    QAction *cursorAction;
    QAction *aboutAction;
    QAction *settingAction;
    QAction *checkupdateAction;
    unsigned int mtx[256];
};
#endif // MAINWINDOW_H
