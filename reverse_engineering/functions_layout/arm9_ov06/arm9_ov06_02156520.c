
undefined4 FUN_02156520(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + -1;
  if (*(code **)(param_1 + 0x70) == (code *)0x0) {
    uVar1 = 1;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x70))
                      (param_1,*(undefined4 *)(param_1 + 0x74),param_3,0,0,0,0,0,0,param_4);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 2);
    }
  }
  return uVar1;
}

