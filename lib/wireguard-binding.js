const path = require('path');
const binding_path = path.resolve(path.join(__dirname, '../', 'build', 'Release', 'node-wg'));
const binding = require(binding_path);
module.exports = exports = binding;