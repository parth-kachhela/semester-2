const express = require("express");
const app = express();
let port = 8080;

app.listen(port, () => {
  console.log("app is listening");
});

app.get("/rigerter", (req, res) => {
  res.send("req accepted");
});
