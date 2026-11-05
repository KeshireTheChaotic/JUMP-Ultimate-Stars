
undefined4 FUN_02163ec4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [72];
  
  puVar3 = auStack_58;
  uVar2 = 0;
  if (*param_1 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    FUN_02064744(auStack_58);
    iVar1 = FUN_0206451c(auStack_58,*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x021bf4ac(puVar3);
  if (iVar1 != 0) {
    *(int *)(DAT_0216e808 + 0x1b144) = DAT_0216e808 + 0x2c;
    if (((*(int *)(DAT_0216e808 + 0x1b144) != 0) &&
        (iVar1 = func_0x021bf19c(puVar3,*(int *)(DAT_0216e808 + 0x1b144),0x10000), iVar1 != 0)) &&
       (iVar1 = func_0x021bef3c(param_1,*(undefined4 *)(DAT_0216e808 + 0x1b144)), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  if (puVar3 == auStack_58) {
    FUN_020644ec();
  }
  return uVar2;
}

