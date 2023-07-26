import re
import sys

file = sys.argv[1]
target_dir = sys.argv[2]
assert len(sys.argv) == 3

with open(str(file), 'r') as f:
    verilog_content = f.read()

module_pattern = re.compile(r'module\s+(\w+)\s*\((.|\n)*?endmodule')
matches = module_pattern.finditer(verilog_content)

for match in matches:
    module_name = match.group(1)

    module_content = match.group(0)

    with open(str(target_dir) + '/'+ f'{module_name}.sv', 'w') as f:
        f.write(module_content)