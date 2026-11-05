
void FUN_0215e544(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_28;
  int local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_020208ec(0);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x58) + 4) + 0x50);
  iVar6 = *(int *)(*(int *)(iVar1 + 4) + 0x50);
  piVar2 = (int *)FUN_02028920(0);
  iVar4 = *piVar2;
  uVar3 = *(uint *)(iVar4 + 0x28) |
          ~*(uint *)(iVar4 + *(int *)(iVar4 + 0x74) * 4 + 0x18) &
          *(uint *)(iVar4 + *(int *)(iVar4 + 0x70) * 4 + 0x18);
  local_1c = DAT_0216c9a0;
  local_18 = DAT_0216c9a4;
  iVar4 = (**(code **)(**(int **)(iVar1 + 4) + 0x128))();
  if (iVar4 == 0) {
    *(undefined1 *)(iVar5 + 0x88) = 0;
  }
  iVar4 = (**(code **)(**(int **)(iVar1 + 4) + 0x130))();
  if ((iVar4 != 0) ||
     (iVar1 = *(int *)(iVar1 + 4),
     *(int *)(iVar1 + 0x78) != 0 || (~*(uint *)(iVar1 + 0x84) & *(uint *)(iVar1 + 0x80)) != 0)) {
    iVar4 = *(int *)(iVar7 + 0xc);
    iVar1 = *(int *)(iVar6 + 0xc);
    if (((short)local_1c * 0x1000 + iVar4 <= iVar1) && (iVar1 <= (short)local_18 * 0x1000 + iVar4))
    {
      iVar1 = *(int *)(iVar6 + 0x10);
      if ((iVar1 < 0x28001) || (local_1c._2_2_ * 0x1000 + *(int *)(iVar7 + 0x10) <= iVar1)) {
        iVar4 = *(int *)(iVar7 + 0x10);
        if ((iVar1 < local_1c._2_2_ * 0x1000 + iVar4) || (local_18._2_2_ * 0x1000 + iVar4 < iVar1))
        {
          if ((local_18._2_2_ * 0x1000 + iVar4 < iVar1) && (iVar1 < 0x9e000)) {
            local_24[0] = *(int *)(iVar5 + 0x84) << 0xc;
            FUN_0215b3f4(*(undefined4 *)(iVar5 + 4),local_24);
            FUN_0207342c(0x78,3);
            FUN_0215e4f4(iVar5);
          }
        }
        else if (*(char *)(iVar5 + 0x88) == '\0') {
          *(undefined1 *)(iVar5 + 0x88) = 1;
          FUN_0215e750(iVar5 + 0x6c,(int *)(iVar6 + 0xc));
          FUN_0215e750(iVar5 + 0x78,(int *)(iVar7 + 0xc));
          *(int *)(iVar5 + 0x68) =
               (int)(*(int *)(iVar6 + 0x10) + ((uint)(*(int *)(iVar6 + 0x10) >> 0xb) >> 0x14)) >>
               0xc;
          *(undefined4 *)(iVar5 + 100) = 0;
        }
      }
      else {
        local_24[1] = 0;
        FUN_0215b3f4(*(undefined4 *)(iVar5 + 4),local_24 + 1);
        FUN_0207342c(0x78,3);
        FUN_0215e4f4(iVar5);
      }
    }
  }
  if (*(char *)(iVar5 + 0x88) != '\0') {
    iVar1 = *(int *)(iVar5 + 0x7c) + (*(int *)(iVar6 + 0x10) - *(int *)(iVar5 + 0x70));
    iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc;
    if (iVar1 < 0x38) {
      iVar1 = 0x38;
    }
    if (0x8e < iVar1) {
      iVar1 = 0x8e;
    }
    *(int *)(iVar5 + 100) = *(int *)(iVar5 + 100) + (iVar1 - *(int *)(iVar5 + 0x68));
    *(int *)(iVar5 + 0x68) = iVar1;
    if ((*(int *)(iVar5 + 100) < -8) || (8 < *(int *)(iVar5 + 100))) {
      FUN_0207342c(0x78,3);
      iVar4 = *(int *)(iVar5 + 100);
      if (iVar4 < 1) {
        *(int *)(iVar5 + 100) = iVar4 + 8;
      }
      else {
        *(int *)(iVar5 + 100) = iVar4 + -8;
      }
    }
    local_28 = iVar1 << 0xc;
    FUN_0215b3f4(*(undefined4 *)(iVar5 + 0x58),&local_28);
    local_2c = FUN_0200d12c((iVar1 + -0x38) * *(int *)(iVar5 + 0x84),0x56);
    local_2c = local_2c << 0xc;
    FUN_0215b3f4(*(undefined4 *)(iVar5 + 4),&local_2c);
  }
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 2) != 0) {
      FUN_0215e87c(iVar5);
    }
  }
  else {
    FUN_0215e7f4(iVar5);
  }
  return;
}

