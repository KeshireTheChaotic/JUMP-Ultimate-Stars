
bool FUN_021617b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  iVar1 = *(int *)(iVar2 + 0x41c);
  if (param_2 < iVar1) {
    return true;
  }
  if (param_2 < iVar1 + 0x20) {
    iVar1 = param_2 >> 0x1f;
    return (*(uint *)(iVar2 + 0x418) &
           1 << (((uint)(param_2 * 0x8000000 + iVar1) >> 0x1b | iVar1 << 5) - iVar1 & 0xff)) != 0;
  }
  return false;
}

