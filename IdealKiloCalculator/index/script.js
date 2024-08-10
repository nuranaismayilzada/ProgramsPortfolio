document.addEventListener('DOMContentLoaded', function () {
    var hesaplaButton = document.getElementById('hesapla');
    hesaplaButton.addEventListener('click', function () {
        var boy = parseFloat(document.getElementById('boy').value);
        var cinsiyet = document.getElementById('cinsiyet').value;
        
        if (isNaN(boy)) {
            alert('Geçerli bir boy değeri girin.');
        } else {
            var idealKilo;

            if (cinsiyet === 'erkek') {
                idealKilo = (boy - 100) * 0.9;
            } else if (cinsiyet === 'kadın') {
                idealKilo = (boy - 100) * 0.85;
            }

            document.getElementById('sonuc').textContent = 'İdeal Kilonuz: ' + idealKilo.toFixed(2) + ' kg';
        }
    });
});
