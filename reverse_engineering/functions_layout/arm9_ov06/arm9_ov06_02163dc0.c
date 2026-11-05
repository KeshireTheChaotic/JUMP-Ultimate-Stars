
void FUN_02163dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(short *)(param_1 + 0x10) == 0) {
    *(undefined2 *)(param_1 + 0x10) = 0x78;
    uVar1 = FUN_0215b3e0(**(undefined4 **)(param_1 + 0xc));
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    FUN_0207342c(0x7a,0x4c);
    iVar2 = *(int *)(param_1 + 0xc) + (uint)*(byte *)(param_1 + 0x13) * 8;
    uVar3 = *(undefined4 *)(iVar2 + 4);
    uVar4 = *(undefined4 *)(iVar2 + 8);
    FUN_0216ab58(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),&DAT_02172458,0,uVar3,uVar4,5,0,0,
                 0xffffffff,0,0,uVar3,uVar4,param_4);
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
  return;
}

