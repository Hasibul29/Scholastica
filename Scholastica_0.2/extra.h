#ifndef EXTRA_H
#define EXTRA_H

#include <QDialog>
#include<QtGlobal>

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

// that way you aren't compiling QString into every header file you put this in...
// aka faster build times.

#define MAGIC_NUM 42

extern QString tuser; // Note the important use of extern!
extern QString guser;
extern double avgr;
extern qreal rated;
extern qreal noc;

#endif // EXTRA_H
