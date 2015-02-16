/****************************************************************************
** Meta object code from reading C++ file 'createprojectwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p502_GUI/createProjectWidget/createprojectwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createprojectwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_createProjectWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   45,   54,   54, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   54,   54,   54, 0x08,
      80,   54,   54,   54, 0x08,
     100,   54,   54,   54, 0x08,
     126,   54,   54,   54, 0x08,
     147,   54,   54,   54, 0x08,
     169,   54,   54,   54, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_createProjectWidget[] = {
    "createProjectWidget\0savedNewProject(QString)\0"
    "fileName\0\0searchAnnotationInfile()\0"
    "searchReadsInfile()\0searchAnnotationOutfile()\0"
    "searchReadsOutfile()\0searchCountsOutfile()\0"
    "saveProject()\0"
};

void createProjectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        createProjectWidget *_t = static_cast<createProjectWidget *>(_o);
        switch (_id) {
        case 0: _t->savedNewProject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->searchAnnotationInfile(); break;
        case 2: _t->searchReadsInfile(); break;
        case 3: _t->searchAnnotationOutfile(); break;
        case 4: _t->searchReadsOutfile(); break;
        case 5: _t->searchCountsOutfile(); break;
        case 6: _t->saveProject(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData createProjectWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject createProjectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_createProjectWidget,
      qt_meta_data_createProjectWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &createProjectWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *createProjectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *createProjectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_createProjectWidget))
        return static_cast<void*>(const_cast< createProjectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int createProjectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void createProjectWidget::savedNewProject(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
