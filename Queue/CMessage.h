#ifndef CMessage_h_
#define CMessage_h_

class CMessage {
  public:
    CMessage();
    int mSenderID;
    int mReceiverID;
    int data[5];
};

#endif
