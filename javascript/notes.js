let images = ["https://www.mountain-forecast.com/system/images/24500/large/Mount-Timpanogos.jpg?1532401039", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQTzWB_2RLSqlVCMHgckp6RY_H_xD5w2TsRr7rmMmbq2_T-ap1HMwLwXpgIxaW-qEiWrQs&usqp=CAU", "https://www.fs.usda.gov/wildflowers/regions/intermountain/MtTimpanogos/images/MtTimpanogosinSpring_FrankJensen_lg.jpg"]
function hello(){
    document.getElementById("title").innerHTML = "Hello World!"
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
function show(){
    document.getElementById("hidden").style.display = "block"
}
function pop(){
    document.get
}