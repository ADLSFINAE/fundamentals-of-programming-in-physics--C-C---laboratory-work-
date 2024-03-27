QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    generalwidget.cpp \
    main.cpp \
    myboard.cpp \
    myscene.cpp \
    myvectors.cpp \
    myview.cpp \
    vector.cpp \
    widgettochooseoperations.cpp \
    widgettochoosevectors.cpp \
    widgettocreatevector.cpp

HEADERS += \
	generalwidget.h \
	myboard.h \
	myscene.h \
	myvectors.h \
	myview.h \
	vector.h \
	widgettochooseoperations.h \
	widgettochoosevectors.h \
	widgettocreatevector.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
