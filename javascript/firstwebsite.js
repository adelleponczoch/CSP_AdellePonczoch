let images = ["https://ih1.redbubble.net/image.982959959.6041/flat,750x,075,f-pad,750x1000,f8f8f8.jpg", "https://media.newyorker.com/photos/5a57ced6f686540bff451ef2/master/pass/180122_r31326.jpg", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRbZdTVOKsladTdQj3Oej2TWvsk5nfnky6ECQ&s"]

function show(){
    document.getElementById("hidden").style.display = "block"
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