/****************************************************************************
** Meta object code from reading C++ file 'consoleRunner.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "consoleRunner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consoleRunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_consoleRunner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   34,   40,   40, 0x08,
      41,   62,   40,   40, 0x08,
      69,   88,   40,   40, 0x08,
      97,  117,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_consoleRunner[] = {
    "consoleRunner\0printStats(QString)\0"
    "stats\0\0printStatus(QString)\0status\0"
    "printProgress(int)\0progress\0"
    "printError(QString)\0errorMessage\0"
};

void consoleRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        consoleRunner *_t = static_cast<consoleRunner *>(_o);
        switch (_id) {
        case 0: _t->printStats((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->printStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->printProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->printError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData consoleRunner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject consoleRunner::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_consoleRunner,
      qt_meta_data_consoleRunner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &consoleRunner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *consoleRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *consoleRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_consoleRunner))
        return static_cast<void*>(const_cast< consoleRunner*>(this));
    return QThread::qt_metacast(_clname);
}

int consoleRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
