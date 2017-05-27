#!/usr/bin/env ease-run

import {lerp, id, invoke} from 'emlib2';

console.log(lerp(1,2,3));

console.log(id('test'));

let count = 0;	

const before = Date.now();

for (var x = 0; x < 1000000; ++x) {
  invoke({
    int: 1,
    test() { ++count; },
    message: 'string',
    arr: [1,2,3],
    obj: {},
    nul: null,
    bool: true,
    undef: undefined
  });
}

console.log(count);
console.log(Date.now() - before);

/*
import {_sayHi, cwrap} from 'emlib';

const obj = {test() { console.log('!!!'); }};
_sayHi(obj);
*/
