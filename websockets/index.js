import { io } from "socket.io-client";

const socket = io("http://localhost:5000")
socket.on('connect',()=> console.log("socket client connected"));

socket.on('event1',(data)=> {console.log("event one sent or emitted " + data)
    socket.emit("message",{"sa7a":"ok"})
})
socket.emit('message',{'salam':'3alaykoum'})