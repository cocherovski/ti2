#include "CQueue.h"

CQueue::CQueue():mTailIndex(0), mHeadIndex(0), mSize(0) {}
CQueue::~CQueue() {}

CQueue::add(const CMessage &msg) {
  mQueue[mTailIndex] = msg;
  mTailIndex--;
  if(mTailIndex < 0) {
    mTailIndex = QSIZE - 1;
  }
  mSize++;
  return true;
}

CQueue::get(CMessage &msg) {
  msg = mQueue[mHeadIndex];
  mHeadIndex--;
  if(mHeadIndex < 0) {
    mHeadIndex = QSIZE - 1;
  }
  mSize--;
  return true;
}