from elftools.elf.structs  import *
import elftools.elf.segments as ELF_segments
import elftools.elf.sections  as ELF_sections
from elftools.elf.elffile import *
import sys


def main(filename):
    print("open file...")
    print(filename)
    with open(filename,'rb') as f:
        elffile = ELFStructs(f)
    print(elffile)
    elffile.create_basic_structs()
    print(elffile.Elf_Ehdr.Elf_byte('EI_VERSION'))


if __name__ == '__main__':
    for filename in sys.argv[1:]:
        main(filename)
