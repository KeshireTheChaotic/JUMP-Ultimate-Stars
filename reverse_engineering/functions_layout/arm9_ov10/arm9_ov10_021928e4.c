
int FUN_021928e4(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  
  iVar7 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar7 + 0x68);
  iVar5 = 0;
  bVar2 = true;
  if ((*(char *)(iVar7 + 0x73) != '\0') && (*(char *)(iVar7 + 0x73) != '\x04')) {
    bVar2 = false;
  }
  if ((bVar2) && ((*(ushort *)(iVar7 + 0x70) & 4) == 0)) {
    iVar5 = -0x4c;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_0218f398(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26));
    }
    bVar2 = true;
    cVar1 = *(char *)(iVar7 + 0x73);
    if ((cVar1 != '\0') && (cVar1 != '\x04')) {
      bVar2 = false;
    }
    if (bVar2) {
      local_1c = 0x36;
    }
    else {
      local_1c = 0x2a;
    }
    iVar6 = *(int *)(iVar7 + 0x4c) + local_1c;
    if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      local_1c = FUN_0219286c(*(int *)(iVar7 + 0x48) - local_1c);
    }
    else {
      local_1c = *(int *)(iVar7 + 0x48) - local_1c;
    }
    while (iVar4 = FUN_02192810(iVar6,local_1c,param_1), 0 < iVar4) {
      iVar4 = FUN_0218eca8(iVar6);
      if (iVar4 < 1) {
        bVar2 = true;
        if ((*(char *)(iVar7 + 0x73) != '\0') && (*(char *)(iVar7 + 0x73) != '\x04')) {
          bVar2 = false;
        }
        if (bVar2) {
          *(ushort *)(iVar7 + 0x70) = *(ushort *)(iVar7 + 0x70) & 0xfff1;
        }
        iVar5 = -0x4c;
        break;
      }
      iVar5 = iVar5 + iVar4;
    }
  }
  *(undefined2 *)(iVar3 + 0x102) = *(undefined2 *)(param_1 + 0x20);
  FUN_02053210(iVar3 + 0x104);
  return iVar5;
}

