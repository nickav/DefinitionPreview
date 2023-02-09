# Definition Preview

Auto preview function and type definitions in Sublime Text 4 while you work.

No nonsense, no intellisense, it just works (tm) with Sublime Text out of the box.

<img src="/public/preview.png" alt="preview of the plugin with functions" />

## Features

- syntax-aware popup menu for functions and type definitions
- emphasizes the current argument in the function you are working on
- click to jump to definition

## Demo

<img src="/public/demo.gif" alt="demo of the plugin" />

## Screenshots

<img src="/public/struct.png" alt="preview of the plugin with structs" />


## Future Improvements

This plugin has only been tested with Sublime Text version 4.0.
I've also only tested it with C and C-like languages. Your mileage may vary.

Because as far as I could tell, Sublime Text doesn't give you a good way to get the definition source code of a `SymbolLocation`, we do our own hacky attemp at this. So, sometimes the preview is wrong. If you see something, say something.

We would like to de-duplicate functions in the future.
We also would like to support user settings in the future.