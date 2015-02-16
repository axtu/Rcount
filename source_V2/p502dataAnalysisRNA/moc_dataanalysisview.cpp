/****************************************************************************
** Meta object code from reading C++ file 'dataanalysisview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p502_GUI/dataAnalysisViewWidget/dataanalysisview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataanalysisview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dataAnalysisView[] = {

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
      17,   33,   33,   33, 0x08,
      34,   33,   33,   33, 0x08,
      48,   73,   33,   33, 0x08,
      82,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dataAnalysisView[] = {
    "dataAnalysisView\0createProject()\0\0"
    "loadProject()\0runDataAnalysis(QString)\0"
    "fileName\0hideProgress()\0"
};

void dataAnalysisView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dataAnalysisView *_t = static_cast<dataAnalysisView *>(_o);
        switch (_id) {
        case 0: _t->createProject(); break;
        case 1: _t->loadProject(); break;
        case 2: _t->runDataAnalysis((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->hideProgress(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dataAnalysisView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dataAnalysisView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dataAnalysisView,
      qt_meta_data_dataAnalysisView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dataAnalysisView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dataAnalysisView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dataAnalysisView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dataAnalysisView))
        return static_cast<void*>(const_cast< dataAnalysisView*>(this));
    return QWidget::qt_metacast(_clname);
}

int dataAnalysisView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
