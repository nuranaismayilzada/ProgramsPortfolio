let formElement = document.querySelector(".container .topSide form");
let addedInput = document.querySelector(".container .topSide form input");
let notesGeneral = document.querySelector(".container .mainSide .notes");
let count = document.querySelector(".container .bottomSide p .count");

formElement.addEventListener("submit", (e) => {
    e.preventDefault();
    let trimmedValue = addedInput.value.trim();
    
    if (trimmedValue) {
        let line = document.createElement("li");
        let text = document.createElement("p");
        let circle = document.createElement("div");
        circle.className = "circle";

        let checkBox = document.createElement("i");
        checkBox.className = "fa-solid fa-check";
        checkBox.style.color = "#11ff00";


        let xMark = document.createElement("i");
        xMark.className = "fa-solid fa-xmark";
        xMark.style.color = "#d53030";
        xMark.addEventListener("click", () => {
            line.remove();
            let currentCount = parseInt(count.innerText) || 0;
            count.innerText = currentCount - 1;
        });

        text.innerText = trimmedValue;
        circle.append(checkBox);
        line.append(circle, text, xMark);
        notesGeneral.append(line);

        let currentCount = parseInt(count.innerText) || 0;
        count.innerText = currentCount + 1;

        addedInput.value = "";
    }
});



let lisGeneral = document.querySelectorAll(".container .bottomSide .middle ul li");

lisGeneral.forEach((item) => {
    item.addEventListener("click", () => {
        lisGeneral.forEach((li) => li.classList.remove("active")); 
        item.classList.add("active"); 
    });
});
