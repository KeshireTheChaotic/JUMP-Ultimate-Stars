
int FUN_020641d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_5c [8];
  int local_54;
  
  uVar2 = OS_DisableInterrupts();
  if ((*(uint *)(param_1 + 0x1c) & 0x20) != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffdf;
    iVar3 = *(int *)(param_1 + 0x24);
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 4);
      if ((*(uint *)(iVar1 + 0xc) & 2) != 0) {
        if (*(int *)(param_1 + 0x24) == iVar1) {
          *(int *)(param_1 + 0x24) = iVar3;
        }
        FUN_020634f4(iVar1,3);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x24);
        }
      }
    }
  }
  if ((((*(uint *)(param_1 + 0x1c) & 0x40) != 0) || ((*(uint *)(param_1 + 0x1c) & 8) != 0)) ||
     (iVar3 = *(int *)(param_1 + 0x24), iVar3 == 0)) {
    if (((*(uint *)(param_1 + 0x1c) & 0x10) != 0) &&
       (*(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffef,
       (*(uint *)(param_1 + 0x58) & 0x400) != 0)) {
      FUN_02064744(auStack_5c);
      local_54 = param_1;
      (**(code **)(param_1 + 0x54))(auStack_5c,10);
    }
    if ((*(uint *)(param_1 + 0x1c) & 0x40) != 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffbf;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
      FUN_02053210(param_1 + 0x14);
    }
    OS_RestoreInterrupts(uVar2);
    return 0;
  }
  bVar4 = (*(uint *)(param_1 + 0x1c) & 0x10) == 0;
  if (bVar4) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
  }
  OS_RestoreInterrupts(uVar2);
  if ((bVar4) && ((*(uint *)(param_1 + 0x58) & 0x200) != 0)) {
    (**(code **)(param_1 + 0x54))(iVar3,9);
  }
  uVar2 = OS_DisableInterrupts();
  *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x40;
  if ((*(uint *)(iVar3 + 0xc) & 4) == 0) {
    OS_RestoreInterrupts(uVar2);
    return iVar3;
  }
  FUN_02053210(iVar3 + 0x18);
  OS_RestoreInterrupts(uVar2);
  return 0;
}

