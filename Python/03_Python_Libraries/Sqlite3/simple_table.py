import sqlite3

connection = sqlite3.connect('gfg.db')
cursor = connection.cursor()

#SQL command to create a table in the database
command = """
CREATE TABLE emp(
    staff_number INTEGER PRIMARY KEY,
    fname VARCHAR(20),
    lname VARCHAR(30),
    gender CHAR(1),
    joining DATE
);
"""
cursor.execute(command)

command = """
INSERT INTO emp 
VALUES (23, "Rishabh", "Bansal", "M", "2014-03-28");
"""
cursor.execute(command)

command = """
INSERT INTO emp
VALUES (1, "Bill", "Gates", "M", "1980-10-28");
"""
cursor.execute(command)

#geting results
cursor.execute("SELECT * FROM emp")
result = cursor.fetchall()
print(result)
 
connection.commit()
connection.close()
