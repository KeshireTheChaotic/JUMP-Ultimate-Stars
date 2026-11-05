
undefined4 FUN_0216dc70(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((int)(uint)(*(ushort *)(param_1 + 0x54) >> 1) < (int)*(short *)(param_1 + 0x18)) {
    uVar2 = FUN_0216da3c();
    FUN_0216de40(param_1);
  }
  else if (*(short *)(param_1 + 0x18) < 1) {
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
    uVar1 = FUN_0200d12c(*(int *)(param_1 + 0x4c) - *(int *)(iVar3 + 0xc));
    *(undefined2 *)(param_1 + 0x38) = uVar1;
    uVar1 = FUN_0200d12c(*(int *)(param_1 + 0x50) - *(int *)(iVar3 + 0x10),
                         (int)*(short *)(param_1 + 0x18));
    *(undefined2 *)(param_1 + 0x3a) = uVar1;
    uVar1 = *(undefined2 *)(param_1 + 0x3a);
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
    *(undefined2 *)(iVar3 + 0x24) = *(undefined2 *)(param_1 + 0x38);
    *(undefined2 *)(iVar3 + 0x26) = uVar1;
    FUN_0216de40(param_1);
    uVar2 = 1;
  }
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + -1;
  return uVar2;
}

