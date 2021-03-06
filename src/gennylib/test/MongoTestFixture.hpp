// Copyright 2019-present MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef HEADER_D9091084_CB09_4108_A553_5D0EC18C132F_INCLUDED
#define HEADER_D9091084_CB09_4108_A553_5D0EC18C132F_INCLUDED

#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

namespace genny::testing {

class MongoTestFixture {
public:
    MongoTestFixture() : instance{mongocxx::instance::current()}, client{connectionUri()} {}

    void dropAllDatabases();

    static mongocxx::uri connectionUri();

private:
    mongocxx::instance& instance;

protected:
    mongocxx::client client;

};
}  // namespace genny::testing

#endif  // HEADER_D9091084_CB09_4108_A553_5D0EC18C132F_INCLUDED
