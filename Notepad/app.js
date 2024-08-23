let formElement=document.querySelector("form")
let noteTitle=document.querySelector(".noteTitle")
let textArea=document.querySelector("textarea")
let colors=document.querySelectorAll(".color")
let notes=document.querySelector(".notes")
Array.from(colors).forEach((element)=>{
    element.addEventListener("click",()=>{
        const active=document.querySelector(".color.active")
        if (active) {
            active.classList.remove("active")
        }
        element.classList.add("active")
    })
})
formElement.addEventListener("submit",(e)=>{
    e.preventDefault();
    if (!noteTitle.value.trim()) {
        alert("Not basligi yazilmayib!")
    }    
    if(!textArea.value.trim()){
        alert("Note yazilmayib!")
    }
    const active=document.querySelector(".color.active")
    if (!active) {
        alert("Reng secilmeyib")
    }
    let newNote={
        title:noteTitle.value,
        description:textArea.value,
        color:active.style.color
    }
    yeniNot(newNote);
    noteTitle.value="";
    textArea.value="";
    active.classList.remove("active")    
})

function yeniNot(note) {
    let card=document.createElement("div")
    card.className="card"
    card.style.borderColor=note.Color
    let header=document.createElement("div")
    header.className="header"
    let title=document.createElement("h4")
    title.textContent=note.title
    let deleteIcon=document.createElement("i")
    deleteIcon.className="fa-regular"
    deleteIcon.classList.add("fa-trash-can")
    let description=document.createElement("p")
    description.textContent=note.description
    header.style.backgroundColor=note.color
    header.append(title,deleteIcon)
    card.append(header,description)
    notes.append(card)
    deleteIcon.addEventListener("click",()=>{
        if (confirm("Silmek istediyinize eminsiniz?")) {
            card.remove();
        }
    })
}
const search=document.querySelector(".search")
search.addEventListener("keyup",(e)=>{
    const noteElements=document.querySelectorAll(".notes .card")
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