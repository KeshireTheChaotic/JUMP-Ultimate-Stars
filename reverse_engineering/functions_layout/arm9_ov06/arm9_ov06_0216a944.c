
undefined4
FUN_0216a944(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            char param_7,undefined2 param_8,undefined2 param_9,undefined4 param_10,
            undefined4 param_11)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_5c;
  undefined1 auStack_50 [12];
  int local_44;
  int local_40;
  undefined1 local_2b;
  int iStack_28;
  
  iVar9 = *(int *)(param_2 + 0x10);
  iStack_28 = param_4;
  if (*(char *)(iVar9 + param_3 * 0x20) == '\x0f') {
    local_5c = param_6;
    uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + 0x34);
    if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x38) & 0x800) != 0) {
      uVar6 = uVar6 | (uVar6 & 0xf0) >> 4;
    }
    for (puVar1 = (undefined4 *)FUN_0208369c(9); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      uVar2 = *(uint *)(puVar1[2] + 0x2c);
      if (((uVar2 & 1) == 0) && ((uVar2 & 8) == 0)) {
        iVar7 = *(int *)(puVar1[2] + 0x10);
        if (((*(uint *)(iVar7 + 0x38) & 0x800) == 0) &&
           (((uVar6 & 0xf & *(uint *)(iVar7 + 0x3c) & 0xf) == 0 &&
            (*(int *)(iVar7 + 0x17c) != 0 && (uVar6 & 0xf) != (*(uint *)(iVar7 + 0x34) & 0xf))))) {
          FUN_0216ab58(param_1,iVar9 + param_3 * 0x20,0,
                       *(int *)(*(int *)(iVar7 + 0x5c) + 0xc) + param_4,
                       *(int *)(*(int *)(iVar7 + 0x5c) + 0x10) + param_5,param_11,local_5c,param_10,
                       0xffffffff,0,0);
          local_5c = 0;
        }
      }
    }
    uVar3 = 0;
  }
  else {
    iVar9 = *(int *)(DAT_021729ec + 0x10);
    if (iVar9 == 0) {
      uVar3 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
      iVar4 = FUN_0216ab3c(param_1);
      iVar5 = *(int *)(iVar7 + 0xc);
      iVar8 = *(int *)(iVar7 + 0x10);
      iVar7 = param_4;
      if (iVar4 != 0) {
        iVar7 = -param_4;
      }
      FUN_020517fc(auStack_50,0,0x28);
      local_40 = param_5;
      local_2b = (undefined1)param_11;
      *(int *)(iVar9 + 0xc) = param_2;
      *(undefined4 *)(iVar9 + 0x10) = param_6;
      *(undefined2 *)(iVar9 + 0x24) = param_8;
      *(undefined2 *)(iVar9 + 0x22) = param_9;
      iVar4 = *(int *)(param_2 + 0x10);
      local_44 = param_4;
      uVar3 = FUN_0216ab3c(param_1);
      uVar3 = FUN_0216acc8(iVar9,auStack_50,param_1,iVar4 + param_3 * 0x20,uVar3,iVar5 + iVar7,
                           iVar8 + param_5,(int)param_7,param_10);
    }
  }
  return uVar3;
}

