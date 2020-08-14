
$(document).ready(function () {
  $('#informations').DataTable();
  $(".toast").toast('show');
});



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


  textarea.style.fontSize = "14px";
  var mainEl = document.getElementById("textarea");
  if (mainEl.value != "") {
    textarea.style.display = "none";
  }
}


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
      label.innerText = value
    }
}

function searchTable() {
  var output = $("#searchinput").val().toLowerCase();
  $("#informations tbody tr").filter(function () {
    $(this).toggle($(this).text().toLowerCase().indexOf(output) > -1)
  });
}

function searchTable() {
  var input, filter, table, tr, td, i, txtValue;
  input = document.getElementById("searchinput2");
  filter = input.value.toUpperCase();
  table = document.getElementById("table1");
  tr = table.getElementsByTagName("tr");
  for (i = 0; i < tr.length; i++) {
    td = tr[i].getElementsByTagName("td")[0];
    if (td) {
      txtValue = td.textContent || td.innerText;
      if (txtValue.toUpperCase().indexOf(filter) > -1) {
        tr[i].style.display = "";
      } else {
        tr[i].style.display = "none";
      }
    }
  }
}
function searchTable2() {
  var input, filter, table, tr, td, i, txtValue;
  input = document.getElementById("searchinput2");
  filter = input.value.toUpperCase();
  table = document.getElementById("table2");
  tr = table.getElementsByTagName("tr");
  for (i = 0; i < tr.length; i++) {
    td = tr[i].getElementsByTagName("td")[0];
    if (td) {
      txtValue = td.textContent || td.innerText;
      if (txtValue.toUpperCase().indexOf(filter) > -1) {
        tr[i].style.display = "";
      } else {
        tr[i].style.display = "none";
      }
    }
  }
}
function hidemodal() {
  $("#acceptmodal").modal('hide')
}
function loadDataTable() {
  //datatable for sorting and show
  $('#informations').DataTable();
  $(".table-city1").DataTable();



  //fifth td in thead need to show more text
  var el =
    document.getElementById('td-5th');
  var el2 =
    document.getElementById('td-5th').innerHTML;
  // console.log(el2.length);
  if (el2.length > 60) {
    var addtooltip = document.createElement("span");
    addtooltip.classList.add("tooltip");
    addtooltip.innerHTML += el2;
    el.innerHTML = el2.slice(0, 50) + "...";
    el.appendChild(addtooltip);
  } else {
    el.style.whiteSpace = "normal"
  }


  //last th on table should not be clicked for sorting...
  var last_th = $('#informations thead tr th:last-child')
  last_th.on('click', function () {
    this.style.backgroundImage = "unset"
  })


};

$(document).on('show.bs.modal', '.modal', function (event) {
  var zIndex = 1040 + (10 * $('.modal:visible').length);
  $(this).css('z-index', zIndex);
  setTimeout(function () {
    $('.modal-backdrop').not('.modal-stack').css('z-index', zIndex - 1).addClass('modal-stack');
  }, 0);

});

// check required input for phone number and social media
function addReqired() {
  var inputsReq = document.getElementsByClassName("req-input");
  if ((inputsReq[0].value == "" || inputsReq[0].value == null) && (inputsReq[1].value == "" || inputsReq[1].value == null)) {
    inputsReq[2].required = true;
  } else
    if ((inputsReq[1].value == "" || inputsReq[1].value == null) && (inputsReq[2].value == "" || inputsReq[2].value == null)) {
      inputsReq[0].required = true;
    } else
      if ((inputsReq[0].value == "" || inputsReq[0].value == null) && (inputsReq[2].value == "" || inputsReq[2].value == null)) {
        inputsReq[1].required = true;
      }
}
