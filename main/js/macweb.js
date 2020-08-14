var checkbox = document.getElementById("checkboxmodal");
var btnSend = document.getElementById("nextstep");
checkbox.onchange = function () {
  btnSend.disabled = !this.checked;
  btnSend.classList.toggle("red-btn");
  btnSend.classList.toggle("active-btn");
}




function focusarea() {
  var textarea = document.getElementById("label-area");
  textarea.style.color = "black";
  textarea.style.transform = "translateY(-35px)";
  textarea.style.fontSize = "16px";
}

function bluearea() {
  var textarea = document.getElementById("label-area");
  textarea.style.color = "#ccc";
  // textarea.style.top = "-14px";

  textarea.style.transform = "translateY(0px)";
  textarea.style.fontSize = "14px";
}

// Also see: https://www.quirksmode.org/dom/inputfile.html

var inputs = document.querySelectorAll('.file-input')

for (var i = 0, len = inputs.length; i < len; i++) {
  customInput(inputs[i])
}

function customInput(el) {
  const fileInput = el.querySelector('[type="file"]')
  const label = el.querySelector('[data-js-label]')

  fileInput.onchange =
    fileInput.onmouseout = function () {
      if (!fileInput.value) return

      var value = fileInput.value.replace(/^.*[\\\/]/, '')
      el.className += ' -chosen'
      label.innerText = value;
    }
}

function searchTable() {
  var output = $("#searchinput").val().toLowerCase();
  $("#informations tbody tr").filter(function () {
    $(this).toggle($(this).text().toLowerCase().indexOf(output) > -1);
  });
}


function hidemodal() {
  $("#acceptmodal").modal('hide');
}
function loadDataTable() {
  // newTable = $('#informations').DataTable();
  // $("#searchinput").keyup(function () {
  //   newTable.search($(this).val()).draw();
  // });
  
  $('#informations').DataTable();
};

$(document).ready( function () {
  $('#informations').DataTable();
} );