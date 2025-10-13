 function store(eve) {
    eve.preventDefault();
    let usrName = document.getElementById("name").value;
    sessionStorage.setItem("name",usrName);

    /* let usrAge = document.getElementById("age").value;
    sessionStorage.setItem("age",usrAge); */

    let dob = document.getElementById("bday").value;
    
    let today = new Date();
    let usrObj = new Date(dob);
   
    let year = today.getFullYear() - usrObj.getFullYear(); // No CHANGE FOR -VE
    let month = today.getMonth() - usrObj.getMonth(); //-3
    let date = today.getDate() - usrObj.getDate();

    let age = year;
    if(month < 0){
        age--;
    }
    else if(month === 0 && date < 0){
        age--;
    }
    if(month == 0 && date == 0){
        alert("Happy birthday maameyyy !!!");
    }
    sessionStorage.setItem("DOB",dob);
    sessionStorage.setItem("age",age);
    window.location.href= "redirect.html";
}


if(sessionStorage.getItem("visitCount")){
    sessionStorage.setItem("visitCount",Number(sessionStorage.getItem("visitCount")) + 1);
    //alert("Session incremented")
}
else{
    sessionStorage.setItem("visitCount",1);
    alert("New session added");
}

let visitCount = sessionStorage.getItem("visitCount");
document.getElementById("s_count").innerHTML = visitCount;

