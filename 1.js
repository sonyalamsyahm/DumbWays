function biodata() {
    return {
        name: 'Sony Alamsyah M', // Tipe String
        age : 21, // Tipe Number
        address : 'Kp Gandaria RT 001 RW 004 Desa Rancagoong, Kecamatan Cilaku, Kabupaten Cianjur', //Tipe String
        Hobbies : ['Music','Ngoding','Membaca dan Menulis'], // Tipe Array
        is_married : false, // Tipe Boolean
        list_school : [{
            name : 'SDN Pasir Hayam',
            year_in : 2004,
            year_out : 2010,
            major : 'null'
        },
        {
            name : 'MTsN Rancagoong',
            year_in : 2010,
            year_out : 2013,
            major : 'null'
        },
        {
            name : 'SMAN 1 Cilaku',
            year_in : 2013,
            year_out : 2016,
            major : 'Science'
        },
        {
            name : 'Politeknik Negeri Bandung',
            year_in : 2016,
            year_out : 2019,
            major : 'Electronics Engineering'
        }
    ], //Tipe Array of object
        interest_in_coding : true //Tipe Boolean
    }
}
biodata();
console.log(biodata()); //mengecek di console