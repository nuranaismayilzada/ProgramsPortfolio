const inputt=document.querySelector("input")
const butonn=document.querySelector("button")
const ull=document.querySelector("ul")

butonn.addEventListener("click",()=>{
    let value=inputt.value;
    if(!value.trim()) return;
    const newLiElement=document.createElement("li")
    newLiElement.textContent=value;
    const deletebuton=document.createElement("button")
    deletebuton.textContent="Delete"
    deletebuton.addEventListener("click",()=>{
        newLiElement.remove()
    })
    newLiElement.append(deletebuton)

    ull.append(newLiElement)
    inputt.value=""
    
})