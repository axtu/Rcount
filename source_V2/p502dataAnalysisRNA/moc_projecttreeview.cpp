/****************************************************************************
** Meta object code from reading C++ file 'projecttreeview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p502_GUI/projectTreeViewWidget/projecttreeview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projecttreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_projectTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   29,   29,   29, 0x05,
      30,   29,   29,   29, 0x05,
      44,   29,   29,   29, 0x05,
      68,   29,   29,   29, 0x05,
      91,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,  144,   29,   29, 0x08,
     150,   29,   29,   29, 0x08,
     166,   29,   29,   29, 0x08,
     179,   29,   29,   29, 0x08,
     195,   29,   29,   29, 0x0a,
     217,  237,   29,   29, 0x0a,
     246,  264,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_projectTreeView[] = {
    "projectTreeView\0newClicked()\0\0"
    "openClicked()\0runClickedFile(QString)\0"
    "closedProject(QString)\0currentProject(QString)\0"
    "switchedProject(QModelIndex)\0index\0"
    "resizeColumns()\0runClicked()\0"
    "runAllClicked()\0closeCurrentProject()\0"
    "addProject(QString)\0fileName\0"
    "addStats(QString)\0statsString\0"
};

void projectTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        projectTreeView *_t = static_cast<projectTreeView *>(_o);
        switch (_id) {
        case 0: _t->newClicked(); break;
        case 1: _t->openClicked(); break;
        case 2: _t->runClickedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->closedProject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->currentProject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->switchedProject((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: _t->resizeColumns(); break;
        case 7: _t->runClicked(); break;
        case 8: _t->runAllClicked(); break;
        case 9: _t->closeCurrentProject(); break;
        case 10: _t->addProject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->addStats((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData projectTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject projectTreeView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_projectTreeView,
      qt_meta_data_projectTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &projectTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *projectTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *projectTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_projectTreeView))
        return static_cast<void*>(const_cast< projectTreeView*>(this));
    return QWidget::qt_metacast(_clname);
}

int projectTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void projectTreeView::newClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void projectTreeView::openClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void projectTreeView::runClickedFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void projectTreeView::closedProject(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void projectTreeView::currentProject(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
