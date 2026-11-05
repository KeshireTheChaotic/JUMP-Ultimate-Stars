
undefined4 FUN_0207834c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5ce) == '\0') {
    if (*(char *)(param_1 + 0x5cf) == '\0') {
      iVar2 = FUN_0207830c(param_1);
      if (iVar2 == 0) {
        (**(code **)(param_1 + 0x5e8))(param_1,*(undefined4 *)(param_1 + 0x5ec),0xb,0,0,0);
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

