
void FUN_0215652c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  piVar1 = *(int **)(*(int *)(iVar4 + 4) + 4);
  pcVar3 = *(code **)(*piVar1 + 0xd8);
  (*pcVar3)(piVar1,0,pcVar3,param_4,param_4);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 4) + 4));
  if (*(char *)(iVar4 + 0x25) != '\0') {
    if (*(char *)(iVar4 + 0x26) == '\0') {
      FUN_02073f24(8,1,0x3d);
    }
    else {
      FUN_02073f24(0x11,1,0x3d);
    }
    while (iVar2 = FUN_02073840(), iVar2 == 0) {
      (*DAT_020a0e18)();
    }
  }
  if (*(code **)(iVar4 + 0x1c) == (code *)0x0) {
    return;
  }
  (**(code **)(iVar4 + 0x1c))(*(undefined4 *)(iVar4 + 0x20));
  return;
}

