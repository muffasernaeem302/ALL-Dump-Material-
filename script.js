/*let mode = "dark";
let color;

if (mode === "light") 
{
   color = "white";
} 
 else  
{
   color = "black";
}

console.log(color);*/
 

// // let age = 25 ;

// // if ( age <= 25 )
// // {
// //     console.log( " You can vote ");
// // }
// //  else 
// //     {
// //     console.log( " You cannot vote ");
// //  }

// // let num = 10 ;

// // if( num % 2 === 0 )
// // {
// //     console.log( " The number is even ");
// // }
// // else
// // {
// //     console.log( " the number is odd");
// // }

// // let age = 20 ;

// //  let result = (age < 18 ) ? " Junior " :" Senior "
// // console.log( result );


// let Marks = prompt( " Enter a number " );

// // if ( number % 5 === 0 )
    
// // {
// //     console.log (" the number is multiple of 5 ");
// // }
// // else 
// // {
// //     console.log( " The number is not multiple of 5 ");
// // }

// if ( Marks >=90 && Marks <=100 )
// {
//     console.log( " A+");
// }
// if ( Marks >=70 && Marks <90 )
// {
//     console.log( " A ");
// }
// if ( Marks >=50 && Marks <70 )
// {
//     console.log( " B ");
// }
// if ( Marks <50)
// {
//     console.log( " Fail ");
// }

// let sum = 0 ;
// let n = 100 ;

// for( let i = 0 ; i < n ; i++)
// {
//     sum = sum + i;
//     console.log( " The sum of first 100 numbers is " + sum);
// }
//      console.log( " sum = ", sum );
//      console.log( " the loop has ended");

// let i = 0 ;
// while( i<= 5 )
// {
//    console.log( " I ", i );
//    i++;
// }

// str = "Muffaser";
// let size = 0 ;
// for( let i of str)
// {
//    console.log( " i ", i);
//    size++;

// }
// console.log( " The Size of Str ", size );

// let student = {
//    name : " Muffaser",
//    cgpa : 3.7,
//    school : " ComSats",
// }
// for ( let key in student)
// {
//    console.log( " Key= ",key , " VAlue =", student[key]);

// }

// let Gamenum = 50 ;

// let user=prompt( " Guess the correct Num ");

// while ( Gamenum != user)
// {
//    user = prompt ( " Guess the number Again . Wrong guess ");

// }

// console .log (" Congraulations . You guessed it correctly ");


// === loops END ;================;


//============ARRAYS ===================;



// let marks = [ 10 , 20 , 30 , 40 ];
// console.log( marks );
// console.log( marks.length );

// for ( let i = 0 ; i < marks.length ; i++)
// {
//    console.log( marks[i]);
// }

// for( let mark of marks)
// {
//    console.log(mark)
// }


// let marks = [ 10 , 20 , 30 , 40 , 50 ];

// let sum = 0;

// for( let i = 0 ; i < marks.length ; i++)
// {
//  sum = sum + marks[i];

// }
//  console .log( sum );
//  let average ;

//  average = sum / marks.length ;
//   console .log( ` the value of the average =${average} `)


// let value =[ 10 , 30 , 50 ]

// let index = 0 ;

// for ( let i = 0 ; i < value.length ; i ++ )
// {
// console.log ( " The value of Index = ", index , " Value = ", value[i]);
// index++;
//  let offer = value[i] / 10 ; 
// value[i] = value[i] - offer ;

// console.log ( " The value of the item now = ", value[i] )
// }

// // concat ; 
// //  slice ;
// // spilce();
// // pop ;
// // push ;


// function cat(x, y )
// {
//    console.log( " My name is mUffaser naeem");
//  let sum = x+ y ;
//  return sum ;

// }
//  let summy = cat(1 , 3);
//  console.log( summy)


// let arr =[ 10 , 20 , 30]

// arr.forEach( function printval(val)
// {
//    console.log(val);
// })

// let arr =[ 10 , 20 , 30]

// arr.forEach((val) =>
// {
//    console.log(val* val );
// })


// reduce ( start , end ); 


//  let button = document.getElementById("myid");
//  console.dir(button);

//  let element =document.querySelector("div")
//  console.dir(element );

// let h2 = document.querySelector("h2");
// console.dir(h2);


// let newBtn = document.createElement( "Button");
// newBtn.innerText =" Click me ";

// newBtn.style.color = "white";
// newBtn.style.backgroundColor= "red";

// document.querySelector("body").prepend(newBtn);

// let para = document.querySelector("p");
 let btn1 = document.querySelector("#btn1");
 
btn1.addEventListener("click", ()=>
{
   console.log("Button was Clicked - Handler 2 ");

})