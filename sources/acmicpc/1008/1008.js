const fs = require('fs')

const input = fs.readFileSync('/dev/stdin').toString()
const params = input.split(' ')

const a = parseInt(params[0])
const b = parseInt(params[1])

console.log(a / b)
