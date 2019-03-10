#include "plasma/client.h"
#include "plasma/common.h"
#include "arrow/buffer.h"
#include "arrow/status.h"
#include <jlcxx/jlcxx.hpp>

JLCXX_MODULE define_julia_module(jlcxx::Module& mod) {
    mod.add_type<arrow::Buffer>("Buffer");
    mod.add_type<arrow::Status>("Status");

    mod.add_type<plasma::PlasmaClient>("PlasmaClient")
        .constructor<>()
        .method("connect", &plasma::PlasmaClient::Connect)
        .method("disconnect", &plasma::PlasmaClient::Disconnect);
}