/****************************************************************************
** Meta object code from reading C++ file 'formatwizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formatwizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formatwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_formatwizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   37,   41,   41, 0x05,
      42,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   41,   41,   41, 0x08,
      67,   37,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_formatwizard[] = {
    "formatwizard\0enableTreeView(QString)\0"
    "str\0\0enableOutfile()\0do_sth()\0"
    "check_updated_priorities(QString)\0"
};

void formatwizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        formatwizard *_t = static_cast<formatwizard *>(_o);
        switch (_id) {
        case 0: _t->enableTreeView((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->enableOutfile(); break;
        case 2: _t->do_sth(); break;
        case 3: _t->check_updated_priorities((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData formatwizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject formatwizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_formatwizard,
      qt_meta_data_formatwizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &formatwizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *formatwizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *formatwizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_formatwizard))
        return static_cast<void*>(const_cast< formatwizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int formatwizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void formatwizard::enableTreeView(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void formatwizard::enableOutfile()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_InfilePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InfilePage[] = {
    "InfilePage\0search_infile()\0\0"
};

void InfilePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InfilePage *_t = static_cast<InfilePage *>(_o);
        switch (_id) {
        case 0: _t->search_infile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData InfilePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InfilePage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_InfilePage,
      qt_meta_data_InfilePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InfilePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InfilePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InfilePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfilePage))
        return static_cast<void*>(const_cast< InfilePage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int InfilePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_StructurePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   42,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x08,
      66,   42,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StructurePage[] = {
    "StructurePage\0structure_modified(QString)\0"
    "str\0\0update_structure()\0create_tree(QString)\0"
};

void StructurePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StructurePage *_t = static_cast<StructurePage *>(_o);
        switch (_id) {
        case 0: _t->structure_modified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->update_structure(); break;
        case 2: _t->create_tree((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StructurePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StructurePage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_StructurePage,
      qt_meta_data_StructurePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StructurePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StructurePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StructurePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StructurePage))
        return static_cast<void*>(const_cast< StructurePage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int StructurePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void StructurePage::structure_modified(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_OutfilePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OutfilePage[] = {
    "OutfilePage\0search_outfile()\0\0"
};

void OutfilePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OutfilePage *_t = static_cast<OutfilePage *>(_o);
        switch (_id) {
        case 0: _t->search_outfile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OutfilePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OutfilePage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_OutfilePage,
      qt_meta_data_OutfilePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutfilePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutfilePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutfilePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutfilePage))
        return static_cast<void*>(const_cast< OutfilePage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int OutfilePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MessagePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_MessagePage[] = {
    "MessagePage\0"
};

void MessagePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MessagePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessagePage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_MessagePage,
      qt_meta_data_MessagePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessagePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessagePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessagePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessagePage))
        return static_cast<void*>(const_cast< MessagePage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int MessagePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
