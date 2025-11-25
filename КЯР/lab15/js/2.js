document.getElementById("submit").addEventListener("click", function() {
    let someText = "";
    let name = document.getElementById("name").value;
    someText += " Имя: " + name;
    let surname = document.getElementById("surname").value;
    someText += " Фамилия: " + surname;
    
    let mail = document.getElementById("mail").value;
    someText += " Почта: " + mail;
    let num = document.getElementById("tel").value;
    someText += " Номер: " + num + " ";
   
    let can = document.getElementById("fac").value;
    someText += "Страна: " + can + " ";
    
    let textElement = document.createElement("p");
    textElement.innerText = someText;
    document.getElementById("footer").append(textElement);
});