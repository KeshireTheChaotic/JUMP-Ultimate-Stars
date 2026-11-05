
undefined4 FUN_02156480(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x158) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x70))
                      (param_1,*(undefined4 *)(param_1 + 0x74),0x46,0,0,0,0,0,0,param_4);
    uVar3 = extraout_r1;
    if (iVar1 == 0) {
      uVar3 = *(undefined1 *)(param_2 + 2);
    }
    uVar2 = 1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_2 + 1) = uVar3;
    }
  }
  return uVar2;
}

