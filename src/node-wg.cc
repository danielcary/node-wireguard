// node-wg.cc
#include <node.h>
#include "wireguard.h"

#define NODE_GYP_MODULE_NAME node_wg

namespace wireguard {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;


void _wg_generate_public_key(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(
      isolate, "world").ToLocalChecked());
  wg_key pub, priv;

  wg_generate_public_key(pub, priv);
  
}

void Initialize(Local<Object> exports) {
  NODE_SET_METHOD(exports, "wg_generate_public_key", _wg_generate_public_key);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}  // namespace demo 
