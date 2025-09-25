const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter a number: ", (answer) => {
    let n = Number(answer);

    for (let i = 0; i < n; i++) {
        console.log("Number: " + i);
    }

    rl.close();
});
