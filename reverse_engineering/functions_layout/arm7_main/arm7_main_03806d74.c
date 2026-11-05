
undefined4 FUN_03806d74(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OS_DisableInterrupts();
  param_2[1] = uVar1;
  uVar1 = FUN_037fbea4(0x27fffe8);
  *param_2 = uVar1 & 0x80;
  if ((*param_2 == 0) && (iVar2 = FUN_037fbeb4(param_1), iVar2 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

