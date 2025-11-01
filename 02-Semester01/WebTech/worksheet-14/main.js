console.log(" Order Placed");

setTimeout(() => {
  console.log(" Order is being prepared...");
}, 2000);

setTimeout(() => {
  console.log(" Order is ready for delivery!");
}, 4000);

let count = 0;
let st = setInterval(() => {
  console.log("Delivery in progress...");
  count++;

  if(count == 3) {
    console.log("Enddd...");
    clearInterval(st);
}
}, 3000);




