
void FUN_0214deb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x128))();
  FUN_0214e290(&local_30,*(undefined4 *)(param_1 + 0xc));
  FUN_0214e27c(&local_2c,*(undefined4 *)(param_1 + 0xc));
  FUN_021518c4(*(undefined4 *)(param_1 + 0x3c),
               (int)(local_2c + ((uint)(local_2c >> 0xb) >> 0x14)) >> 0xc,
               (int)(local_30 + ((uint)(local_30 >> 0xb) >> 0x14)) >> 0xc);
  uVar5 = FUN_0214e2a4(*(undefined4 *)(param_1 + 8));
  if (((uVar5 & 0x100) == 0) ||
     (uVar5 = FUN_0214e2a4(*(undefined4 *)(param_1 + 8)), (uVar5 & 0x200) == 0)) {
    uVar5 = FUN_0214db5c(*(undefined4 *)(param_1 + 8));
    if ((uVar5 & 0x100) == 0) {
      uVar5 = FUN_0214db5c(*(undefined4 *)(param_1 + 8));
      if (((uVar5 & 0x200) != 0) &&
         (*(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1,
         *(ushort *)(param_1 + 0x52) < 0xb1)) {
        *(undefined2 *)(param_1 + 0x52) = 0xb9;
      }
    }
    else {
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
      if (0xb9 < *(ushort *)(param_1 + 0x52)) {
        *(undefined2 *)(param_1 + 0x52) = 0xb1;
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x52) = 0xb1;
  }
  iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x128))();
  bVar1 = *(byte *)(param_1 + 0x56);
  if (iVar6 == 0) {
    *(byte *)(param_1 + 0x56) = bVar1 & 0xfe;
  }
  else {
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 0x56) = bVar1 | 1;
      FUN_0214e27c(&local_34,*(undefined4 *)(param_1 + 0xc));
      *(short *)(param_1 + 0x4c) =
           (short)((int)(local_34 + ((uint)(local_34 >> 0xb) >> 0x14)) >> 0xc);
      FUN_0214e290(&local_38,*(undefined4 *)(param_1 + 0xc));
      *(short *)(param_1 + 0x4e) =
           (short)((int)(local_38 + ((uint)(local_38 >> 0xb) >> 0x14)) >> 0xc);
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x50);
      local_28 = *(int *)(iVar6 + 0xc);
      local_24 = *(int *)(iVar6 + 0x10);
      local_20 = *(undefined4 *)(iVar6 + 0x14);
      sVar3 = *(short *)(param_1 + 0x4e);
      sVar4 = *(short *)(param_1 + 0x4c);
      iVar6 = sVar3 * 0x1000 - local_24;
      iVar9 = sVar4 * 0x1000 - local_28;
      iVar6 = (int)(short)((int)(iVar6 + ((uint)(iVar6 >> 0xb) >> 0x14)) >> 0xc);
      iVar9 = (int)((iVar9 + ((uint)(iVar9 >> 0xb) >> 0x14)) * 0x10) >> 0x10;
      if (iVar6 < 0) {
        iVar10 = -iVar6;
      }
      else {
        iVar10 = iVar6;
      }
      if (iVar9 < 0) {
        iVar8 = -iVar9;
      }
      else {
        iVar8 = iVar9;
      }
      if (iVar10 < iVar8) {
        sVar3 = FUN_0200d12c(iVar6 << 8);
        iVar6 = FUN_0214e2b8(&local_28,(int)sVar4);
        if (iVar6 == 0) {
          iVar9 = (int)*(short *)(param_1 + 0x4c);
          iVar10 = (int)((local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) * 0x10) >> 0x10;
          iVar6 = (int)*(short *)(param_1 + 0x4e) << 8;
        }
        else {
          iVar9 = (int)((local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) * 0x10) >> 0x10;
          iVar6 = ((int)(local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) >> 0xc) << 8;
          iVar10 = (int)*(short *)(param_1 + 0x4c);
        }
        for (; iVar9 <= iVar10; iVar9 = iVar9 + 1) {
          FUN_0214e2cc(param_1,(int)(short)iVar9,(iVar6 << 8) >> 0x10);
          iVar6 = iVar6 + sVar3;
        }
      }
      else {
        sVar4 = FUN_0200d12c(iVar9 << 8,iVar6);
        iVar6 = FUN_0214e2b8(&local_24,(int)sVar3);
        if (iVar6 == 0) {
          iVar9 = (int)*(short *)(param_1 + 0x4e);
          iVar10 = (int)((local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) * 0x10) >> 0x10;
          iVar6 = (int)*(short *)(param_1 + 0x4c) << 8;
        }
        else {
          iVar9 = (int)((local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) * 0x10) >> 0x10;
          iVar6 = ((int)(local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) >> 0xc) << 8;
          iVar10 = (int)*(short *)(param_1 + 0x4e);
        }
        for (; iVar9 <= iVar10; iVar9 = iVar9 + 1) {
          FUN_0214e2cc(param_1,(iVar6 << 8) >> 0x10,(int)(short)iVar9);
          iVar6 = iVar6 + sVar4;
        }
      }
      *(short *)(param_1 + 0x4c) =
           (short)((int)(local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) >> 0xc);
      *(short *)(param_1 + 0x4e) =
           (short)((int)(local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) >> 0xc);
    }
    *(undefined2 *)(param_1 + 0x54) = 0;
  }
  uVar2 = *(ushort *)(param_1 + 0x54);
  *(ushort *)(param_1 + 0x54) = uVar2 + 1;
  if (0x5a < uVar2) {
    iVar6 = FUN_0203b424(3);
    uVar7 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x88) + 4) + 0x948))();
    FUN_020517fc(uVar7,0,0xc000);
    FUN_02151898(*(undefined4 *)(param_1 + 0x3c));
    *(undefined2 *)(param_1 + 0x54) = 0;
  }
  return;
}

