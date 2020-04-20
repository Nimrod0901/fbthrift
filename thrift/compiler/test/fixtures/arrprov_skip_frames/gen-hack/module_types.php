<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => shape(
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => shape(
            'type' => \TType::I32,
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    3 => shape(
      'var' => 'c',
      'type' => \TType::I64,
    ),
    4 => shape(
      'var' => 'd',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'c' => 3,
    'd' => 4,
  ];
  const type TShape = shape(
    'a' => vec<string>,
    ?'b' => ?dict<string, vec<keyset<int>>>,
    'c' => int,
    ?'d' => ?bool,
  );
  const int STRUCTURAL_ID = 3946809642153193229;
  /**
   * Original thrift field:-
   * 1: list<string> a
   */
  public vec<string> $a;
  /**
   * Original thrift field:-
   * 2: map<string, list<set<i32>>> b
   */
  public ?dict<string, vec<keyset<int>>> $b;
  /**
   * Original thrift field:-
   * 3: i64 c
   */
  public int $c;
  /**
   * Original thrift field:-
   * 4: bool d
   */
  public ?bool $d;

  <<__Rx>>
  public function __construct(?vec<string> $a = null, ?dict<string, vec<keyset<int>>> $b = null, ?int $c = null, ?bool $d = null  ) {
    if ($a === null) {
      $this->a = vec[];
    } else {
      $this->a = $a;
    }
    $this->b = $b;
    if ($c === null) {
      $this->c = 7;
    } else {
      $this->c = $c;
    }
    $this->d = $d;
  }

  public function getName(): string {
    return 'Foo';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    $me->a = $shape['a'];
    if (Shapes::idx($shape, 'b') !== null) {
      $me->b = $shape['b'];
    }
    $me->c = $shape['c'];
    if (Shapes::idx($shape, 'd') !== null) {
      $me->d = $shape['d'];
    }
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'a' => $this->a,
      'b' => $this->b,
      'c' => $this->c,
      'd' => $this->d,
    );
  }
}

/**
 * Original thrift exception:-
 * Baz
 */
class Baz extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'some_field',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    3 => shape(
      'var' => 'some_container',
      'type' => \TType::SET,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    4 => shape(
      'var' => 'code',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
    'some_field' => 2,
    'some_container' => 3,
    'code' => 4,
  ];
  const int STRUCTURAL_ID = 1663976252517274137;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;
  /**
   * Original thrift field:-
   * 2: struct module.Foo some_field
   */
  public ?Foo $some_field;
  /**
   * Original thrift field:-
   * 3: set<string> some_container
   */
  public keyset<string> $some_container;
  /**
   * Original thrift field:-
   * 4: i32 code
   */
  public int $code;

  <<__Rx>>
  public function __construct(?string $message = null, ?Foo $some_field = null, ?keyset<string> $some_container = null, ?int $code = null  ) {
    parent::__construct();
    if ($message === null) {
      $this->message = '';
    } else {
      $this->message = $message;
    }
    $this->some_field = $some_field;
    if ($some_container === null) {
      $this->some_container = keyset[];
    } else {
      $this->some_container = $some_container;
    }
    if ($code === null) {
      $this->code = 0;
    } else {
      $this->code = $code;
    }
  }

  public function getName(): string {
    return 'Baz';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}

/**
 * Original thrift exception:-
 * OptBaz
 */
class OptBaz extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
  ];
  const int STRUCTURAL_ID = 546500496397478593;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;

  <<__Rx>>
  public function __construct(?string $message = null  ) {
    parent::__construct();
    if ($message === null) {
      $this->message = '';
    } else {
      $this->message = $message;
    }
  }

  public function getName(): string {
    return 'OptBaz';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}

