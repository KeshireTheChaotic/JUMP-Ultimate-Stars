
bool FUN_0207e018(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  iVar1 = func_0x02161bac(iVar2);
  return *(char *)(*(byte *)(*(int *)(iVar2 + 0x14) + iVar1 * 8 + 2) + 0x2171538) == '\0';
}

