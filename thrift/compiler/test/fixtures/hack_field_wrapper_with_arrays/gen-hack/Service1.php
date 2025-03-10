<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Service1
 */
interface Service1AsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;
}

/**
 * Original thrift service:-
 * Service1
 */
interface Service1If extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public function func(string $arg1, ?MyStruct $arg2): MyStruct;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public function func1(string $arg1, ?MyStruct $arg2): MyStruct;
}

/**
 * Original thrift service:-
 * Service1
 */
interface Service1AsyncClientIf extends Service1AsyncIf {
}

/**
 * Original thrift service:-
 * Service1
 */
interface Service1ClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;
}

/**
 * Original thrift service:-
 * Service1
 */
trait Service1ClientBase {
  require extends \ThriftClientBase;


  protected function recvImpl_func(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): MyStruct {
    try {
      $this->eventHandler_->preRecv('func', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'Service1_func_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'Service1_func_result', Shapes::idx($options, 'read_options', 0));
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype === \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = Service1_func_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid !== $expectedsequenceid)) {
          throw new \TProtocolException("func failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('func', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('func', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('func', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('func', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('func', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("func failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('func', $expectedsequenceid, $x);
    throw $x;
  }


  protected function recvImpl_func1(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): MyStruct {
    try {
      $this->eventHandler_->preRecv('func1', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'Service1_func1_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'Service1_func1_result', Shapes::idx($options, 'read_options', 0));
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype === \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = Service1_func1_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid !== $expectedsequenceid)) {
          throw new \TProtocolException("func1 failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('func1', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('func1', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('func1', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('func1', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('func1', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("func1 failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('func1', $expectedsequenceid, $x);
    throw $x;
  }

}

class Service1AsyncClient extends \ThriftClientBase implements Service1AsyncClientIf {
  use Service1ClientBase;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public async function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("Service1", "func");
    $args = Service1_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    $currentseqid = $this->sendImplHelper($args, "func", false);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_func($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public async function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("Service1", "func1");
    $args = Service1_func1_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    $currentseqid = $this->sendImplHelper($args, "func1", false);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_func1($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

}

class Service1Client extends \ThriftClientBase implements Service1ClientIf {
  use Service1ClientBase;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public async function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("Service1", "func");
    $args = Service1_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    $currentseqid = $this->sendImplHelper($args, "func", false);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_func($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public async function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("Service1", "func1");
    $args = Service1_func1_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    $currentseqid = $this->sendImplHelper($args, "func1", false);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_func1($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

  /* send and recv functions */
  public function send_func(string $arg1, ?MyStruct $arg2): int {
    $args = Service1_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    return $this->sendImplHelper($args, "func", false);
  }
  public function recv_func(?int $expectedsequenceid = null): MyStruct {
    return $this->recvImpl_func($expectedsequenceid);
  }
  public function send_func1(string $arg1, ?MyStruct $arg2): int {
    $args = Service1_func1_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    return $this->sendImplHelper($args, "func1", false);
  }
  public function recv_func1(?int $expectedsequenceid = null): MyStruct {
    return $this->recvImpl_func1($expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class Service1_func_args implements \IThriftSyncStruct, \IThriftShapishAsyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'arg1',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'arg2',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'arg1' => 1,
    'arg2' => 2,
  ];

  const type TConstructorShape = shape(
    ?'arg1' => ?string,
    ?'arg2' => ?MyStruct,
  );

  const type TShape = shape(
    'arg1' => string,
    ?'arg2' => ?MyStruct::TShape,
  );
  const int STRUCTURAL_ID = 6560600906529955702;
  public string $arg1;
  public ?MyStruct $arg2;

  public function __construct(?string $arg1 = null, ?MyStruct $arg2 = null)[] {
    $this->arg1 = $arg1 ?? '';
    $this->arg2 = $arg2;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg1'),
      Shapes::idx($shape, 'arg2'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'arg1'),
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'arg2'),
    );
  }

  public function getName()[]: string {
    return 'Service1_func_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "include.func_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "arg1",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "include.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "arg2",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __stringifyMapKeys<T>(dict<arraykey, T> $m)[]: dict<string, T> {
    return Dict\map_keys($m, $key ==> (string)$key);
  }

  public static async function __genFromShape(self::TShape $shape): Awaitable<this> {
    $obj = new static();
    $obj->arg1 = $shape['arg1'];
    $arg2 = Shapes::idx($shape, 'arg2');
    if ($arg2 !== null) {
      $obj->arg2 = await MyStruct::__genFromShape($arg2);
    }
    return $obj;
  }

  public async function __genToShape(): Awaitable<self::TShape> {
    return shape(
      'arg1' => $this->arg1,
      'arg2' => await ($this->arg2 === null 
        ? null 
        : (
        $this->arg2->__genToShape()
        )
      ),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'arg1') !== null) {
      $this->arg1 = /* HH_FIXME[4110] */ $parsed['arg1'];
    }
    if (idx($parsed, 'arg2') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['arg2']);
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->arg2 = $_tmp1;
    }
  }

}

class Service1_func_result implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?MyStruct,
  );

  const int STRUCTURAL_ID = 7307096097859369800;
  public ?MyStruct $success;

  public function __construct(?MyStruct $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'success'),
    );
  }

  public function getName()[]: string {
    return 'Service1_func_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "include.Service1_func_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "include.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['success']);
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class Service1_func1_args implements \IThriftSyncStruct, \IThriftShapishAsyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'arg1',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'arg2',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'arg1' => 1,
    'arg2' => 2,
  ];

  const type TConstructorShape = shape(
    ?'arg1' => ?string,
    ?'arg2' => ?MyStruct,
  );

  const type TShape = shape(
    'arg1' => string,
    ?'arg2' => ?MyStruct::TShape,
  );
  const int STRUCTURAL_ID = 6560600906529955702;
  public string $arg1;
  public ?MyStruct $arg2;

  public function __construct(?string $arg1 = null, ?MyStruct $arg2 = null)[] {
    $this->arg1 = $arg1 ?? '';
    $this->arg2 = $arg2;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg1'),
      Shapes::idx($shape, 'arg2'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'arg1'),
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'arg2'),
    );
  }

  public function getName()[]: string {
    return 'Service1_func1_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "include.func1_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "arg1",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "include.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "arg2",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __stringifyMapKeys<T>(dict<arraykey, T> $m)[]: dict<string, T> {
    return Dict\map_keys($m, $key ==> (string)$key);
  }

  public static async function __genFromShape(self::TShape $shape): Awaitable<this> {
    $obj = new static();
    $obj->arg1 = $shape['arg1'];
    $arg2 = Shapes::idx($shape, 'arg2');
    if ($arg2 !== null) {
      $obj->arg2 = await MyStruct::__genFromShape($arg2);
    }
    return $obj;
  }

  public async function __genToShape(): Awaitable<self::TShape> {
    return shape(
      'arg1' => $this->arg1,
      'arg2' => await ($this->arg2 === null 
        ? null 
        : (
        $this->arg2->__genToShape()
        )
      ),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'arg1') !== null) {
      $this->arg1 = /* HH_FIXME[4110] */ $parsed['arg1'];
    }
    if (idx($parsed, 'arg2') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['arg2']);
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->arg2 = $_tmp1;
    }
  }

}

class Service1_func1_result implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?MyStruct,
  );

  const int STRUCTURAL_ID = 7307096097859369800;
  public ?MyStruct $success;

  public function __construct(?MyStruct $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'success'),
    );
  }

  public function getName()[]: string {
    return 'Service1_func1_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "include.Service1_func1_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "include.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['success']);
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class Service1StaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return tmeta_ThriftService::fromShape(
      shape(
        "name" => "include.Service1",
        "functions" => vec[
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "func",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "include.MyStruct",
                    )
                  ),
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                      )
                    ),
                    "name" => "arg1",
                  )
                ),
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 2,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "include.MyStruct",
                          )
                        ),
                      )
                    ),
                    "name" => "arg2",
                  )
                ),
              ],
            )
          ),
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "func1",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "include.MyStruct",
                    )
                  ),
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                      )
                    ),
                    "name" => "arg1",
                  )
                ),
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 2,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "include.MyStruct",
                          )
                        ),
                      )
                    ),
                    "name" => "arg2",
                  )
                ),
              ],
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'include',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
              'include.MyStruct' => MyStruct::getStructMetadata(),
              'include.MyNestedStruct' => MyNestedStruct::getStructMetadata(),
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}

