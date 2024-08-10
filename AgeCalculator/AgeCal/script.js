document.addEventListener('DOMContentLoaded', function () {
    var hesaplaButton = document.getElementById('hesapla');
    hesaplaButton.addEventListener('click', function () {
        var dogumTarihi = new Date(document.getElementById('dogumTarihi').value);
        var simdikiZaman = new Date();
        
        var gecenSure = Math.floor((simdikiZaman - dogumTarihi) / 1000);
        
        document.getElementById('sonuc').textContent = 'Doğulduğunuz gündən bu yana keçən vaxt: ' + gecenSure + ' saniyə';
    });
});
