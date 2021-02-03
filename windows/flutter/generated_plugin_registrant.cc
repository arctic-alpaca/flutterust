//
//  Generated file. Do not edit.
//

#include "generated_plugin_registrant.h"

#include <adder/adder_plugin.h>
#include <scrap/scrap_plugin.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  AdderPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("AdderPlugin"));
  ScrapPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("ScrapPlugin"));
}
