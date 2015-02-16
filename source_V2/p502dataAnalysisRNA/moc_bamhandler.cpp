/****************************************************************************
** Meta object code from reading C++ file 'bamhandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p502_SOURCE/bamHandler/bamhandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bamhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bamHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   34,   47,   47, 0x05,
      48,   69,   47,   47, 0x05,
      75,   98,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   47,   47,   47, 0x0a,
     129,   47,   47,   47, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_bamHandler[] = {
    "bamHandler\0detectedError(QString)\0"
    "errorMessage\0\0xLinesProcessed(int)\0"
    "lines\0statsObtained(QString)\0statsString\0"
    "producerFinished()\0runCanceled()\0"
};

void bamHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bamHandler *_t = static_cast<bamHandler *>(_o);
        switch (_id) {
        case 0: _t->detectedError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->xLinesProcessed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->statsObtained((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->producerFinished(); break;
        case 4: _t->runCanceled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bamHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bamHandler::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_bamHandler,
      qt_meta_data_bamHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bamHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bamHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bamHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bamHandler))
        return static_cast<void*>(const_cast< bamHandler*>(this));
    return QThread::qt_metacast(_clname);
}

int bamHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void bamHandler::detectedError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bamHandler::xLinesProcessed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bamHandler::statsObtained(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
