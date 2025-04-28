let images = ["https://www.offthebeatenpath.com/wp-content/uploads/2021/08/entrance-zion-national-park.jpg", "https://media.timeout.com/images/106151559/750/562/image.jpg", "https://thegoldenhouradventurer.com/wp-content/uploads/2020/09/ObservationPointZionNP01-scaled.jpg"]



count = 0
function change(){
    
    document.getElementById("sign").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}