
void FUN_020826a0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_r9;
  int iVar7;
  bool bVar8;
  
  for (puVar6 = *(undefined4 **)(param_1 + 0xa0); puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)*puVar6) {
    iVar7 = puVar6[2];
    iVar4 = *(int *)(*(int *)(iVar7 + 0xc) + 0x1c);
    iVar5 = *(int *)(*(int *)(iVar7 + 8) + 0x1c);
    if (*(int *)(*(int *)(iVar4 + 0xc) + 100) == 0) {
      uVar2 = *(uint *)(*(int *)(iVar5 + 0xc) + 0x40);
      if ((uVar2 & 0x10) == 0) {
        bVar8 = *(short *)(*(int *)(iVar7 + 0xc) + 0xe) == 7;
        if (bVar8) {
          uVar2 = uVar2 | 2;
        }
        else {
          uVar2 = uVar2 | 4;
        }
        *(uint *)(*(int *)(iVar5 + 0xc) + 0x40) = uVar2;
        if (bVar8) {
          unaff_r9 = 0xfffffffc;
        }
        iVar3 = *(int *)(*(int *)(iVar4 + 0xc) + 0x5c);
        if (!bVar8) {
          unaff_r9 = 4;
        }
        FUN_0206c7fc(0x230003,*(int *)(iVar3 + 0xc) >> 8,*(int *)(iVar3 + 0x10) >> 8,0);
        uVar1 = FUN_0207bf50(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar5 + 0xc),2,
                             *(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8),unaff_r9,4);
        *(undefined4 *)(*(int *)(iVar5 + 0xc) + 100) = uVar1;
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 100) = *(undefined4 *)(*(int *)(iVar5 + 0xc) + 100);
      }
    }
  }
  return;
}

