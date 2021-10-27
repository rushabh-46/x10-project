/*************************************************/
/* START of PaperEG */
#include <PaperEG.h>

#include <PaperEG__A.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Long.h>
#include <PaperEG__B.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/xrx/FinishState.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef PAPEREG__CLOSURE__2_CLOSURE
#define PAPEREG__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 36 "../PaperEG.x10"
        x10_long y = ::x10aux::nullCheck(b)->FMGL(r1);
        
        //#line 37 "../PaperEG.x10"
        ::PaperEG__A* c = a;
        
        //#line 38 "../PaperEG.x10"
        ::x10aux::nullCheck(c)->FMGL(r1) = ((x10_long)10ll);
        
        //#line 39 "../PaperEG.x10"
        x10_long z = ::x10aux::nullCheck(a)->FMGL(r1);
        
    }
    
    // captured environment
    ::PaperEG__B* b;
    ::PaperEG__A* a;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->b);
        buf.write(this->a);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__2* storage = ::x10aux::alloc_z<PaperEG__closure__2>();
        buf.record_reference(storage);
        ::PaperEG__B* that_b = buf.read< ::PaperEG__B*>();
        ::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();
        PaperEG__closure__2* this_ = new (storage) PaperEG__closure__2(that_b, that_a);
        return this_;
    }
    
    PaperEG__closure__2(::PaperEG__B* b, ::PaperEG__A* a) : b(b), a(a) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "../PaperEG.x10:35-40";
    }

};

#endif // PAPEREG__CLOSURE__2_CLOSURE
#ifndef PAPEREG__CLOSURE__3_CLOSURE
#define PAPEREG__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 46 "../PaperEG.x10"
        x10_long xx = ::x10aux::nullCheck(a)->FMGL(r1);
        
        //#line 47 "../PaperEG.x10"
        x10_long yy = ::x10aux::nullCheck(a)->FMGL(r2);
        
    }
    
    // captured environment
    ::PaperEG__A* a;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->a);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__3* storage = ::x10aux::alloc_z<PaperEG__closure__3>();
        buf.record_reference(storage);
        ::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();
        PaperEG__closure__3* this_ = new (storage) PaperEG__closure__3(that_a);
        return this_;
    }
    
    PaperEG__closure__3(::PaperEG__A* a) : a(a) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "../PaperEG.x10:45-48";
    }

};

#endif // PAPEREG__CLOSURE__3_CLOSURE
#ifndef PAPEREG__CLOSURE__1_CLOSURE
#define PAPEREG__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 23 "../PaperEG.x10"
        ::x10aux::nullCheck(a)->FMGL(r2) = ((x10_long)1ll);
        
        //#line 24 "../PaperEG.x10"
        x10_long x = ::x10aux::nullCheck(a)->FMGL(r2);
        
        //#line 25 "../PaperEG.x10"
        ::PaperEG__B* b = ::PaperEG__B::_make(saved_this);
        
        //#line 26 "../PaperEG.x10"
        ::x10aux::nullCheck(b)->FMGL(r1) = ((x10_long)1ll);
        
        //#line 28 "../PaperEG.x10"
        ::x10::lang::PlaceGroup* D = ::x10::lang::Place::places();
        
        //#line 30 "../PaperEG.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Place>* i__170;
            for (i__170 = D->iterator(); ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(i__170));
                 ) {
                ::x10::lang::Place i = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(i__170));
                
                //#line 32 "../PaperEG.x10"
                ::x10aux::nullCheck(b)->FMGL(r3) = a;
                {
                    
                    //#line 34 "../PaperEG.x10"
                    ::x10::xrx::Runtime::runAt(i, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__2)))PaperEG__closure__2(b, a))),
                                               ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
            }
        }
        {
            
            //#line 44 "../PaperEG.x10"
            ::x10::xrx::Runtime::runAt(D->next(p), reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__3)))PaperEG__closure__3(a))),
                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
    }
    
    // captured environment
    ::PaperEG__A* a;
    ::PaperEG* saved_this;
    ::x10::lang::Place p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->a);
        buf.write(this->saved_this);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__1* storage = ::x10aux::alloc_z<PaperEG__closure__1>();
        buf.record_reference(storage);
        ::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();
        ::PaperEG* that_saved_this = buf.read< ::PaperEG*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        PaperEG__closure__1* this_ = new (storage) PaperEG__closure__1(that_a, that_saved_this, that_p);
        return this_;
    }
    
    PaperEG__closure__1(::PaperEG__A* a, ::PaperEG* saved_this, ::x10::lang::Place p) : a(a), saved_this(saved_this), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "../PaperEG.x10:22-50";
    }

};

#endif // PAPEREG__CLOSURE__1_CLOSURE
#ifndef PAPEREG__CLOSURE__4_CLOSURE
#define PAPEREG__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 58 "../PaperEG.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::PaperEG_Strings::sl__200)), ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                                                                  ((x10_long)0ll)))));
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::lang::String* >* args;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->args);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__4* storage = ::x10aux::alloc_z<PaperEG__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::lang::String* >* that_args = buf.read< ::x10::lang::Rail< ::x10::lang::String* >*>();
        PaperEG__closure__4* this_ = new (storage) PaperEG__closure__4(that_args);
        return this_;
    }
    
    PaperEG__closure__4(::x10::lang::Rail< ::x10::lang::String* >* args) : args(args) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "../PaperEG.x10:57-59";
    }

};

#endif // PAPEREG__CLOSURE__4_CLOSURE

//#line 14 "../PaperEG.x10"
void PaperEG::f() {
    
    //#line 16 "../PaperEG.x10"
    ::PaperEG__A* a = ::PaperEG__A::_make(this);
    
    //#line 17 "../PaperEG.x10"
    ::x10aux::nullCheck(a)->FMGL(r1) = ((x10_long)1ll);
    
    //#line 19 "../PaperEG.x10"
    ::x10::lang::Place p = ::x10::lang::Place::_make(::x10aux::here);
    {
        
        //#line 21 "../PaperEG.x10"
        ::x10::xrx::Runtime::runAt(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__1)))PaperEG__closure__1(a, this, p))),
                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 54 "../PaperEG.x10"
void PaperEG::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    {
        
        //#line 56 "../PaperEG.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__187 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__172;
                    for (p__172 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__172));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__172));
                        
                        //#line 57 "../PaperEG.x10"
                        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__4)))PaperEG__closure__4(args))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc2) {
            {
                ::x10::lang::CheckedThrowable* ct__185 = __exc2;
                {
                    ::x10::xrx::Runtime::pushException(ct__185);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__187);
    }
    
    //#line 61 "../PaperEG.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::PaperEG_Strings::sl__201)));
}

//#line 3 "../PaperEG.x10"
::PaperEG* PaperEG::PaperEG____this__PaperEG() {
    return this;
    
}
void PaperEG::_constructor() {
    this->PaperEG::__fieldInitializers_PaperEG();
}
::PaperEG* PaperEG::_make() {
    ::PaperEG* this_ = new (::x10aux::alloc_z< ::PaperEG>()) ::PaperEG();
    this_->_constructor();
    return this_;
}


void PaperEG::__fieldInitializers_PaperEG() {
 
}
const ::x10aux::serialization_id_t PaperEG::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::PaperEG::_deserializer);

void PaperEG::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::PaperEG::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::PaperEG* this_ = new (::x10aux::alloc_z< ::PaperEG>()) ::PaperEG();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void PaperEG::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType PaperEG::rtt;
void PaperEG::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("PaperEG",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String PaperEG_Strings::sl__200(" says hello and ");
::x10::lang::String PaperEG_Strings::sl__201("Goodbye");

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__2>PaperEG__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__2::__apply, &PaperEG__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__2::_deserialize);

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__3>PaperEG__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__3::__apply, &PaperEG__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__3::_deserialize);

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__1>PaperEG__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__1::__apply, &PaperEG__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__4>PaperEG__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__4::__apply, &PaperEG__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__4::_deserialize);
const ::x10aux::serialization_id_t PaperEG__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(PaperEG__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of PaperEG */
/*************************************************/
/*************************************************/
/* START of PaperEG$A */
#include <PaperEG__A.h>

#include <x10/lang/Long.h>
#include <PaperEG.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "../PaperEG.x10"

//#line 6 "../PaperEG.x10"

//#line 7 "../PaperEG.x10"

//#line 5 "../PaperEG.x10"
::PaperEG__A* PaperEG__A::PaperEG__A____this__PaperEG__A() {
    return this;
    
}
::PaperEG* PaperEG__A::PaperEG__A____this__PaperEG() {
    return this->FMGL(out__);
    
}
void PaperEG__A::_constructor(::PaperEG* out__) {
    
    //#line 3 "../PaperEG.x10"
    this->FMGL(out__) = out__;
    
    //#line 5 "../PaperEG.x10"
    this->PaperEG__A::__fieldInitializers_PaperEG_A();
}
::PaperEG__A* PaperEG__A::_make(::PaperEG* out__) {
    ::PaperEG__A* this_ = new (::x10aux::alloc_z< ::PaperEG__A>()) ::PaperEG__A();
    this_->_constructor(out__);
    return this_;
}


void PaperEG__A::__fieldInitializers_PaperEG_A() {
    this->FMGL(r1) = ((x10_long)0ll);
    this->FMGL(r2) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t PaperEG__A::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::PaperEG__A::_deserializer);

void PaperEG__A::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(r1));
    buf.write(this->FMGL(r2));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::PaperEG__A::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::PaperEG__A* this_ = new (::x10aux::alloc_z< ::PaperEG__A>()) ::PaperEG__A();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void PaperEG__A::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(r1) = buf.read<x10_long>();
    FMGL(r2) = buf.read<x10_long>();
    FMGL(out__) = buf.read< ::PaperEG*>();
}

::x10aux::RuntimeType PaperEG__A::rtt;
void PaperEG__A::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("PaperEG.A",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of PaperEG$A */
/*************************************************/
/*************************************************/
/* START of PaperEG$B */
#include <PaperEG__B.h>

#include <PaperEG__A.h>
#include <PaperEG.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "../PaperEG.x10"

//#line 11 "../PaperEG.x10"

//#line 10 "../PaperEG.x10"
::PaperEG__B* PaperEG__B::PaperEG__B____this__PaperEG__B() {
    return this;
    
}
::PaperEG* PaperEG__B::PaperEG__B____this__PaperEG() {
    return this->FMGL(out__);
    
}
void PaperEG__B::_constructor(::PaperEG* out__) {
    (this)->::PaperEG__A::_constructor(out__);
    
    //#line 3 "../PaperEG.x10"
    this->FMGL(out__) = out__;
    
    //#line 10 "../PaperEG.x10"
    this->PaperEG__B::__fieldInitializers_PaperEG_B();
}
::PaperEG__B* PaperEG__B::_make(::PaperEG* out__) {
    ::PaperEG__B* this_ = new (::x10aux::alloc_z< ::PaperEG__B>()) ::PaperEG__B();
    this_->_constructor(out__);
    return this_;
}


void PaperEG__B::__fieldInitializers_PaperEG_B() {
    this->FMGL(r3) = (::x10aux::class_cast_unchecked< ::PaperEG__A*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t PaperEG__B::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::PaperEG__B::_deserializer);

void PaperEG__B::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::PaperEG__A::_serialize_body(buf);
    buf.write(this->FMGL(r3));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::PaperEG__B::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::PaperEG__B* this_ = new (::x10aux::alloc_z< ::PaperEG__B>()) ::PaperEG__B();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void PaperEG__B::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::PaperEG__A::_deserialize_body(buf);
    FMGL(r3) = buf.read< ::PaperEG__A*>();
    FMGL(out__) = buf.read< ::PaperEG*>();
}

::x10aux::RuntimeType PaperEG__B::rtt;
void PaperEG__B::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::PaperEG__A>()};
    rtt.initStageTwo("PaperEG.B",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of PaperEG$B */
/*************************************************/
