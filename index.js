//1. way to print in javascript
        // console.log("hello world");
        // alert("this site be allowed");
        // document.write("this is document write")

    //2. javascript console Api (application programming interface)
    // console.log("hello world");
    // console.warn("this is warning")
    // console.log("this is an error")

    // 3. javascript in variable
    // what are variables ? - container to store data values

    /* Multi 
     line 
     comment */6

// var number1 = 34;
// var number2 = 56;
// console.log(number1 + number2)

// 4. data types in javascript
// number
// var num1 = 455;
// var num2 = 56.76;

// // string 
// var str1 = "this is a string";
// var str2 = "this is also a string";

// // objects
// var marks = {
//     ravi: 34,
//     shubham: 78,
//     harry: 99.977
// }

// booleans
// var a = true
// var b = false
// console.log(a)

// var und = undefined;
// var und;
// console.log(und);

// var n = null;
// console.log(n)

/*
at a very high level , there are two types of data type in javascript
1. primitive data types: undefined, null, number, string, boolean, symbol.
2. reference data types: arrays , objects.
*/

// var arr = [1, 2, 3, 4, 5]
// // console.log(arr)

// // operators in javasrcipt
// var a = 34;
// var b = 56;
// console.log("the value of a + b is", a + b);
// console.log("the value of a - b is", a - b);
// console.log("the value of a * b is", a * b);
// console.log("the value of a / b is", a / b);

// assignment operators
// var c = b;
// c += 2; // c = c+2;
// c -= 2;  // c = c-2;
//c *= 2;  // c = c*2;
//c /= 2;  // c = c/2;
// console.log(c);

// comparison operators
// var x = 54;
// var y = 36;
// console.log(x == y)
// console.log(x >= y)
// console.log(x <= y)
// console.log(x < y)
// console.log(x > y)

// logical operators

// // logical and 
// console.log(true && true)
// console.log(false && true)
// console.log(false && false)
// console.log(true && false)

// // logical or 
// console.log(true || true)
// console.log(false || true)
// console.log(false || false)
// console.log(true || false)

// // logical not 
// console.log(!false);
// console.log(!true);

// function in javascript
// function avg(a, b) {
//     c = (a + b) / 2;
//     return c;

// }
// DRY = do not repeat yourself
// c1 = avg(4, 6);
// c2 = avg(14, 16);
// console.log(c1, c2);

// conditionals in javascript
// var age = 32;
// single if statement
// if (age > 18) {
//     console.log('you can drink rasna water');
// }
//  if - else statement 
// if (age > 18){
//     console.log('you can drink water');
// } 
// else{
//     console.log('you cannot drink rasna water');

// }

// age = 32;
// // if - else ladder 
// if (age > 32) {
//     console.log("you are not a kid");
// }
// else if (age > 26) {
//     console.log("you are a adult");
// }
// else if (age > 18) {
//     console.log("you are legend");
// }
// else {
//     console.log("you are kid");
// }

// var arr = [1, 2, 3, 4, 5, 6, 7];
// console.log(arr);
// for (var i = 0; i < arr.length; i++) {
//     if (i == 2) {
//         // break;
//         continue;
//     }
//     console.log(arr[i])
// }

// arr.forEach(function (element) {
//     console.log(element);
// })

// const ac = 0;
// ac++;
// ac= ac+1;

// let j = 0;
//  while(j<arr.length){
//      console.log(arr[j]);
//      j++;
//  }
// do {
//     console.log(arr[j]);
//     j++;
// }
// while (j < arr.length);

// let myarr = [" fan", "camera", 34, null, true];
// // array methods
// console.log(myarr.length);
// myarr.pop();
// myarr.push("harry");
// myarr.shift();
// const newlen = myarr.unshift("harry");
// console.log(newlen);
// console.log(myarr);

//  string method in javascript
let mylovelystring = "harry is a good good good  boy"
// console.log(mylovelystring.length)
// console.log(mylovelystring.indexOf("good"));
// console.log(mylovelystring.lastindexOf("good"));

// console.log(mylovelystring.slice(1,4))
d = mylovelystring.replace("harry", "rahul");
// d =d.replace("good","bad");
// console.log(d,mylovelystring); 

let mydate = new Date();
// console.log(mydate);
// console.log(mydate.getTime());
// console.log(mydate.getFullYear());
// console.log(mydate.getDay());
// console.log(mydate.getMinutes());
// console.log(mydate.getHours());

// Dom manipulation (document object model)

let elem = document.getElementById('click')
// console.log(elem);

let elemclass = document.getElementsByClassName("container")
// console.log(elemclass);
// elemclass[0].style.background ="yellow"
elemclass[0].classList.add("bg-primary")
elemclass[0].classList.add("text-success")

// console.log(elem.innerHTML);
// console.log(elem.innertext);

// console.log(elemclass[0].innerhtml);
// console.log(elemclass[0].innertext);
tn = document.getElementsByTagName('div')
console.log(tn)
createdelement = document.createElement('p');
createdelement.innertext = "this is a created para";
tn[0].appendchild(createdelement);
createdelement2 = document.createElement('b');
createdelement2.innertext = "this is a created para";
tn[0].replacechild(createdelement2,createdelement); 

















































































































