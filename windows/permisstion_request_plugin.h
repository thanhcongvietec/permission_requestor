#ifndef FLUTTER_PLUGIN_PERMISSTION_REQUEST_PLUGIN_H_
#define FLUTTER_PLUGIN_PERMISSTION_REQUEST_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace permisstion_request_plugin {

class PermisstionRequestPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  PermisstionRequestPlugin();

  virtual ~PermisstionRequestPlugin();

  // Disallow copy and assign.
  PermisstionRequestPlugin(const PermisstionRequestPlugin&) = delete;
  PermisstionRequestPlugin& operator=(const PermisstionRequestPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace permisstion_request_plugin

#endif  // FLUTTER_PLUGIN_PERMISSTION_REQUEST_PLUGIN_H_
