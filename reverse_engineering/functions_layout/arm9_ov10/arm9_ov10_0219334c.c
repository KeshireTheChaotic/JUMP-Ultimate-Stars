
uint FUN_0219334c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 100);
  uVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x73);
    if (cVar1 == '\x01') {
      if (*(int *)(iVar2 + 0x104) != 0) {
        uVar3 = (uint)*(ushort *)(*(int *)(iVar2 + 0x104) + 4);
      }
    }
    else if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      uVar3 = *(int *)(param_1 + 0x44) - *(int *)(iVar2 + 0xf8);
    }
  }
  return uVar3;
}

