
void FUN_02030f68(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint unaff_r6;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x9c8) == 0) {
    FUN_02030f24(param_1,0x1571);
  }
  *(undefined4 *)(param_1 + 0x9c4) = 0x270;
  *(int *)(param_1 + 0x9cc) = param_1 + 4;
  iVar4 = 0xe3;
  puVar2 = (uint *)(param_1 + 4);
  do {
    bVar5 = (puVar2[1] & 1) != 0;
    if (bVar5) {
      unaff_r6 = 0x9908b0df;
    }
    if (!bVar5) {
      unaff_r6 = 0;
    }
    iVar4 = iVar4 + -1;
    puVar3 = puVar2 + 1;
    *puVar2 = puVar2[0x18d] ^ unaff_r6 ^ (*puVar2 & 0x80000000 | puVar2[1] & 0x7fffffff) >> 1;
    puVar2 = puVar3;
  } while (0 < iVar4);
  iVar4 = 0x18c;
  uVar1 = 0;
  do {
    puVar2 = puVar3;
    bVar5 = (puVar2[1] & 1) != 0;
    if (bVar5) {
      unaff_r6 = 0x9908b0df;
    }
    if (!bVar5) {
      unaff_r6 = 0;
    }
    iVar4 = iVar4 + -1;
    puVar3 = puVar2 + 1;
    *puVar2 = puVar2[-0xe3] ^ unaff_r6 ^ (*puVar2 & 0x80000000 | puVar2[1] & 0x7fffffff) >> 1;
  } while (0 < iVar4);
  bVar5 = (*(uint *)(param_1 + 4) & 1) != 0;
  if (bVar5) {
    uVar1 = 0x9908b0df;
  }
  if (!bVar5) {
    uVar1 = 0;
  }
  *puVar3 = puVar2[-0xe2] ^
            uVar1 ^ (*puVar3 & 0x80000000 | *(uint *)(param_1 + 4) & 0x7fffffff) >> 1;
  return;
}

