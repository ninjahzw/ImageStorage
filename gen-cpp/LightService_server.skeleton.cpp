// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "LightService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class LightServiceHandler : virtual public LightServiceIf {
 public:
  LightServiceHandler() {
    // Your initialization goes here
  }

  void ping() {
    // Your implementation goes here
    printf("ping\n");
  }

  void add(const AddArgs& addArgs) {
    // Your implementation goes here
    printf("add\n");
  }

  void get(std::string& _return, const std::string& key) {
    // Your implementation goes here
    printf("get\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<LightServiceHandler> handler(new LightServiceHandler());
  shared_ptr<TProcessor> processor(new LightServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

