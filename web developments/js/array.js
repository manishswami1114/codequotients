let arr=[1,2,3,4,5,6,7];
let arr1=[12,13,14,15];
console.log(arr);
arr.push(10);
console.log(arr);
arr.pop();
console.log(arr);
arr.unshift(10);
console.log(arr);
arr.shift();
console.log(arr);
arr.splice(1,0,10,100,1000);
console.log(arr);
let arr2=[1,2,3,['abc',4,5,6],7,8,9];
console.log(arr2[2]);
console.log("Function call");

call(arr1,test);
function test(){
    document.write("call test");
    //callback;
} 
function call(array,callback){
    for(i=0;i<array.length;i++){
        console.log(array[i]);
        
    }
    callback;
}
