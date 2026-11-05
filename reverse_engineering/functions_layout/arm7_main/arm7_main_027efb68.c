
undefined4 FUN_027efb68(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 2) = 1;
  if ((*(ushort *)(param_1 + 0x10) & 1) != 0) {
    FUN_027f1b30();
  }
  if ((*(ushort *)(param_1 + 0x10) & 2) != 0) {
    FUN_027f1ad0();
  }
  if ((*(ushort *)(param_1 + 0x10) & 4) != 0) {
    FUN_027f1a18();
  }
  return 0;
}

