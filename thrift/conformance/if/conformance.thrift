/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

namespace cpp2 apache.thrift.conformance
namespace php apache_thrift
namespace py thrift.conformance.conformance
namespace py.asyncio thrift_asyncio.conformance.conformance
namespace py3 thrift.conformance
namespace java.swift org.apache.thrift.conformance
namespace java2 org.apache.thrift.conformance
namespace go thrift.conformance.conformance

include "thrift/conformance/if/any.thrift"
include "thrift/conformance/if/protocol.thrift"

struct RoundTripRequest {
  // The value to decode and renecode.
  1: any.Any value;

  // The protocol to use to return the value.
  // If not specified, `value.protocol` is used.
  2: optional protocol.ProtocolStruct targetProtocol;
}

struct RoundTripResponse {
  1: any.Any value;
}

// The conformance test service.
service ConformanceService {
  // Unpacks the given value, and repacks it with the given target protocol.
  RoundTripResponse roundTrip(1: RoundTripRequest request);
}
