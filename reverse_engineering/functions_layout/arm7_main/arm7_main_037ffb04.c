
int FUN_037ffb04(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 2) == '\0') {
    iVar1 = 0;
  }
  else if (*(ushort *)(param_1 + 6) < *(ushort *)(param_1 + 4)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_037ff39c(*(ushort *)(param_1 + 8) >> 8);
    iVar1 = (uint)*(byte *)(param_1 + 3) * (uint)*(byte *)(param_1 + 2) * iVar1;
  }
  return iVar1;
}

