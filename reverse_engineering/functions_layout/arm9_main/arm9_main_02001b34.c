
undefined4 FUN_02001b34(undefined4 param_1,undefined1 *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_18 [12];
  
  puVar4 = local_18;
  if (*(short *)(param_2 + 2) == 0) {
    return 0;
  }
  iVar3 = 8;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_18[0] = param_3;
  uVar2 = func_0x02193b60(param_1,local_18);
  uVar2 = FUN_02001ba8(uVar2,0xffffffff);
  return uVar2;
}

