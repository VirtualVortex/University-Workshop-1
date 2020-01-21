# The code her is from Gareths workshop and has been modified

from http.server import BaseHTTPRequestHandler, HTTPServer
import json
import sqlite3
from urllib.parse import *

hostName = "localhost"
hostPort = 8000
#Connect to the database
db = sqlite3.connect('database.sqlite')
cursor = db.cursor()

#Create a table called users if it doesn't already exist
cursor.execute('''CREATE TABLE IF NOT EXISTS users(name TEXT, number TEXT )''')

db.commit()


class MyServer(BaseHTTPRequestHandler):

    #Do GET Request
    def do_GET(self):
        print("Do GET:" + self.path);
        # boilerplate HTML code
        self.send_response(200)
        self.send_header('Content-type', 'text/html')
        self.send_header('Access-Control-Allow_Origin', '*')
        self.end_headers()

        result = urlparse(self.path)

        # Code below will access the tables and get each piece of data in it
        if 'get_all_records' in result.path:
            list = []

            for row in cursor.execute("select * from users order by number desc"):
                entry = {}
                entry['name'] = row[0]
                entry['number'] = row[1]

                list.append(entry)

            # Implement the list into a directory with the key "Data"
            response_data = json.dumps({"Data": list})
            self.wfile.write(response_data.encode())

            print("GET RESPONSE ", result)
            return

    # Do POST Request
    def do_POST(self):
        print("DO POST:" + self.path);

        #extract client data
        content_length = int(self.headers['Content-Length'])
        post_data = self.rfile.read(content_length)

        #Decode sent data from client
        data = json.loads(post_data.decode())

        #boilerplate HTML code
        self.send_response(200)
        self.end_headers()

        self.wfile.write(json.dumps(data).encode())

        #Sets variables to name and phone columns in users table
        name = data['name']
        number = data['phone']

        #Inser data into the database and then save (commit) it
        cursor.execute('''INSERT INTO users(name, number) VALUES(?,?)''', (name, number))
        db.commit()

        print("POST: ", post_data.decode())

#Creating instane of server
myServer = HTTPServer((hostName, hostPort), MyServer)

#Run the server until told otherwise
try:
    myServer.serve_forever()
except KeyboardInterrupt:
    pass

myServer.server_close()