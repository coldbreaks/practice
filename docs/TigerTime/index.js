var hasStarted = false;

var startTime = 0;

var endTime = 0;

var reactionTime = 0;

var colorCountInProgress = false;

var handleClick = () => {

    if(!hasStarted){
        hasStarted = true;
        startTest();
    } else if (!colorCountInProgress) {
        hasStarted = false;
        endTime = new Date();
        reactionTime = endTime - startTime; // returns difference in ms
        setReactionTimeText(reactionTime);
        changeImage("white");
    }

}; // ending of method to handle the clicking of the click area div

var startTest = () => {

    var minDelay = 1000;
    var maxDelay = 8000;

    changeImage("purple");

    colorCountInProgress = true;
    
    var rdmDelay = Math.random() * (maxDelay - minDelay + 1) + minDelay;

    setTimeout(function() {
        changeImage("orange");
        colorCountInProgress = false;
        startTime = new Date();
    }, rdmDelay);

}; // ending of method to start the test visually and change color at random time within 8 seconds

var setReactionTimeText = (timeInMS) => {
    var reactionTimeTextElement = document.getElementsByClassName("reactionTimeHeader")[0];

    reactionTimeTextElement.innerHTML = "Reaction Time: " + timeInMS + "ms";
}; // ending of method to set the shown reaction time text to include the time

var changeColor = (color) => {
    var clickAreaElement = document.getElementsByClassName("clickArea")[0];

    if(clickAreaElement) {
        if(color === "green"){
            clickAreaElement.style.backgroundColor = "green";
        } else if(color === "red"){
            clickAreaElement.style.backgroundColor = "red";
        } else if(color === "black"){
            clickAreaElement.style.backgroundColor = "black";
        }
      }
}; // ending bracket of method to change background color of the div based on string input

var changeImage = (color) => {
    var image = document.getElementsByClassName("centeredImage")[0];

    if(image) {
        if(color === "purple"){
            image.src = "purpletiger.png";
        } else if(color === "orange"){
            image.src = "orangetiger.png";
        } else if(color === "white"){
            image.src = "whitetiger.png";
        }
      }
}; // ending bracket of method to change img based on color