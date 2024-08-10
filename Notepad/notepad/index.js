const form=document.querySelector(".form")
const colors=document.querySelectorAll(".color")
const input=document.querySelector(".input")
const textarea=document.querySelector(".textarea")
const cards=document.querySelector(".cards")
Array.from(colors).forEach((element) => {
    element.addEventListener("click",()=>{
        const active=document.querySelector(".color.active")
        if(active){
            active.classList.remove("active")
        }
        element.classList.add("active")
    })
});
form.addEventListener("submit",(e)=>{
    e.preventDefault();
    if (!input.value.trim()) {
        return alert("Not basligi yazilmayib!")
    }
    if (!textarea.value.trim()) {
        return alert("Not yazilmayib!")
    }
    const active=document.querySelector(".color.active")
    if(!active){
    return alert("Reng secilmeyib")
    }
    const newNote={
        title:input.value,
        description:textarea.value,
        color:active.style.backgroundColor,
    }
    yeninot(newNote);
    input.value="";
    textarea.value="";
    active.classList.remove("active")
})
function yeninot(note){
    const card=document.createElement("div")
    const tit=document.createElement("h3")
    const paraq=document.createElement("p")
    const deletebtn=document.createElement("button")
    deletebtn.innerHTML=`<img src="./icons/delete.svg" alt="" class="delete">`
    card.style.borderColor=note.color;
    tit.textContent=note.title;
    paraq.textContent=note.description;
    card.className="card";
    card.append(tit,paraq,deletebtn);
    cards.append(card)
    deletebtn.addEventListener("click",()=>{
        if (confirm("Silmek istediyinize eminsiniz?")) {
            card.remove();
        }
    })
}
const search=document.querySelector(".search")
search.addEventListener("keyup",(e)=>{
    const noteElements=document.querySelectorAll(".card")
    Array.from(noteElements).forEach((element)=>{
        const basliqyazi=element.querySelector("h3").textContent;
        const paraqrafyazi=element.querySelector("p").textContent;
        if (basliqyazi.toLowerCase().trim().includes(e.target.value) || paraqrafyazi.toLowerCase().trim().includes(e.target.value)) {
            element.style.display="block";            
        }
        else{
        element.style.display="none";
        }
    })

})