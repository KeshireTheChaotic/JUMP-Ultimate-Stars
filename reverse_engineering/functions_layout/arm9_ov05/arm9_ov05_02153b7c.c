
void FUN_02153b7c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_58;
  int iStack_54;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  iVar1 = param_2 * 0x14;
  iVar9 = 0;
  local_58 = 0;
  iVar6 = 0;
  uStack_28 = param_4;
  do {
    iVar7 = iVar6 * 0x2c + param_1;
    iVar8 = 0;
    do {
      iVar2 = *(int *)(iVar7 + iVar8 * 4 + 0xd0);
      if (iVar8 < *(char *)(param_1 + iVar6 + 0x46e)) {
        (**(code **)(**(int **)(iVar2 + 4) + 0x14c))();
        uVar3 = FUN_02020ed0(*(undefined4 *)(iVar7 + iVar8 * 4 + 0xd0),0);
        FUN_02020eb4(*(undefined4 *)(iVar7 + iVar8 * 4 + 0xd0),uVar3);
        if (param_2 == 4) {
          FUN_021509f8(auStack_38,0xfffffff0,0xfffffff8,0x10,8);
          uVar3 = FUN_02150958(0,auStack_38,&DAT_02093c8c);
          FUN_02020e98(*(undefined4 *)(iVar7 + iVar8 * 4 + 0xd0),uVar3);
        }
        else {
          FUN_021509f8(auStack_30,0xfffffff8,0xfffffff8,8,8);
          uVar3 = FUN_02150958(0,auStack_30,&DAT_02093c8c);
          FUN_02020e98(*(undefined4 *)(iVar7 + iVar8 * 4 + 0xd0),uVar3);
        }
      }
      else {
        piVar4 = *(int **)(iVar2 + 4);
        (**(code **)(*piVar4 + 0x148))(piVar4,8);
      }
      local_40 = ((uint)(byte)(&DAT_0216d566)[iVar1] +
                 iVar6 * (uint)(byte)(&DAT_0216d568)[iVar1] + 0x10) * 0x1000;
      iStack_3c = ((uint)(byte)(&DAT_0216d565)[iVar1] +
                  iVar8 * (uint)(byte)(&DAT_0216d567)[iVar1] + 0xc) * 0x1000;
      FUN_0214ce68(*(undefined4 *)(iVar7 + iVar8 * 4 + 0xd0),&iStack_3c,&local_40);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xb);
    iVar7 = (int)*(char *)(param_1 + iVar6 + 0x46e);
    iVar8 = iVar7 + -1;
    if (iVar9 <= iVar8) {
      iVar9 = iVar8;
    }
    if (iVar7 != 0) {
      local_58 = iVar6;
      iStack_54 = iVar8;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  if (param_3 != 0) {
    iVar6 = param_1 + param_2 * 4;
    if (param_2 == 3) {
      uVar5 = *(uint *)(iVar6 + 0x454) & 0xffff;
      FUN_0200d12c(uVar5,10);
      iVar6 = FUN_0200d12c(uVar5,10);
      iVar7 = (iVar6 + 1) * 0x2c + param_1 + 0xd0;
      iVar6 = FUN_02152d80(*(undefined4 *)(iVar7 + extraout_r1 * 4));
      if (iVar6 == 0) {
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar7 + extraout_r1 * 4) + 4),1);
      }
      else {
        func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x180) + 4),1);
      }
    }
    else {
      uVar5 = *(uint *)(iVar6 + 0x454);
      iVar7 = (uVar5 >> 0x10) * 0x2c + param_1 + 0xd0;
      uVar5 = uVar5 & 0xffff;
      iVar6 = FUN_02152d80(*(undefined4 *)(iVar7 + uVar5 * 4));
      if (iVar6 == 0) {
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar7 + uVar5 * 4) + 4),1);
      }
      else {
        func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x180) + 4),1);
      }
    }
  }
  iVar6 = iVar9 / 2;
  if (iStack_54 < iVar9 / 2) {
    iVar6 = iStack_54;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x180) + 4);
  (**(code **)(*piVar4 + 0x160))
            (piVar4,1,*(undefined4 *)(*(int *)(local_58 * 0x2c + param_1 + iVar6 * 4 + 0xd0) + 4));
  iStack_48 = ((*(byte *)(param_1 + 0x46d) - 8) + (uint)(byte)(&DAT_0216d566)[iVar1]) * 0x1000;
  iStack_44 = (int)((byte)(&DAT_0216d563)[iVar1] - 0x10) / 2 << 0xc;
  FUN_0214ce68(*(undefined4 *)(param_1 + 0x180),&iStack_44,&iStack_48);
  return;
}

