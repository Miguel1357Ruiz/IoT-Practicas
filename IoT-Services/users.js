const express = require('express');

let app = express();

app.get('/users', (req, res, next) => {

	let users = [
              'Abraham Carrillo',
              'Nestor Osorio',
              'Miguel Ruiz',
              ];

res.send(users);

});

app.listen(3002, () => {
 
                  console.log('Escuchando por el puerto 3002');

});

