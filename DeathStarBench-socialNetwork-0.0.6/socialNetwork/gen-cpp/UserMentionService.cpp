/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "UserMentionService.h"

namespace social_network {


UserMentionService_ComposeUserMentions_args::~UserMentionService_ComposeUserMentions_args() throw() {
}


uint32_t UserMentionService_ComposeUserMentions_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->req_id);
          this->__isset.req_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->usernames.clear();
            uint32_t _size340;
            ::apache::thrift::protocol::TType _etype343;
            xfer += iprot->readListBegin(_etype343, _size340);
            this->usernames.resize(_size340);
            uint32_t _i344;
            for (_i344 = 0; _i344 < _size340; ++_i344)
            {
              xfer += iprot->readString(this->usernames[_i344]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.usernames = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->carrier.clear();
            uint32_t _size345;
            ::apache::thrift::protocol::TType _ktype346;
            ::apache::thrift::protocol::TType _vtype347;
            xfer += iprot->readMapBegin(_ktype346, _vtype347, _size345);
            uint32_t _i349;
            for (_i349 = 0; _i349 < _size345; ++_i349)
            {
              std::string _key350;
              xfer += iprot->readString(_key350);
              std::string& _val351 = this->carrier[_key350];
              xfer += iprot->readString(_val351);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.carrier = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserMentionService_ComposeUserMentions_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserMentionService_ComposeUserMentions_args");

  xfer += oprot->writeFieldBegin("req_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->req_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("usernames", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->usernames.size()));
    std::vector<std::string> ::const_iterator _iter352;
    for (_iter352 = this->usernames.begin(); _iter352 != this->usernames.end(); ++_iter352)
    {
      xfer += oprot->writeString((*_iter352));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("carrier", ::apache::thrift::protocol::T_MAP, 3);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->carrier.size()));
    std::map<std::string, std::string> ::const_iterator _iter353;
    for (_iter353 = this->carrier.begin(); _iter353 != this->carrier.end(); ++_iter353)
    {
      xfer += oprot->writeString(_iter353->first);
      xfer += oprot->writeString(_iter353->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserMentionService_ComposeUserMentions_pargs::~UserMentionService_ComposeUserMentions_pargs() throw() {
}


uint32_t UserMentionService_ComposeUserMentions_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserMentionService_ComposeUserMentions_pargs");

  xfer += oprot->writeFieldBegin("req_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64((*(this->req_id)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("usernames", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->usernames)).size()));
    std::vector<std::string> ::const_iterator _iter354;
    for (_iter354 = (*(this->usernames)).begin(); _iter354 != (*(this->usernames)).end(); ++_iter354)
    {
      xfer += oprot->writeString((*_iter354));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("carrier", ::apache::thrift::protocol::T_MAP, 3);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->carrier)).size()));
    std::map<std::string, std::string> ::const_iterator _iter355;
    for (_iter355 = (*(this->carrier)).begin(); _iter355 != (*(this->carrier)).end(); ++_iter355)
    {
      xfer += oprot->writeString(_iter355->first);
      xfer += oprot->writeString(_iter355->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserMentionService_ComposeUserMentions_result::~UserMentionService_ComposeUserMentions_result() throw() {
}


uint32_t UserMentionService_ComposeUserMentions_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->success.clear();
            uint32_t _size356;
            ::apache::thrift::protocol::TType _etype359;
            xfer += iprot->readListBegin(_etype359, _size356);
            this->success.resize(_size356);
            uint32_t _i360;
            for (_i360 = 0; _i360 < _size356; ++_i360)
            {
              xfer += this->success[_i360].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->se.read(iprot);
          this->__isset.se = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserMentionService_ComposeUserMentions_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("UserMentionService_ComposeUserMentions_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_LIST, 0);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->success.size()));
      std::vector<UserMention> ::const_iterator _iter361;
      for (_iter361 = this->success.begin(); _iter361 != this->success.end(); ++_iter361)
      {
        xfer += (*_iter361).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.se) {
    xfer += oprot->writeFieldBegin("se", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->se.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserMentionService_ComposeUserMentions_presult::~UserMentionService_ComposeUserMentions_presult() throw() {
}


uint32_t UserMentionService_ComposeUserMentions_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            (*(this->success)).clear();
            uint32_t _size362;
            ::apache::thrift::protocol::TType _etype365;
            xfer += iprot->readListBegin(_etype365, _size362);
            (*(this->success)).resize(_size362);
            uint32_t _i366;
            for (_i366 = 0; _i366 < _size362; ++_i366)
            {
              xfer += (*(this->success))[_i366].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->se.read(iprot);
          this->__isset.se = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void UserMentionServiceClient::ComposeUserMentions(std::vector<UserMention> & _return, const int64_t req_id, const std::vector<std::string> & usernames, const std::map<std::string, std::string> & carrier)
{
  send_ComposeUserMentions(req_id, usernames, carrier);
  recv_ComposeUserMentions(_return);
}

void UserMentionServiceClient::send_ComposeUserMentions(const int64_t req_id, const std::vector<std::string> & usernames, const std::map<std::string, std::string> & carrier)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("ComposeUserMentions", ::apache::thrift::protocol::T_CALL, cseqid);

  UserMentionService_ComposeUserMentions_pargs args;
  args.req_id = &req_id;
  args.usernames = &usernames;
  args.carrier = &carrier;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void UserMentionServiceClient::recv_ComposeUserMentions(std::vector<UserMention> & _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("ComposeUserMentions") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  UserMentionService_ComposeUserMentions_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  if (result.__isset.se) {
    throw result.se;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "ComposeUserMentions failed: unknown result");
}

bool UserMentionServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void UserMentionServiceProcessor::process_ComposeUserMentions(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("UserMentionService.ComposeUserMentions", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "UserMentionService.ComposeUserMentions");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "UserMentionService.ComposeUserMentions");
  }

  UserMentionService_ComposeUserMentions_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "UserMentionService.ComposeUserMentions", bytes);
  }

  UserMentionService_ComposeUserMentions_result result;
  try {
    iface_->ComposeUserMentions(result.success, args.req_id, args.usernames, args.carrier);
    result.__isset.success = true;
  } catch (ServiceException &se) {
    result.se = se;
    result.__isset.se = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "UserMentionService.ComposeUserMentions");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("ComposeUserMentions", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "UserMentionService.ComposeUserMentions");
  }

  oprot->writeMessageBegin("ComposeUserMentions", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "UserMentionService.ComposeUserMentions", bytes);
  }
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > UserMentionServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< UserMentionServiceIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< UserMentionServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > processor(new UserMentionServiceProcessor(handler));
  return processor;
}

void UserMentionServiceConcurrentClient::ComposeUserMentions(std::vector<UserMention> & _return, const int64_t req_id, const std::vector<std::string> & usernames, const std::map<std::string, std::string> & carrier)
{
  int32_t seqid = send_ComposeUserMentions(req_id, usernames, carrier);
  recv_ComposeUserMentions(_return, seqid);
}

int32_t UserMentionServiceConcurrentClient::send_ComposeUserMentions(const int64_t req_id, const std::vector<std::string> & usernames, const std::map<std::string, std::string> & carrier)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("ComposeUserMentions", ::apache::thrift::protocol::T_CALL, cseqid);

  UserMentionService_ComposeUserMentions_pargs args;
  args.req_id = &req_id;
  args.usernames = &usernames;
  args.carrier = &carrier;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void UserMentionServiceConcurrentClient::recv_ComposeUserMentions(std::vector<UserMention> & _return, const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("ComposeUserMentions") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      UserMentionService_ComposeUserMentions_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      if (result.__isset.se) {
        sentry.commit();
        throw result.se;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "ComposeUserMentions failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

} // namespace

