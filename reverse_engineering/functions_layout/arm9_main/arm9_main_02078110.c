
undefined4 FUN_02078110(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02078038();
  if (iVar1 == 0) {
    iVar1 = FUN_0207834c(param_1,1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (uint)*(byte *)(param_2 + 0x41) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) +
              (*(char *)(*(int *)(param_2 + 0x34) + 8) + -1) * 8;
      (**(code **)(param_1 + 0x5e8))
                (param_1,*(undefined4 *)(param_1 + 0x5ec),7,*(undefined1 *)(param_2 + 0x42),
                 (int)*(char *)(iVar1 + 2),(int)*(char *)(iVar1 + 3),param_4);
      uVar2 = 0;
      *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) | 0x101;
      *(int *)(param_1 + 0x570) = param_2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

