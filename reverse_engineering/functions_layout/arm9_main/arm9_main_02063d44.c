
uint FUN_02063d44(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_5c [72];
  
  uVar4 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38) + 0x3fU & 0xffffffe0;
  if (uVar4 <= param_3) {
    uVar2 = param_2 + 0x1fU & 0xffffffe0;
    FUN_02064744(auStack_5c);
    iVar1 = FUN_020645a0(auStack_5c,param_1,*(int *)(param_1 + 0x2c),
                         *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30),0xffffffff);
    if (iVar1 != 0) {
      iVar1 = FUN_02064430(auStack_5c,uVar2,*(undefined4 *)(param_1 + 0x30));
      if (iVar1 < 0) {
        FUN_020517fc(uVar2,0,*(undefined4 *)(param_1 + 0x30));
      }
      FUN_020644ec(auStack_5c);
    }
    *(uint *)(param_1 + 0x2c) = uVar2;
    iVar3 = uVar2 + *(int *)(param_1 + 0x30);
    iVar1 = FUN_020645a0(auStack_5c,param_1,*(int *)(param_1 + 0x34),
                         *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38),0xffffffff);
    if (iVar1 != 0) {
      iVar1 = FUN_02064430(auStack_5c,iVar3,*(undefined4 *)(param_1 + 0x38));
      if (iVar1 < 0) {
        FUN_020517fc(iVar3,0,*(undefined4 *)(param_1 + 0x38));
      }
      FUN_020644ec(auStack_5c);
    }
    *(int *)(param_1 + 0x34) = iVar3;
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x50) = 0x206433d;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
  }
  return uVar4;
}

