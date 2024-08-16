let formElement = document.querySelector("form");
let productInput = document.querySelector(".productInput");
let priceInput = document.querySelector(".priceInput");
let textArea = document.querySelector("textarea");
let errorMessage = document.querySelector(".input > p");
let errorMessagee = document.querySelector(".inputsP > p");
let errorMessageTextArea = document.querySelector(".textA > p");
let one = document.querySelector(".input");
let two = document.querySelector(".inputsP");
let three = document.querySelector(".textA");
const productss = document.querySelector(".products");

formElement.addEventListener("submit", (e) => {
    e.preventDefault();
    if (!validateFormItems()) return;
    
    const newProduct = {
        title: productInput.value,
        price: priceInput.value,
        description: textArea.value
    };
    
    createElement(newProduct);
    resetFormInputs();
});

function validateFormItems() {
    let isSuccess = true;
    if (!productInput.value.trim()) {
        errorMessage.textContent = "Title is required!";
        isSuccess = false;
    }
    if (!priceInput.value.trim()) {
        errorMessagee.textContent = "Price is required!";
        isSuccess = false;
    }
    if (!textArea.value.trim()) {
        errorMessageTextArea.textContent = "Description is required!";
        isSuccess = false;
    }
    return isSuccess;
}

function createElement(product) {
    const productWrapperElement = document.createElement("div");
    productWrapperElement.className = "box";
    
    const productTitleElement = document.createElement("h3");
    productTitleElement.textContent = product.title;
    
    const productPriceElement = document.createElement("h2");
    productPriceElement.textContent = product.price;
    
    const productDescriptionElement = document.createElement("p");
    productDescriptionElement.textContent = product.description;
    
    const productDeleteElement = document.createElement("button");  
    productDeleteElement.textContent = "Delete";
    productDeleteElement.className="delete"
    productDeleteElement.addEventListener("click", onProductDelete);
    
    productWrapperElement.append(
        productTitleElement,
        productPriceElement,
        productDescriptionElement,
        productDeleteElement
    );
    
    productss.append(productWrapperElement);
}

function onProductDelete(e) {
    if (confirm("Are you sure to delete product?"))
        e.target.parentElement.remove();
}

function resetFormInputs() {
    productInput.value = "";
    priceInput.value = "";
    textArea.value = "";
}

let arr = [one, two, three];
arr.forEach(element => {
    element.addEventListener("keydown", () => {
        element.querySelector("p").textContent = "";
    });
});
