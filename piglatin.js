function translatePigLatin(str) {
    var regex = /[aeiou]/i
    var found = str.match(regex)
    var translate = ''
  
    //Use to locate position of regex pattern
    //console.log(str.length) 
    //console.log(found)
    //console.log(found.index)
  
    if (str.substr(found.index) == 0) {
      translate = str + 'way';
      console.log(str + ' ' + translate)
    }
    if (str.substr(found.index) == -1) {
      translate = str + 'way';
      console.log(str + ' ' + translate)
    }
    else {
      translate = str.substr(found.index)+str.substr(0,found.index) + 'ay';
    console.log(str + ' ' + translate)
    }
    return translate