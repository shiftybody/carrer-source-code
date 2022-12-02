const mg = require('mongodb').MongoClient;
const url = "mongodb://127.0.0.1:27017/mydb";
mg.connect(url, { useUnifiedTopology: true }, function (err, db) {
    if (err) throw err;
    console.log("Database created!");
    db.close();
});

