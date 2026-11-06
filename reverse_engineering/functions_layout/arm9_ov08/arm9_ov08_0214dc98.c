
undefined4 FUN_0214dc98(byte *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0214cf04(param_2,0,0x104);
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_1 + 2));
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  if (*param_1 < 7) {
    uVar2 = (*(code *)((int)&switchD_0214dcd8::switchdataD_0214dcda +
                      (int)(short)(&switchD_0214dcd8::switchdataD_0214dcda)[*param_1]))();
    return uVar2;
  }
  return 0xffffffff;
}

