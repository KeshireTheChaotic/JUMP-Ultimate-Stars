
void FUN_0217f9a8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_18;
  int local_14;
  
  FUN_0217f904();
  if (*(char *)(param_1 + 0x94) == '\x01') {
    iVar2 = FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else if ((*(uint *)(iVar2 + 0x180) & 4) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x180) = *(uint *)(iVar2 + 0x180) & 0xfffffffb;
      }
      uVar3 = FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
      FUN_02177010(uVar3,param_1 + 0x8c);
      if ((((*(uint *)(param_1 + 0xd4) & 2) != 0) &&
          (iVar2 = FUN_0217f784(*(undefined4 *)(param_1 + 0x24),0), iVar2 == 0)) &&
         (iVar2 = FUN_0217f784(*(undefined4 *)(param_1 + 0x24),1), iVar2 == 0)) {
        FUN_0217f890(param_1);
      }
    }
    else {
      uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x88) + 0x10) + 0x78);
      if (((uVar4 & 2) != 0) && ((uVar4 & 0x400000) == 0)) {
        iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
        iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
        for (puVar7 = *(undefined4 **)(iVar2 + 4);
            (iVar6 = 0, puVar7 != (undefined4 *)0x0 &&
            (iVar6 = *(int *)(param_1 + 0x88), iVar6 != puVar7[2])); puVar7 = (undefined4 *)*puVar7)
        {
        }
        if (iVar6 == 0) {
          FUN_0217f890(param_1);
          *(undefined1 *)(param_1 + 0x105) = 1;
        }
        else {
          piVar8 = *(int **)(iVar2 + (*(uint *)(param_1 + 0xd4) >> 0x1c) * 4 + 0x98);
          piVar5 = (int *)FUN_0217f5a8(*(undefined4 *)(param_1 + 0x88));
          if (*(char *)(puVar7 + 5) == '\x01') {
            local_18 = *piVar5;
            local_14 = piVar5[1];
          }
          else {
            local_18 = 0x3000;
            if (*piVar8 - *piVar5 < 1) {
              local_18 = -0x3000;
            }
            local_18 = *piVar5 + local_18;
            local_14 = piVar5[1];
            iVar2 = FUN_020837b0(*piVar5,piVar5[1]);
            iVar6 = FUN_020837b0(local_18,local_14);
            if (iVar2 != iVar6) {
              local_18 = *piVar5;
              local_14 = piVar5[1];
            }
          }
          *(int *)(param_1 + 0x8c) = *piVar5;
          *(int *)(param_1 + 0x90) = piVar5[1];
          uVar3 = FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
          iVar2 = FUN_02176d64(uVar3,&local_18,0xffffffff);
          if (iVar2 != 0) {
            uVar3 = FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
            FUN_02176d64(uVar3,piVar5,0xffffffff);
          }
        }
      }
    }
  }
  return;
}

