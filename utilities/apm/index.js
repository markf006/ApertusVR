var yargs = require('yargs');
var shell = require('shelljs');


yargs
	.usage('$0 <cmd> [args]')
	.command('3rdparty [command] [name]', 'welcome ter yargs!', {
			command: {
				default: 'default install command'
			},
			name: {
				default: 'default name'
			}
		},
		function(argv) {
			console.log('3rdParty: ' + argv.command + ' ' + argv.name + ' welcome to yargs!');
		})
	.command('ls', '', {},
		function(argv) {
			console.log('shell: ls');
			shell.ls('*.*').forEach(function (file) {
				console.log(file);
			});
		})
	.help()
	.argv
