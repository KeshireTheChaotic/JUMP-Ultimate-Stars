
int FUN_0216acc8(int param_1,int *param_2,int param_3,undefined1 *param_4,undefined1 param_5,
                int param_6,int param_7,undefined1 param_8,int param_9)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  
  if ((*(uint *)(param_4 + 8) & 0x4000) != 0) {
    iVar2 = FUN_0215b3e0((int)(char)param_4[0x1d] << 1);
    param_6 = param_6 + (iVar2 - (char)param_4[0x1d]) * 0x100;
  }
  if ((*(uint *)(param_4 + 8) & 0x80000) != 0) {
    iVar2 = FUN_0215b3e0((int)(char)param_4[0x1d] << 1);
    param_7 = param_7 + (iVar2 - (char)param_4[0x1d]) * 0x100;
  }
  param_2[5] = *(int *)(param_4 + 0xc);
  param_2[6] = *(int *)(param_4 + 0x10);
  *param_2 = DAT_021729ec;
  param_2[1] = param_6;
  param_2[2] = param_7;
  *(undefined1 *)(param_2 + 7) = param_5;
  *(undefined1 *)((int)param_2 + 0x1d) = param_8;
  *(undefined1 *)(param_2 + 9) = param_4[1];
  param_2[8] = *(int *)(param_4 + 8);
  *(undefined1 **)(param_1 + 8) = param_4;
  *(undefined1 *)(param_1 + 0x1a) = *param_4;
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_4 + 4);
  *(undefined2 *)(param_1 + 0x26) = 0;
  sVar1 = *(short *)(param_4 + 6);
  if (sVar1 == 0) {
    sVar1 = 0x1e;
  }
  *(short *)(param_1 + 0x18) = sVar1;
  if (param_9 == 0) {
    param_9 = *(int *)(param_3 + 0x10);
  }
  *(int *)(param_1 + 0x28) = param_9;
  if ((*(uint *)(param_4 + 8) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  iVar2 = (*(code *)(&PTR_FUN_02172864)[*(byte *)(param_1 + 0x1a)])(param_1,param_3,param_2);
  if ((*(ushort *)(param_1 + 0x26) & 8) != 0) {
    pcVar6 = *(char **)(param_1 + 0x10);
    if (pcVar6 != (char *)0x0) {
      iVar2 = (int)*pcVar6;
    }
    if (pcVar6 != (char *)0x0 && iVar2 != 0) {
      *pcVar6 = (char)iVar2 + -1;
    }
    return 0;
  }
  iVar4 = FUN_0216a910(param_1);
  if (iVar4 != 0) {
    piVar5 = *(int **)(*(int *)(iVar4 + 8) + 4);
    (**(code **)(*piVar5 + 0x94))
              (piVar5,*(uint *)(*(int *)(*(int *)(param_3 + 8) + 4) + 0x3c) & 0x7fffffff);
    piVar5 = *(int **)(*(int *)(iVar4 + 0xc) + 4);
    (**(code **)(*piVar5 + 0x94))
              (piVar5,*(uint *)(*(int *)(*(int *)(param_3 + 8) + 4) + 0x3c) & 0x7fffffff);
    *(int *)(iVar4 + 0x30) = param_1;
    iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 0x5c);
    *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffdff;
  }
  FUN_02037c24(DAT_021729ec + 0x10,param_1);
  FUN_02037b98(DAT_021729ec,param_1);
  if ((*(uint *)(param_4 + 8) & 0x10000) != 0) {
    uVar7 = (uint)(byte)param_4[0x1d];
    if (uVar7 < 200) {
      FUN_0207342c(0x7a);
    }
    else if (uVar7 < 0xdc) {
      FUN_0207342c(*(undefined2 *)(param_1 + 0x24),uVar7 - 200);
    }
    else {
      FUN_0207342c(*(undefined2 *)(param_1 + 0x22),uVar7 - 0xdc);
    }
  }
  return iVar2;
}

