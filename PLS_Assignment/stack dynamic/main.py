let n = parseInt(prompt("Enter size of array:"));
let arr = new Array(n); 
for (let i = 0; i < n; i++) {
  arr[i] = i + 1;
}
for (let i = 0; i < n; i++) {
  console.log(arr[i]);
}