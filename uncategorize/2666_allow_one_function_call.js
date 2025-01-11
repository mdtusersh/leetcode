var once = function (fn) {
    let calls = true;
    return function (...args) {
        if (calls) {
            calls = false;
            return fn(...args);
        }
    }
};