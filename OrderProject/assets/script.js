let foods=["dana basdirmasi","kabab","qayqanaq","menemen"]
let yemekler=document.querySelector("#yemekler")
let foodFunction=function foodsFunction(foods) {
    for (let i = 0; i < foods.length; i++) {
        let newOptions=document.createElement("option")
        newOptions.className="foo"
        newOptions.innerText=foods[i]    
        yemekler.append(newOptions)    
    }
}
foodFunction(foods)
let foo=document.querySelector(".foo")
let yemekOne=document.querySelector("option")
let status=document.querySelector(".pendinq")
let priceOne=document.querySelector("#price")
let countOne=document.querySelector("#count")
let totalPrice=document.querySelector("#totalprice")
let ikincifood=document.querySelector("#ffood")
let fullnameOne=document.querySelector("#fullname")
let fullnameTwo=document.querySelector("#ikincifullname")
let submitButton=document.querySelector(".submit")
let selectedFood = yemekler.innerText;
submitButton.addEventListener("click",function(){
    let ikincihisse=document.querySelector(".currentorders")
    ikincihisse.classList.remove("gorunmez")
    if (fullnameOne.value.trim()==="" || countOne.value=="" || priceOne.value=="" || yemekler.value=="") {
        alert("Bosluq ola bilmez!")
        return
    }
    fullnameTwo.value=fullnameOne.value
    totalPrice.value=countOne.value*priceOne.value 
    
})
let confirmButton=document.querySelector(".confirm")
let refusalButton=document.querySelector(".refusal")
confirmButton.addEventListener("click",function(){
    status.value="Confirm"
    status.style.backgroundColor="green"
})
refusalButton.addEventListener("click",function(){
    status.value="Refusal";
    status.style.backgroundColor="red"
})
