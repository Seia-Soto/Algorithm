var fs = require('fs')

var input = fs.readFileSync('/dev/stdin').toString()
var params = input.split(' ')

var a = parseInt(params[0])
var b = parseInt(params[1])

console.log(a + b)
