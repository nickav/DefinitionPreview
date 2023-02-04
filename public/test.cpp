struct Foo
{
    int a;
    int b;
    float c;
};

Foo fun_func(Foo a)
{
    return a;
}


typedef float f32;

union Vector2 {
    struct {
        f32 x, y;
    };

    struct {
        f32 e[2];
    };
};

inline f32 dot(Vector2 a, Vector2 b) {
  return a.x * b.x + a.y * b.y;
}


// @Incomplete: fix me!
// void foo(Foo a, Foo b);


void
foo(Foo a,              Foo b)
{
    // DO STUFF
}

void
bar
(
    Foo a
)
{
    return a;
}

Foo
moo
(int a)
{
    Foo result = {};
    return result;
}

int car(x) {
    return x * x;
}

int main(int argc, char const *argv[])
{
    Foo a = {};
    Foo b = {};

    // test cases:

    int j = car(42);

    foo(a, b);

    foo(fun_func());

    foo(fun_func(moo(123)));

    foo     (
        fun_func(a),
        b
    );

    foo (
        bar(
            moo(12)
        );
    );



    Vector2 x = {4.0, 2.0};
    Vector2 y = {1.0, 2.0};


    dot(x, y);



    return 0;
}