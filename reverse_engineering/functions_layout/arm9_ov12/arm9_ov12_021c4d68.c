
void FUN_021c4d68(int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int local_18;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x88);
  psVar2 = *(short **)(param_1 + 0x78);
  psVar7 = psVar2 + uVar5 * 2;
  if (uVar5 != *(byte *)(*(int *)(param_1 + 0x74) + 0xd) - 1) {
    psVar2 = psVar2 + (uVar5 + 1) * 2;
  }
  if ((int)((uint)*(byte *)(param_1 + 0xa9) << 0x1d) < 0) {
    iVar10 = (int)*psVar7 >> 1;
    iVar9 = (int)psVar7[1] >> 1;
    iVar8 = (int)*psVar2 >> 1;
    iVar6 = (int)psVar2[1] >> 1;
  }
  else {
    iVar9 = (int)psVar7[1];
    iVar10 = (int)*psVar7;
    iVar8 = (int)*psVar2;
    iVar6 = (int)psVar2[1];
  }
  iVar8 = (iVar8 + 0x80) - (iVar10 + 0x80);
  iVar6 = (iVar6 + 0x60) - (iVar9 + 0x60);
  FUN_0200c954(iVar8 * iVar8 + iVar6 * iVar6);
  uVar3 = FUN_0200cb80();
  uVar3 = FUN_0200c9e4(0x45800000,uVar3);
  uVar4 = FUN_0200c954(*(undefined4 *)
                        (&DAT_021d0218 + (uint)*(byte *)(*(int *)(param_1 + 0x74) + 0xc) * 4));
  FUN_0200c5ac(uVar3,uVar4);
  uVar1 = FUN_0200c914();
  *(undefined2 *)(param_1 + 0x86) = uVar1;
  uVar3 = FUN_0200d12c(iVar8 * 0x1000,*(undefined2 *)(param_1 + 0x86));
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar3 = FUN_0200d12c(iVar6 * 0x1000,*(undefined2 *)(param_1 + 0x86));
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  local_1c = (iVar9 + 0x60) * 0x1000;
  local_18 = (iVar10 + 0x80) * 0x1000;
  FUN_021bb970(*(undefined4 *)(param_1 + 4),&local_18,&local_1c);
  *(undefined2 *)(param_1 + 0x84) = 0;
  return;
}

