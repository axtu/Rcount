/****************************************************************************
** Meta object code from reading C++ file 'dataanalysis.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p502_SOURCE/dataAnalysis/dataanalysis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dataAnalysis[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   35,   43,   43, 0x05,
      44,   43,   43,   43, 0x05,
      58,   82,   43,   43, 0x05,
      89,  111,   43,   43, 0x05,
     120,  151,   43,   43, 0x05,
     160,   43,   43,   43, 0x05,
     182,   43,   43,   43, 0x05,
     194,  223,   43,   43, 0x05,
     235,  223,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
     264,  281,   43,   43, 0x08,
     290,  281,   43,   43, 0x08,
     307,  223,   43,   43, 0x08,
     328,  223,   43,   43, 0x08,
     349,   43,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dataAnalysis[] = {
    "dataAnalysis\0errorMessage(QString)\0"
    "message\0\0stopThreads()\0analysisStatus(QString)\0"
    "status\0analysisProgress(int)\0progress\0"
    "analysisCountsWritten(QString)\0fileName\0"
    "everythingProcessed()\0idleAgain()\0"
    "readerStatsObtained(QString)\0statsString\0"
    "writerStatsObtained(QString)\0"
    "readerLines(int)\0numLines\0writerLines(int)\0"
    "readerStats(QString)\0writerStats(QString)\0"
    "cancelDataAnalysis()\0"
};

void dataAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dataAnalysis *_t = static_cast<dataAnalysis *>(_o);
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stopThreads(); break;
        case 2: _t->analysisStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->analysisProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->analysisCountsWritten((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->everythingProcessed(); break;
        case 6: _t->idleAgain(); break;
        case 7: _t->readerStatsObtained((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->writerStatsObtained((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->readerLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->writerLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->readerStats((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->writerStats((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->cancelDataAnalysis(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dataAnalysis::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dataAnalysis::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_dataAnalysis,
      qt_meta_data_dataAnalysis, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dataAnalysis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dataAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dataAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dataAnalysis))
        return static_cast<void*>(const_cast< dataAnalysis*>(this));
    return QThread::qt_metacast(_clname);
}

int dataAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void dataAnalysis::errorMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dataAnalysis::stopThreads()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void dataAnalysis::analysisStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dataAnalysis::analysisProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dataAnalysis::analysisCountsWritten(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dataAnalysis::everythingProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void dataAnalysis::idleAgain()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void dataAnalysis::readerStatsObtained(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void dataAnalysis::writerStatsObtained(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
