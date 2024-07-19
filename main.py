import os

# Шлях до папки додатка (директорія програм)
app_folder = '/storage/emulated/0/Android/data/com.example.myapp/files'
hidden_folder = '/storage/emulated/0/Android/data/com.example.myapp/files/.hidden'

# Створення папки додатка, якщо вона не існує
if not os.path.exists(app_folder):
    os.makedirs(app_folder)

# Створення прихованої папки, якщо вона не існує
if not os.path.exists(hidden_folder):
    os.makedirs(hidden_folder)

# Приховання файлів у папці додатка (переміщення до прихованої папки)
for filename in os.listdir(app_folder):
    file_path = os.path.join(app_folder, filename)
    if os.path.isfile(file_path) and not filename.startswith('.'):
        os.rename(file_path, os.path.join(hidden_folder, filename))
