
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0205be28(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x24) << 0x1f < 0) {
    FUN_0205bdac();
  }
  iVar1 = FUN_0200d338(param_4,*(int *)(param_1 + 0x48) * param_6 * 0x20);
  *(int *)(param_1 + 0x28) = iVar1 * param_6 * 0x20;
  uVar2 = *(uint *)(param_1 + 0x28);
  if (param_2 == 1) {
    uVar2 = uVar2 >> 1;
  }
  uVar3 = FUN_0200d338(param_5 * uVar2,param_6);
  uVar4 = FUN_0205b050();
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  if (*(int *)(param_1 + 0x40) < 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + iVar1 + 0x4c);
      *(int *)(&DAT_020adf58 + uVar2 * 8) = *(int *)(param_1 + 0x28) * iVar1 + param_3;
      *(undefined4 *)(&DAT_020adf5c + uVar2 * 8) = 0;
      FUN_02056790(uVar2,param_2,*(undefined4 *)(&DAT_020adf58 + uVar2 * 8),1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x48));
  }
  FUN_020568a0(*(undefined4 *)(param_1 + 0x40),uVar3,uVar3,FUN_0205bc2c);
  FUN_0205e240(&DAT_020adf0c,param_1);
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x34) = param_8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe | 1;
  uVar3 = OS_DisableInterrupts();
  *(undefined4 *)(param_1 + 0x2c) = 1;
  FUN_0205bb78(param_1,0);
  *(int *)(param_1 + 0x2c) = param_6;
  OS_RestoreInterrupts(uVar3);
  return 1;
}

