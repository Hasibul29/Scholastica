QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    apply.cpp \
    deletepost.cpp \
    extra.cpp \
    greport.cpp \
    guardianhome.cpp \
    guardianlogin.cpp \
    gupdate.cpp \
    guradiansignup.cpp \
    main.cpp \
    home.cpp \
    notifications.cpp \
    requests.cpp \
    trating.cpp \
    treport.cpp \
    tupdate.cpp \
    tutorhome.cpp \
    tutorlogin.cpp \
    tutorsignup.cpp

HEADERS += \
    apply.h \
    deletepost.h \
    extra.h \
    greport.h \
    guardianhome.h \
    guardianlogin.h \
    gupdate.h \
    guradiansignup.h \
    home.h \
    notifications.h \
    requests.h \
    trating.h \
    treport.h \
    tupdate.h \
    tutorhome.h \
    tutorlogin.h \
    tutorsignup.h

FORMS += \
    apply.ui \
    deletepost.ui \
    extra.ui \
    greport.ui \
    guardianhome.ui \
    guardianlogin.ui \
    gupdate.ui \
    guradiansignup.ui \
    home.ui \
    notifications.ui \
    requests.ui \
    trating.ui \
    treport.ui \
    tupdate.ui \
    tutorhome.ui \
    tutorlogin.ui \
    tutorsignup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    resources.qrc

DISTFILES += \
    .qmake.stash \
    Database/Scholastica.db \
    img/1390899.jpg \
    img/1772226 (1).jpg \
    img/89349733_576170769644554_5345067871951126528_n.jpg \
    img/aaa.jpg \
    img/aaaaa.html \
    img/aaqsd.jpg \
    img/aasd.png \
    img/apply.png \
    img/art-art-materials-brush-color-207666.jpg \
    img/as.jpg \
    img/asd \
    img/asd.png \
    img/backbutoonyblack.jpg \
    img/backbutoonyellow.jpg \
    img/bbtn.png \
    img/icon.png \
    img/icon1.png \
    img/inside.jpg \
    img/logout.png \
    img/logout2.png \
    img/pexels-photo-2675047.jpeg \
    img/pngflow.com.png \
    img/report2.png \
    img/request.png \
    img/sadasd.png \
    img/sdf.jpg \
    img/syy.png \
    img/tutorbg.jpg \
    img/update.png \
    img/wp3191285.jpg \
    object_script.Scholastica
