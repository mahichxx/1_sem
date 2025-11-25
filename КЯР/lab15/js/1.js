let voto2 = document.getElementById("voto2")
let voto3 = document.getElementById("voto3")
let voto4 = document.getElementById("voto4")

let someText = document.createElement("p")
someText.style.fontSize = "32px"
someText.innerText="Девочка с кружкой чая"
someText.style.display ="none"
document.getElementById("fig1").append(someText)

voto2.addEventListener("mouseover",function(){
    voto2.style.display = "none"
    someText.style.display = "inline"
})

voto2.addEventListener("mouseout",function(){
    voto2.style.display = "block"
    someText.style.display = "none"
})

voto3.addEventListener("click", function(){
    voto3.style.border = "10px solid red"
})

voto3.addEventListener("dblclick", function(){
    voto3.style.border = "none"
})

voto4.addEventListener("mouseover", function(){
    voto4.src = "./img/voto5.jpg";
})

voto4.addEventListener("mouseout", function(){
    voto4.src = "./img/voto4.jpg";
})