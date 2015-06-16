#ifndef CQueue_h_
#define CQueue_h_

#define QSIZE 100

class CQueue{
  public:
    CQueue();   //ctor
    ~CQueue();  //dtor
    
    bool add(const CMessage &msg);
    bool get(CMessage &msg);
    void showQ();
  
  private:
    CMessage mQueue[QSIZE];
    int mTailIndex;
    int mHeadIndex;
    int mSize;
};

#endif
