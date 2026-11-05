
void FUN_0216d4e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 in_CY;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  uStack_18 = param_4;
  piVar2 = (int *)FUN_0216d69c();
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 1;
  iVar5 = piVar2[1] - *(int *)(param_1 + 0x40);
  iVar6 = *piVar2 - *(int *)(param_1 + 0x3c);
  FUN_0200b850(iVar6 * iVar6 + iVar5 * iVar5);
  FUN_0200bb00();
  uVar3 = FUN_0200b6c4();
  uVar4 = FUN_0200c954((int)*(short *)(param_1 + 0x58) << 8);
  FUN_0200c450(uVar3,uVar4);
  if ((bool)in_CY) {
    FUN_0216d69c(*(undefined4 *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x1a) == '\x14') {
      local_20 = *(undefined4 *)(param_1 + 0x38);
      local_1c = -*(int *)(param_1 + 0x34);
      FUN_02166a1c(param_1 + 0x34,&local_20);
      if (*(short *)(param_1 + 0x48) < 0) {
        *(int *)(param_1 + 0x34) = -*(int *)(param_1 + 0x34);
      }
    }
    else {
      *(int *)(param_1 + 0x34) = -*(int *)(param_1 + 0x34);
    }
    *(short *)(param_1 + 0x5a) = -*(short *)(param_1 + 0x5a);
    *(short *)(param_1 + 0x5c) = -*(short *)(param_1 + 0x5c);
    *(short *)(param_1 + 0x48) = -*(short *)(param_1 + 0x48);
    *(short *)(param_1 + 0x4a) = -*(short *)(param_1 + 0x4a);
    *(int *)(param_1 + 0x3c) = *piVar2;
    *(int *)(param_1 + 0x40) = piVar2[1];
    FUN_02166a1c(param_1 + 0x4c,param_1 + 0x3c);
    sVar1 = FUN_0200d12c(0x100,*(undefined2 *)(param_1 + 0x5e));
    *(short *)(param_1 + 0x60) = sVar1 + 1;
    *(undefined2 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(iVar7 + 0x24) = 0;
    *(undefined2 *)(iVar7 + 0x26) = 0;
    *(code **)(param_1 + 0x54) = FUN_0216d6ac;
  }
  else {
    *(short *)(iVar7 + 0x24) =
         (short)((uint)*(ushort *)(param_1 + 0x20) * *(int *)(param_1 + 0x34) >> 8);
    *(short *)(iVar7 + 0x26) =
         (short)((uint)*(ushort *)(param_1 + 0x20) * *(int *)(param_1 + 0x38) >> 8);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (int)*(short *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x5a);
  }
  return;
}

