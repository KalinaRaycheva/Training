import sqlite3

connection = sqlite3.connect('gfg.db')
cursor = connection.cursor()

command = """
DELETE FROM emp
WHERE fname = "Rishabh"
"""
cursor.execute(command)

#geting results
cursor.execute("SELECT * FROM emp")
result = cursor.fetchall()
print(result)

connection.commit()
connection.close()