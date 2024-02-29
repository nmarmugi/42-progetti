document.getElementById('cambiaColoreBtn').addEventListener('click', cambiaColore);

function cambiaColore() {
  var coloreRandomico = generaColoreRandomico();
  document.body.style.backgroundColor = coloreRandomico;
}

function generaColoreRandomico() {
  var colore = '#' + Math.floor(Math.random() * 16777215).toString(16);
  return colore;
}
