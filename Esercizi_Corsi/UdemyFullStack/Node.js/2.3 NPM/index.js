import generateName from "sillyname";  // nel package.json "type": "module",
import {randomSuperhero} from 'superheroes';

var funnyName = generateName();

console.log(`My funny name test ${funnyName}`)



var mySuperHeroName = randomSuperhero();

console.log(`My super hero name is ${mySuperHeroName}`)
