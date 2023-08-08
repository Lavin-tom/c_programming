
const Colors = [];
var message = "";
var eventday = "";
const Names = [];
var count = 0;
let looping = false;
var Timeleftmessage = 'Happy Birthday';

//to modify the bday with current year
const currentYear = new Date().getFullYear();

for (let i = 0; i < friends.length; i++) {
  const friend = friends[i];
  friend.birthday.setFullYear(currentYear);
}

// generate a random RGB color string
function getRandomColor() {
  var r = Math.floor(Math.random() * 256);
  var g = Math.floor(Math.random() * 256);
  var b = Math.floor(Math.random() * 256);
  return "rgb(" + r + ", " + g + ", " + b + ")";
}

// set random color for each stop element
var stop1 = document.getElementById("stop1");
var stop2 = document.getElementById("stop2");
stop1.style.stopColor = getRandomColor();
stop2.style.stopColor = getRandomColor();

var divCon = document.getElementById("name");
divCon.style.color = stop1.style.stopColor;
Colors.push(stop1.style.stopColor);
Colors.push(stop2.style.stopColor);


// Define the rgbToHex() function as before
function rgbToHex(rgbString) {
  var parts = rgbString.match(/^rgb\((\d+),\s*(\d+),\s*(\d+)\)$/);
  delete (parts[0]);
  for (var i = 1; i <= 3; ++i) {
    parts[i] = parseInt(parts[i]).toString(16);
    if (parts[i].length == 1) parts[i] = '0' + parts[i];
  }
  return '#' + parts.join('');
}

// Convert the RGB colors to hexadecimal using map()
var hexColors = Colors.map(rgbToHex);

// Get today's date
const today = new Date();

// Loop through the friends array
for (let i = 0; i < friends.length; i++) {
  const friend = friends[i];
  const birthday = friend.birthday;

  // Check if the friend's birthday is today
  if (birthday.getDate() === today.getDate() &&
    birthday.getMonth() === today.getMonth()) {
    Names.push(friend.name);
    message = "Happy Birthday";
    eventday = "yes";
    looping = true;
    count = i;
  }
  if (
    (birthday.getMonth() > today.getMonth()) ||
    (birthday.getMonth() === today.getMonth() && birthday.getDate() > today.getDate())
  ) {
    count = i;
    break;
  }
}
//setInterval(updateCountdown, 1000);
var hour = new Date().getHours();

if (!eventday)
  Timeleftmessage = "Next Bday is in";

if (!eventday) {
  if (hour >= 5 && hour < 12) {
    message = "Good morning!";
  } else if (hour >= 12 && hour < 18) {
    message = "Good afternoon!";
  } else if (hour >= 18 && hour < 22) {
    message = "Good evening!";
  } else {
    message = "Good night!";
  }
}

var typed = new Typed('#typed-text', {
  strings: [message, Timeleftmessage],
  typeSpeed: 100,
  loop: false,
  showCursor: false,
  onComplete: function () {
    // Call the second typing function here
    if (eventday) {
      var typedName = new Typed('#name', {
        strings: Names,
        typeSpeed: 100,
        backSpeed: 100,
        loop: looping,
        showCursor: false
      });
    }
  }
});


if (eventday) {
  var end = Date.now() + (10 * 600);

  (function frame() {
    confetti({
      particleCount: 2,
      angle: 60,
      spread: 55,
      origin: { x: 0 },
      colors: hexColors
    });
    confetti({
      particleCount: 2,
      angle: 120,
      spread: 55,
      origin: { x: 1 },
      colors: hexColors
    });

    if (Date.now() < end) {
      requestAnimationFrame(frame);
    }
  }());
}

// Generate a random message based on event
if (eventday) {
  var randomIndex = Math.floor(Math.random() * birthdayMessages.length);
  // Get the message at the random index
  var message = birthdayMessages[randomIndex];
}
else {
  var randomIndex = Math.floor(Math.random() * generalMessages.length);
  // Get the message at the random index
  var message = generalMessages[randomIndex];
}

// Call the second typing function here
var typedName = new Typed('#rand-msg', {
  strings: [message],
  typeSpeed: 60,
  loop: false,
  showCursor: false,
  backSpeed: 0
});

particlesJS("particles-js", {
  particles: {
    number: { value: 30, density: { enable: true, value_area: 800 } },
    color: { value: hexColors[0] },
    shape: {
      type: "circle",
      stroke: { width: 0, color: "#000000" },
      polygon: { nb_sides: 5 }
    },
    opacity: {
      value: 0.5,
      random: false,
      anim: { enable: false, speed: 1, opacity_min: 0.1, sync: false }
    },
    size: {
      value: 3,
      random: false,
      anim: { enable: false, speed: 40, size_min: 0.1, sync: false }
    },
    line_linked: {
      enable: true,
      distance: 150,
      color: hexColors[1],
      opacity: 0.8,
      width: 1
    },
    move: {
      enable: true,
      speed: 6,
      direction: "none",
      random: false,
      straight: false,
      out_mode: "bounce",
      bounce: false,
      attract: { enable: false, rotateX: 600, rotateY: 1200 }
    }
  },
  interactivity: {
    detect_on: "canvas",
    modes: {
      grab: { distance: 400, line_linked: { opacity: 1 } },
      bubble: { distance: 400, size: 40, duration: 2, opacity: 8, speed: 3 },
      repulse: { distance: 200, duration: 0.4 },
      push: { particles_nb: 4 },
      remove: { particles_nb: 2 }
    }
  }
});

//for ajax
$('.circle-btn').click(function () {
  if (eventday) {
    $('.rand-msg').html('Make your birthday even more meaningful by giving back. Consider donating to <a id="savechildren" href="https://www.savethechildren.in/donate/"><b>Save the Children</b></a> in honor of your special day and help make a difference in the lives of children around the world.');
  }
  else {
    $('.rand-msg').html('Consider donating to <a id="savechildren" href="https://www.savethechildren.in/donate/"><b>Save the Children</b></a> and help make a difference in the lives of children around the world.');
  }
  $.ajax({
    type: "GET",
    url: "https://api.meetup.com/2/cities",
    success: function (data) {
      $('.rand-msg').html(JSON.stringify(data));
    },
    dataType: 'json',
  });
  document.getElementById("#myButton").style.display = "none";
});

//for ajax
$('.testname').click(function () {
  $('.rand-msg').html('I created this webpage to celebrate my friends birthdays, ensuring they feel remembered and special. It allows me to send heartfelt wishes to 172 individuals annually. Let me know if you want to include or exclude your name. Collect my yearly wishes here, even if I forget a personal message :) <a id="savechildren" href="https://www.instagram.com/love_in_tom"><b>lavin</b></a> ');
  $('.rand-msg').addClass('small-font');
  $.ajax({
    type: "GET",
    url: "https://api.meetup.com/2/cities",
    success: function (data) {
      $('.rand-msg').html(JSON.stringify(data));
    },
    dataType: 'json',
  });
});

var eventAudio = document.getElementById("event-audio");
//Call changeAudioSource function when event is displayed
function changeAudioSource(eventType) {
  switch (eventType) {
    case "yes":
      eventAudio.src = "assets/event-day-music.mp3";
      break;
    case " ":
      eventAudio.src = "assets/normal-day-music.mp3";
      break;
  }
  eventAudio.load();
  eventAudio.play();
}
changeAudioSource(eventday);
// Select the button element using its ID or class
var button = document.querySelector(".circle-btn");

// Set the background color of the button using the random color generated by the function
button.style.backgroundColor = Colors[0];

const nextevent = friends[count];
const nextBdayEvent = nextevent.birthday;
//function for countdown
function updateCountDown() {
  const countdownElement = document.getElementById("name");
  const currentDate = new Date().getTime();
  const difference = nextBdayEvent - currentDate;

  const days = Math.floor(difference / (1000 * 60 * 60 * 24));
  const hours = Math.floor((difference % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  const minutes = Math.floor((difference % (1000 * 60 * 60)) / (1000 * 60));
  const seconds = Math.floor((difference % (1000 * 60)) / 1000);
  countdownElement.innerHTML = `${days}d ${hours}h ${minutes}m ${seconds}`;
}
//call the count down function when event free day
if (!eventday)
  setInterval(updateCountDown, 1000);
else {
  var Namelength = Names.length;      //to find no of bdays in present day     
  const imageUrl = 'https://Lavin-tom.github.io/assets/Bday_card_template_23.jpg';
  const downloadButton = document.getElementById('#myButton');
  //var userInput = " ";

  downloadButton.addEventListener('click', () => {
    if (Namelength >= 2) {
      while (!userInput) {      //to make prompt required field
        var userInput = prompt('Please enter your name to generate bday card-' + Names);
      }
    }
    else
      userInput = Names[0];
    const xhr = new XMLHttpRequest();
    xhr.open('GET', imageUrl, true);
    xhr.responseType = 'blob';

    xhr.onload = function () {
      if (xhr.status === 200) {
        const blob = xhr.response;
        const reader = new FileReader();
        reader.onloadend = function () {
          const image = new Image();
          image.onload = function () {
            const canvas = document.createElement('canvas');
            canvas.width = image.width;
            canvas.height = image.height;
            const context = canvas.getContext('2d');
            context.drawImage(image, 0, 0);

            // Add the testing word
            const text = userInput;
            context.font = "italic bold 130px 'Monotype Corsiva', cursive";
            context.fillStyle = 'black';
            context.textAlign = 'center';
            context.fillText(text, canvas.width / 2, canvas.height / 2 - 80);

            // Convert the modified canvas to blob
            canvas.toBlob(function (modifiedBlob) {
              // Save the modified blob as a file
              saveAs(modifiedBlob, 'my_Bday_card.jpg');
            }, 'image/jpeg', 1);
          };
          image.src = reader.result;
        };
        reader.readAsDataURL(blob);
      }
    };
    xhr.send();
  });
}