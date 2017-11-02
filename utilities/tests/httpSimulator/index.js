var request = require('request');
var LineByLineReader = require('line-by-line');
var lr = new LineByLineReader('./apertusvr.log');

lr.on('error', function (err) {
	console.log('line-reader: error: ', err);
});

lr.on('line', function (line) {
	lr.pause();

	console.log('line-reader: ', line);
	var dataObj = JSON.parse(line);
	request.post(
		'http://localhost',
		dataObj,
		function (error, response, body) {
			if (error) {
				console.log('Error: ', error);
			}
			console.log(body);

			lr.resume();
		}
	);
});

lr.on('end', function () {
	console.log('line-reader: all lines are read.');
});
