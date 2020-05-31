#ifndef Redux_ReducerMapMacros_hpp
#define Redux_ReducerMapMacros_hpp

#define _REDUX_REDUCERMAP_FIELD(CLASS, FIELD) const CLASS * FIELD
#define _REDUX_REDUCERMAP_INIT_BEGIN(CLASS) CLASS() :
#define _REDUX_REDUCERMAP_INIT_FIELD(CLASS, FIELD, REDUCER) FIELD(REDUCER.init()->as<CLASS>())
#define _REDUX_REDUCERMAP_REDUCE_BEGIN(CLASS, ACTION_TYPE) CLASS(const CLASS * previous, const Action<ACTION_TYPE> & action) :
#define _REDUX_REDUCERMAP_REDUCE_FIELD(CLASS, FIELD, REDUCER) FIELD(REDUCER.reduce(previous->FIELD, action)->as<CLASS>())
#define _REDUX_REDUCERMAP_END {}

#define REDUX_REDUCERMAP_STATE_1(\
  CLASS, ACTION_TYPE,\
  FIELD_CLASS_1, FIELD_1, REDUCER_1\
) class CLASS : public State {\
  public:\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_1, FIELD_1);\
    _REDUX_REDUCERMAP_INIT_BEGIN(CLASS)\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1)\
    _REDUX_REDUCERMAP_END\
    _REDUX_REDUCERMAP_REDUCE_BEGIN(CLASS, ACTION_TYPE)\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1)\
    _REDUX_REDUCERMAP_END\
}

#define REDUX_REDUCERMAP_STATE_2(\
  CLASS, ACTION_TYPE,\
  FIELD_CLASS_1, FIELD_1, REDUCER_1,\
  FIELD_CLASS_2, FIELD_2, REDUCER_2\
) class CLASS : public State {\
  public:\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_1, FIELD_1);\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_2, FIELD_2);\
    _REDUX_REDUCERMAP_INIT_BEGIN(CLASS)\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1),\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_2, FIELD_2, REDUCER_2)\
    _REDUX_REDUCERMAP_END\
    _REDUX_REDUCERMAP_REDUCE_BEGIN(CLASS, ACTION_TYPE)\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1),\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_2, FIELD_2, REDUCER_2)\
    _REDUX_REDUCERMAP_END\
}

#define REDUX_REDUCERMAP_STATE_3(\
  CLASS, ACTION_TYPE,\
  FIELD_CLASS_1, FIELD_1, REDUCER_1,\
  FIELD_CLASS_2, FIELD_2, REDUCER_2,\
  FIELD_CLASS_3, FIELD_3, REDUCER_3\
) class CLASS : public State {\
  public:\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_1, FIELD_1);\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_2, FIELD_2);\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_3, FIELD_3);\
    _REDUX_REDUCERMAP_INIT_BEGIN(CLASS)\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1),\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_2, FIELD_2, REDUCER_2),\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_3, FIELD_3, REDUCER_3)\
    _REDUX_REDUCERMAP_END\
    _REDUX_REDUCERMAP_REDUCE_BEGIN(CLASS, ACTION_TYPE)\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1),\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_2, FIELD_2, REDUCER_2),\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_3, FIELD_3, REDUCER_3)\
    _REDUX_REDUCERMAP_END\
}

#define REDUX_REDUCERMAP_STATE_4(\
  CLASS, ACTION_TYPE,\
  FIELD_CLASS_1, FIELD_1, REDUCER_1,\
  FIELD_CLASS_2, FIELD_2, REDUCER_2,\
  FIELD_CLASS_3, FIELD_3, REDUCER_3,\
  FIELD_CLASS_4, FIELD_4, REDUCER_4\
) class CLASS : public State {\
  public:\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_1, FIELD_1);\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_2, FIELD_2);\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_3, FIELD_3);\
    _REDUX_REDUCERMAP_FIELD(FIELD_CLASS_4, FIELD_4);\
    _REDUX_REDUCERMAP_INIT_BEGIN(CLASS)\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1),\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_2, FIELD_2, REDUCER_2),\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_3, FIELD_3, REDUCER_3),\
    _REDUX_REDUCERMAP_INIT_FIELD(FIELD_CLASS_4, FIELD_4, REDUCER_4)\
    _REDUX_REDUCERMAP_END\
    _REDUX_REDUCERMAP_REDUCE_BEGIN(CLASS, ACTION_TYPE)\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_1, FIELD_1, REDUCER_1),\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_2, FIELD_2, REDUCER_2),\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_3, FIELD_3, REDUCER_3),\
    _REDUX_REDUCERMAP_REDUCE_FIELD(FIELD_CLASS_4, FIELD_4, REDUCER_4)\
    _REDUX_REDUCERMAP_END\
}

#endif
