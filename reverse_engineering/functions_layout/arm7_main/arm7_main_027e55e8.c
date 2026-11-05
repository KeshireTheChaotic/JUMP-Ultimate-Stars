
void FUN_027e55e8(void)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_210 [512];
  
  psVar1 = DAT_027f97f0;
  if ((*DAT_027f97f0 == 9) || (*DAT_027f97f0 == 10)) {
    uVar3 = OS_DisableInterrupts();
    iVar4 = *(int *)(psVar1 + 6);
    psVar1[6] = 0;
    psVar1[7] = 0;
    FUN_027e6748();
    FUN_027e0238();
    if (*psVar1 == 10) {
      *psVar1 = 8;
    }
    else if (*psVar1 == 9) {
      *psVar1 = 7;
    }
    OS_RestoreInterrupts(uVar3);
    iVar5 = FUN_027e2350(auStack_210,0);
    if (*(short *)(iVar5 + 4) == 0) {
      iVar5 = FUN_027e26d8(auStack_210,7);
      if (*(short *)(iVar5 + 4) == 0) {
        psVar1[0x45] = 0;
        if (iVar4 == 1) {
          FUN_027e6d04(0xffff);
        }
        puVar2 = (undefined2 *)FUN_03808074();
        *puVar2 = 0x10;
        puVar2[1] = 0;
        FUN_038080d0();
      }
      else {
        FUN_027e55ac(0x104);
      }
    }
    else {
      FUN_027e55ac(0x216);
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0x10;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

