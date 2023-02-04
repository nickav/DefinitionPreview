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


void foo(Foo a, Foo b);


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

    return 0;
}