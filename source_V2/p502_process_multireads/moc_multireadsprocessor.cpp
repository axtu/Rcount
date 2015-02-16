/****************************************************************************
** Meta object code from reading C++ file 'multireadsprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multireadsprocessor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multireadsprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_multireadsProcessor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   42,   50,   50, 0x05,
      51,   74,   50,   50, 0x05,
      81,  102,   50,   50, 0x05,
     111,   50,   50,   50, 0x05,
     123,  145,   50,   50, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,   50,   50,   50, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_multireadsProcessor[] = {
    "multireadsProcessor\0errorMessage(QString)\0"
    "message\0\0processStatus(QString)\0status\0"
    "processProgress(int)\0progress\0idleAgain()\0"
    "workFinished(QString)\0workString\0"
    "cancelProcessing()\0"
};

void multireadsProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        multireadsProcessor *_t = static_cast<multireadsProcessor *>(_o);
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->processStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->processProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->idleAgain(); break;
        case 4: _t->workFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->cancelProcessing(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData multireadsProcessor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject multireadsProcessor::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_multireadsProcessor,
      qt_meta_data_multireadsProcessor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &multireadsProcessor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *multireadsProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *multireadsProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_multireadsProcessor))
        return static_cast<void*>(const_cast< multireadsProcessor*>(this));
    return QThread::qt_metacast(_clname);
}

int multireadsProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void multireadsProcessor::errorMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void multireadsProcessor::processStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void multireadsProcessor::processProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void multireadsProcessor::idleAgain()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void multireadsProcessor::workFinished(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
