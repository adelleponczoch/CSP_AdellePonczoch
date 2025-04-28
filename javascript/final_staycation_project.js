let images = ["https://www.offthebeatenpath.com/wp-content/uploads/2021/08/entrance-zion-national-park.jpg", "https://media.timeout.com/images/106151559/750/562/image.jpg", "https://thegoldenhouradventurer.com/wp-content/uploads/2020/09/ObservationPointZionNP01-scaled.jpg"]

let webpage = document.getElementById("text").style.display 

function show(){
    if (document.getElementById("text").style.display == "block"){
        document.getElementById("text").style.display = "none"
    }else{
        document.getElementById("text").style.display = "block"
    }
}
function show(){
    if (document.getElementById("text").style.display != "flex"){
        document.getElementById("text").style.display = "flex"
        document.getElementById("btn").innerHTML = "Show Less"
}else{
        document.getElementById("text").style.display = "none"
        document.getElementById("btn").innerHTML = "Show More"
}
}

count = 0
function change(){
    
    document.getElementById("sign").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}