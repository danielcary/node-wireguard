const wireguard = require('./wireguard-binding');


console.log(wireguard);

module.exports.wg_generate_public_key = () => {
    let ret = wireguard.wg_generate_public_key();
    console.log(ret);
};