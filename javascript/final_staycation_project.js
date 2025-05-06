let images = ["https://media.timeout.com/images/106151559/750/562/image.jpg", "https://visitfourcorners.com/wp-content/uploads/2024/01/Arches-National-Park-A-1024x572.webp", "https://www.offthebeatenpath.com/wp-content/uploads/2021/08/entrance-zion-national-park.jpg"]


function show(){
    if (document.getElementById("hidden").style.display != "flex"){
        document.getElementById("hidden").style.display = "flex"
        document.getElementById("btn").innerHTML = "Show Less"
}else{
        document.getElementById("hidden").style.display = "none"
        document.getElementById("btn").innerHTML = "Show More"
}
}

let count = 0
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}