let images = ["https://www.mountain-forecast.com/system/images/24500/large/Mount-Timpanogos.jpg?1532401039", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQTzWB_2RLSqlVCMHgckp6RY_H_xD5w2TsRr7rmMmbq2_T-ap1HMwLwXpgIxaW-qEiWrQs&usqp=CAU", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRbZdTVOKsladTdQj3Oej2TWvsk5nfnky6ECQ&s"]
function hello(){
    let name = window.prompt("What is your name?")
    document.getElementById("title").innerHTML = "Hello " + name + "!"
}
count = 0
function change(){
    
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}

function highlight(){
    document.getElementById("btn").style.backgroundColor = "orange"
    document.getElementById("btn").style.color="white"
}
function normal(){
    document.getElementById("btn").style.backgroundColor = "gray"
    document.getElementById("btn").style.color="black"
}
function push(){
    document.getElementById("btn").style.backgroundColor = "red"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}
function pop(){
    window.alert("For real. Don't click this!")
}
function more(){
        if (document.getElementById("extra").style.display != "flex"){
            document.getElementById("extra").style.display = "flex"
            document.getElementById("shw").innerHTML = "Show Less"
    }else{
            document.getElementById("extra").style.display = "none"
            document.getElementById("shw").innerHTML = "Show More"
    }
}