
undefined4 FUN_02191c90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_0218f40c(iVar2);
  if ((uint)(int)*(char *)(iVar2 + 0x73) < 5) {
    uVar1 = (*(code *)((int)&switchD_02191cb0::switchdataD_02191cb2 +
                      (int)(short)(&switchD_02191cb0::switchdataD_02191cb2)[*(char *)(iVar2 + 0x73)]
                      ))(*(undefined4 *)(iVar2 + 0x68));
    return uVar1;
  }
  *(undefined2 *)(iVar2 + 0x70) = 1;
  return 0;
}

