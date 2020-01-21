import sqlite3

#Connect to the database and save (commit) it
db = sqlite3.connect('mydb.sqlite')
cursor = db.cursor()
db.commit()
quitApp = False
name1 = 'Andres'
phone1 = '3366858'

name2 = 'John'
phone2 = '5557241'

#Create a table called user if it doesn't exist
cursor.execute('''CREATE TABLE IF NOT EXISTS users(name TEXT, phone TEXT )''')

def Insert():
    # Insert user 1's data
    cursor.execute('''INSERT INTO users(name, phone) VALUES(?,?)''', (name1, phone1))
    db.commit()
    print('First user inserted')

def Update():
    # Insert user 2's data
    cursor.execute('''INSERT INTO users(name, phone) VALUES(?,?)''', (name2, phone2))
    db.commit()
    print('Second user inserted')

#Delete the 'users' table if
def Delete():
    sql = 'DELETE FROM users'
    cursor.execute(sql)

#Create a User Interface until x is selected
while quitApp is False:

    print('\n')
    print('HTTP Client testbed')
    print('1..Insert data')
    print('2..Update data')
    print('3..Delete Database data')
    print('x..Quit')
    print('\n')

    key = input('>')

    if key is '1':
        Insert()

    if key is '2':
        Update()

    if key is '3':
        Delete()

    if key is 'x':
        quitApp = True




