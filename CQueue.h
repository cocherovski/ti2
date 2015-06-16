#ifndef CQueue_h_
#define CQueue_h_

#define QSize 100

class CQueue{
  public:
    CQueue();   //ctor
    ~CQueue();  //dtor
    
    bool add(const CMessage &msg);
    bool get(CMessage &msg);
    void showQ();
  
  private:
    CMessage mQueue[QSize];
    int mTailIndex;
    int mHeadIndex;
    int mSize;
};
