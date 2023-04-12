# Databricks notebook source
# MAGIC %run ./Includes/Setup

# COMMAND ----------

print(full_name)

# COMMAND ----------

# MAGIC %fs ls '/databricks-datasets'

# COMMAND ----------

files = dbutils.fs.ls('/databricks-datasets')
display(files)
