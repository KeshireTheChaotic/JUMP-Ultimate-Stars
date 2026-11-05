
void FUN_027e0da4(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  psVar2 = DAT_027f97f0;
  if ((DAT_027f97f0[0x4d] == 1) && (*(short *)(param_1 + 0x10) == 0x20)) {
    uVar3 = OS_DisableInterrupts();
    FUN_037fd998(&DAT_0380bc10);
    psVar2[0x42] = 0;
    OS_RestoreInterrupts(uVar3);
    psVar2[0x45] = 0;
    FUN_027e6f14(1);
    puVar4 = (undefined2 *)FUN_03808074();
    *puVar4 = 0x80;
    puVar4[1] = 0;
    puVar4[2] = 0x17;
    puVar4[3] = 1;
    FUN_038080d0();
  }
  else {
    puVar5 = (undefined4 *)FUN_027e0134();
    if (puVar5 == (undefined4 *)0x0) {
      iVar6 = 0;
    }
    else {
      *puVar5 = 0x25;
      puVar5[2] = 0x8003;
      sVar1 = *psVar2;
      if ((sVar1 == 9) || (sVar1 == 7)) {
        puVar5[1] = 0x7ffe;
      }
      else if ((sVar1 == 10) || (sVar1 == 8)) {
        puVar5[1] = 1;
      }
      iVar6 = FUN_037fcc6c(&DAT_027f8328,puVar5,0);
    }
    if (iVar6 == 0) {
      puVar4 = (undefined2 *)FUN_03808074();
      *puVar4 = 0x80;
      puVar4[1] = 8;
      puVar4[2] = 0x16;
      puVar4[3] = 0x25;
      FUN_038080d0();
    }
  }
  return;
}

