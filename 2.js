function is_username_valid(username){
    let regex = /^[a-zA-Z]{1}[a-zA-Z0-9]{4,8}/gm;
    return regex.test(username);
}
is_username_valid("@sonyAlam");
is_username_valid("SonyAlam2");
console.log(is_username_valid("@sonyAlam")); //Untuk Cek Di Console, hasil false
console.log(is_username_valid("sonyAlam2")); //cek di console, hasil true

/* password harus diawali huruf besar, kemudian harus memakai @, setelah itu nomor
setelah nomor wajib memakai karakter spesial, kemudian huruf/angka/karakter di akhirnya
*/
function is_password_valid(password){
    let regex_2 = /^[A-Z]{1,5}[a-z@]{1,15}[@]{1,15}[a-zA-Z@#$%]{1,10}[0-9]{1,10}[@#$%^&]{1,10}[a-zA-Z0-9@#$%^]{1,10}/gm;
    return regex_2.test(password);
}
is_password_valid("Akemi@ade72#full");
is_password_valid("Akemiade72#full");
console.log(is_password_valid("Akemi@ade72#full")); //cek console, true
console.log(is_password_valid("Akemiade72#full")); //cek console,false