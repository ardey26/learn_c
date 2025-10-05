if [ $# -eq 0 ]; then
	echo "Usage: $0 <folder_name>"
	echo "Example: $0 my_project"
	exit 1
fi

folder_name="$1"
if [ -d "$folder_name" ]; then
	echo "Warning: Folder '$folder_name' already exists!"
	read -p "Do you want to overwrite it? (y/n): " choice
	if [ "$choice" != "y" ]; then
		echo "Operation cancelled."
		exit 0
	fi
	rm -rf "$folder_name"
fi

mkdir -p "$folder_name"

cat >"$folder_name/main.c" <<'EOF'
#include <stdio.h>

int main() {
return 0;
}
EOF

echo "✓ Folder '$folder_name' created successfully!"
echo "✓ main.c file generated inside '$folder_name'"
