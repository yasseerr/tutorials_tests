from flask import Flask,render_template
from flask_socketio import SocketIO
import os

app = Flask(__name__)

@app.route("/")
def page():
    return app.send_static_file("index.html")

socketIO = SocketIO(app)

@socketIO.on('connect')
def test_connect():
    print("it was connected")

@socketIO.on('message')
def respend(obj):
    print("message received: "+str(obj))
    socketIO.emit('event1',"Well received")

if __name__ == "__main__":
    socketIO.run(app)