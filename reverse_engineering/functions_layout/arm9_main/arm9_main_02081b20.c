
void FUN_02081b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  uint *puVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  for (puVar6 = *(undefined4 **)(param_1 + 0x38); puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)*puVar6) {
    iVar12 = puVar6[2];
    iVar5 = *(int *)(*(int *)(iVar12 + 0xc) + 0x1c);
    iVar4 = *(int *)(*(int *)(iVar12 + 8) + 0x1c);
    iVar9 = *(int *)(iVar5 + 0xc);
    iVar7 = *(int *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar9 + 0x5c);
    iVar13 = *(int *)(iVar7 + 0x5c);
    *(undefined1 *)(iVar7 + 0x170) = *(undefined1 *)(*(int *)(iVar5 + 0x10) + 6);
    uVar2 = FUN_020823e4(iVar4,iVar5);
    *(int *)(iVar7 + 0x13c) = *(int *)(iVar7 + 0x13c) + local_2c;
    iVar3 = *(int *)(iVar4 + 0xc);
    if ((*(uint *)(iVar3 + 0x40) & 0x8000) != 0) {
      iVar3 = *(int *)(iVar5 + 0xc);
      *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) | 0x2000;
      iVar7 = iVar9;
    }
    puVar10 = (uint *)(iVar3 + 0x40);
    psVar8 = (short *)(iVar7 + 0x148);
    if ((*(uint *)(*(int *)(iVar4 + 0xc) + 0x40) & 0x8000) == 0) {
      sVar11 = 0;
    }
    else {
      sVar11 = 2000;
    }
    sVar11 = sVar11 + (short)(((int)*(char *)(*(int *)(iVar5 + 0x10) + 0xc) << 7) >> 1);
    if ((uVar2 & 1) != 0) {
      sVar11 = sVar11 * 2;
    }
    if ((*(uint *)(iVar5 + 0x14) & 0x1000000) != 0) {
      sVar11 = 0;
    }
    if ((*(uint *)(iVar5 + 0x18) & 4) == 0) {
      iVar7 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x30));
      if (iVar7 == 0) {
        *puVar10 = *puVar10 | 0x20;
        *psVar8 = *psVar8 + sVar11;
      }
      else {
        *puVar10 = *puVar10 & 0xffffffdf;
        *psVar8 = *psVar8 - sVar11;
      }
    }
    else if (*(int *)(iVar1 + 0xc) < *(int *)(iVar13 + 0xc)) {
      *puVar10 = *puVar10 | 0x20;
      *psVar8 = *psVar8 + sVar11;
    }
    else {
      *puVar10 = *puVar10 & 0xffffffdf;
      *psVar8 = *psVar8 - sVar11;
    }
    if ((*(uint *)(*(int *)(iVar4 + 0xc) + 0x40) & 0x8000) != 0) {
      *psVar8 = -*psVar8;
    }
    *(uint *)(*(int *)(iVar4 + 0xc) + 0x40) = *(uint *)(*(int *)(iVar4 + 0xc) + 0x40) | 0x1000;
    *(uint *)(*(int *)(iVar5 + 0xc) + 0x40) = *(uint *)(*(int *)(iVar5 + 0xc) + 0x40) | 0x100000;
    iVar7 = *(int *)(*(int *)(iVar12 + 0xc) + 0x20);
    iVar1 = *(int *)(*(int *)(iVar12 + 8) + 0x20);
    FUN_02080d28(*(int *)(iVar12 + 8) + 0x3c + (uint)*(byte *)(iVar12 + 0x11) * 8,
                 *(int *)(iVar12 + 0xc) + 0x3c + (uint)*(byte *)(iVar12 + 0x12) * 8,
                 (int)*(short *)(iVar1 + 0x34),(int)*(short *)(iVar1 + 0x36),
                 (int)*(short *)(iVar7 + 0x34),(int)*(short *)(iVar7 + 0x36),&local_30,&local_34);
    FUN_0206c7fc(0x21000c,local_30,local_34,0);
    FUN_0207342c(0x7a,0x2b);
  }
  return;
}

