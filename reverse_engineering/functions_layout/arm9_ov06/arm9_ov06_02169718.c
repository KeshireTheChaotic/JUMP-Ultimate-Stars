
undefined4 FUN_02169718(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  bool bVar11;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  iVar1 = FUN_02155620(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
  iVar2 = *(int *)(param_1 + 0x20) - *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x134);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 < 1) {
    uVar3 = 0;
  }
  else {
    if (((*(byte *)(param_1 + 0x3a) & 8) == 0) && (*(byte *)(param_1 + 0x33) != 0xff)) {
      iVar6 = *(int *)(*(int *)(DAT_02172960 + (uint)*(byte *)(param_1 + 0x33) * 4 + 0xdc) + 0x1a8);
      iVar4 = *(int *)(*(int *)(iVar6 + 0x10) + 0x5c);
      iVar2 = FUN_02168f6c(iVar6);
      local_58 = *(short *)(param_1 + 0x34) * 0x100 * (iVar2 * -2 + 1);
      local_54 = (int)*(short *)(param_1 + 0x36) << 8;
      iVar2 = *(int *)(*(int *)(iVar6 + 0x10) + 0x70);
      local_30 = *(int *)(iVar4 + 0xc) + -0x400;
      iVar7 = *(int *)(iVar4 + 0xc) + local_58;
      iVar9 = *(int *)(iVar4 + 0x10) + *(short *)(param_1 + 0x36) * 0x100;
      local_2c = *(int *)(iVar4 + 0x10) +
                 ((int)*(short *)(iVar2 + 2) - (int)*(short *)(iVar2 + 6)) * 0x100;
      local_40 = iVar7 + -0x400;
      local_28 = *(int *)(iVar4 + 0xc) + 0x400;
      local_38 = iVar7 + 0x400;
      local_24 = *(int *)(iVar4 + 0x10) +
                 ((int)*(short *)(iVar2 + 2) + (int)*(short *)(iVar2 + 6)) * 0x100;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x70);
      local_3c = iVar9 + ((int)*(short *)(iVar2 + 2) - (int)*(short *)(iVar2 + 6)) * 0x100;
      local_34 = iVar9 + ((int)*(short *)(iVar2 + 2) + (int)*(short *)(iVar2 + 6)) * 0x100;
      uVar3 = FUN_02083ab8();
      FUN_0207d370(uVar3,&local_40,&local_30,&local_58,&local_50,&local_5c,0);
      local_58 = iVar7;
      local_54 = iVar9;
      uVar3 = FUN_02083ab8();
      local_5c = FUN_0207d260(uVar3,local_5c);
      if ((local_5c & 1) != 0) {
        local_54 = iVar9 - (local_3c - local_4c);
      }
      if ((local_5c & 2) != 0) {
        local_54 = iVar9 - (local_34 - local_44);
      }
      if ((local_5c & 4) != 0) {
        local_58 = iVar7 - (local_40 - local_50);
      }
      if ((local_5c & 8) != 0) {
        local_58 = iVar7 - (local_38 - local_48);
      }
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
      *(int *)(iVar2 + 0xc) = local_58;
      *(int *)(iVar2 + 0x10) = local_54;
      iVar2 = *(int *)(iVar4 + 0xc);
      bVar11 = iVar2 - local_58 < 0;
      if (bVar11) {
        iVar2 = 1;
      }
      if (!bVar11) {
        iVar2 = 0;
      }
      FUN_02083950(*(undefined4 *)(param_1 + 8),iVar2);
      iVar4 = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      puVar5 = (undefined1 *)(iVar2 + 0x9c);
      puVar8 = (undefined2 *)(iVar2 + 0x98);
      puVar10 = (undefined2 *)(iVar2 + 0x90);
      do {
        *puVar8 = 0xffff;
        iVar4 = iVar4 + 1;
        *puVar10 = *puVar8;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar4 < 2);
      if ((*(byte *)(param_1 + 0x3a) & 0x10) != 0) {
        FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),1);
        *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(*(int *)(iVar6 + 0x10) + 0x90);
      }
      *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 8;
    }
    if (((*(byte *)(param_1 + 0x3a) & 0x10) != 0) &&
       (iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c),
       iVar2 = FUN_020837b0(*(undefined4 *)(iVar2 + 0xc),*(int *)(iVar2 + 0x10) + -0x1000),
       *(short *)(param_1 + 0x30) == iVar2)) {
      FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),0);
      *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xef;
    }
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

