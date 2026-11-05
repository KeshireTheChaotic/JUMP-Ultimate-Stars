
undefined4 FUN_0206bfd4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 4);
  *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfd;
  return 1;
}

