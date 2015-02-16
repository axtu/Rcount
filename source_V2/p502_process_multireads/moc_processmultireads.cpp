/****************************************************************************
** Meta object code from reading C++ file 'processmultireads.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "processmultireads.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processmultireads.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_processMultireads[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   40,   50,   50, 0x08,
      51,   50,   50,   50, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_processMultireads[] = {
    "processMultireads\0runProcessor(QString)\0"
    "toProcess\0\0hideProgress()\0"
};

void processMultireads::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        processMultireads *_t = static_cast<processMultireads *>(_o);
        switch (_id) {
        case 0: _t->runProcessor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->hideProgress(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData processMultireads::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject processMultireads::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_processMultireads,
      qt_meta_data_processMultireads, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &processMultireads::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *processMultireads::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *processMultireads::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_processMultireads))
        return static_cast<void*>(const_cast< processMultireads*>(this));
    return QWidget::qt_metacast(_clname);
}

int processMultireads::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
