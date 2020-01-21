# The code her is from Gareths workshop and has been modified

import http
import json
import re

# Creating a connention on port 8000
conn = http.client.HTTPConnection("localhost", 8000)
quitApp = False

name = ''
phone = ''
json_data = ''


def GET_Specific():
    print("GET request")

    name = input("Please enter a name: ")
    phone = input("Please enter a phone number: ")

    # Send a GET request for dave
    conn.request("GET", "/get_all_records")
    response = conn.getresponse()
    data = response.read()

    # Decode and print the retrived data
    # data = json.loads([data.decode()])

    new_data = json.loads(data)

    # Access every row in the directory and see if the specific data can be found
    for entry in new_data['Data']:
        if name in entry['name'] and phone in entry['number']:
            print(entry['name'] + ' ' + str(entry['number']))


def GET_All():
    print("GET request")

    data_list = ''
    readabledata = ''

    data_to_send = {"name": name, "phone": phone}
    data_to_post = json.dumps(data_to_send)

    # Send a GET request for dave
    conn.request("GET", "/get_all_records")

    # Store returned data from get request
    response = conn.getresponse()
    data = response.read()
    new_data = json.loads(data)
    print(new_data)

    ## Access all the data in the directory and print it
    for entry in new_data['Data']:
        print(entry['name'] + ' ' + str(entry['number']))

def POST():
    print("POST resquest")
    #data to be sent
    name = input("Please enter a name: ")
    phone = input("Please enter a phone number: ")

    data_to_send = {"name": name, "phone": phone}
    data_to_post = json.dumps(data_to_send)

    header = {"Content-type": "Application/x-www-form-urlencoded", "Accept": "text/plain"}
    #Send a post request to the server and send data to the server
    conn.request("POST", "add_score", data_to_post.encode(), header)

    # Get response form the server
    response = conn.getresponse()
    data = response.read()

    data_received = json.loads(data.decode())

    print("POST reponse: " + data.decode())
    print(data_received)


#Create a User Interface until x is selected
while quitApp is False:

    print('\n')
    print('HTTP Client testbed')
    print('1..Get Specific data')
    print('2..Get All data')
    print('3..POST data')
    print('x..Quit')
    print('\n')

    key = input('>')

    if key is '1':
        GET_Specific()

    if key is '2':
        GET_All()

    if key is '3':
        POST()

    if key is 'x':
        quitApp = True

conn.close()